/* 
 * Copyright (c) 2012, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * */
/*
 *  ======== Timer.c ========
 */
#include <xdc/std.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/Types.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/c64/Hwi.h>

#include "package/internal/Timer.xdc.h"

/* Timer Control Register Description
 * Bit#         Name            Value
 * 31-16        RESERVED        0
 * 15           SPND            1 stop during emulation halt
 * 14-12        RESERVED        0
 * 11           TSTAT           0
 * 10           INVNP           0
 * 09           CLKSRC          1 internal clock
 * 08           CP              0
 * 07           HLD             0
 * 06           GO              0
 * 05           RESERVED        0
 * 04           PWID            0
 * 03           DATAIN          0
 * 02           DATAOUT         0
 * 01           INVOUT          0
 * 00           FUNC            1 tout is timer output pin
 */

#define TIMER_CONTROL_START     0xC0
#define TIMER_CONTROL_RESUME    0x40
#define TIMER_CONTROL_DEFAULT   0x0
#define CONTROL_DATIN_MASK      0x8
#define CONTROL_TSTAT_MASK      0x800

#define Timer_sweep ti_sysbios_family_c64_Timer_sweep

typedef volatile struct TimerRegs {
    UInt control;
    UInt period;
    UInt count;
}TimerRegs;

extern cregister volatile unsigned int ICR;
extern cregister volatile unsigned int IFR;

static char const intNumDef[3] = {14, 15, 10};
static char const eventIdDef[3] = {1, 2, 19};

static Int postInit(Timer_Object *timer, Error_Block *eb);
static Void initDevice(Timer_Object *obj);
static Bool checkOverflow(UInt32 a, UInt32 b);

/*
 *  ======== Timer_getNumTimers ========
 */
UInt Timer_getNumTimers()
{
    return (Timer_NUM_TIMER_DEVICES);
}

/*
 *  ======== Timer_getStatus ========
 */
Timer_Status Timer_getStatus(UInt timerId)
{
    Assert_isTrue(timerId < Timer_NUM_TIMER_DEVICES, NULL);
    
    if (Timer_module->availMask & (0x1 << timerId)) {
        return (Timer_Status_FREE);
    }
    else {
        return (Timer_Status_INUSE);
    }
}

/*
 *  ======== Timer_getMaxTicks ========
 */
UInt32 Timer_getMaxTicks(Timer_Object *obj, UInt32 periodCounts)
{
    return (0);
}

/*
 *  ======== Timer_setNextTick ========
 */
Void Timer_setNextTick(Timer_Object *obj, UInt32 newPeriodCounts,
    UInt32 countsPerTick)
{
}

/*
 *  ======== Timer_Module_startup ========
 *  Calls postInit for all statically-created & constructed
 *  timers to initialize them.
 */
Int Timer_Module_startup(status)
{
    Int i;
    Timer_Object *obj;

    if (Timer_startupNeeded) { 
        for (i = 0; i < Timer_NUM_TIMER_DEVICES; i++) {
            obj = Timer_module->handles[i];
            /* if timer was statically created/constructed */
            if ((obj != NULL) && (obj->staticInst)) {
                postInit(obj, NULL);
            }
        }
    }
    return (Startup_DONE);
}

/*
 *  ======== Timer_startup ========
 *  Here after main(). Called from BIOS_start()
 *  Calls postInit for all statically-created & constructed
 *  timers to initialize them.
 */
Void Timer_startup()
{
    Int i;
    Timer_Object *obj;

    if (Timer_startupNeeded) { 
        for (i = 0; i < Timer_NUM_TIMER_DEVICES; i++) {
            obj = Timer_module->handles[i];
            /* if timer was statically created/constructed */
            if ((obj != NULL) && (obj->staticInst)) {
                if (obj->startMode == Timer_StartMode_AUTO) {
                        Timer_start(obj);
                }
            }
        }
    }
}

/*
 *  ======== Timer_getHandle ========
 */
Timer_Handle Timer_getHandle(UInt id)
{
    Assert_isTrue((id < Timer_NUM_TIMER_DEVICES), NULL);
    return (Timer_module->handles[id]);
}

/*
 *  ======== Timer_Instance_init ========
 * 1. Select timer based on id
 * 2. Mark timer as in use
 * 3. Save timer handle if necessary (needed by TimestampProvider on 64).
 * 4. Init obj using params
 * 5. Create Hwi if tickFxn !=NULL
 * 6. Timer_init()
 * 7. Timer configuration (wrt emulation, external frequency etc)
 * 8. Timer_setPeriod()
 * 9. Timer_start()
 */
Int Timer_Instance_init(Timer_Object *obj, Int id, Timer_FuncPtr tickFxn, const Timer_Params *params, Error_Block *eb)
{
    UInt key;
    Int i, status;
    Hwi_Params hwiParams;
    Int clkSrc;
    UInt tempId = 0xffff;

    if (id >= Timer_NUM_TIMER_DEVICES) {
        if (id != Timer_ANY) {
            Error_raise(eb, Timer_E_invalidTimer, id, 0);
            return (1);
        }
    }

    key = Hwi_disable();

    if (id ==   Timer_ANY) {
        for (i = 0; i < Timer_NUM_TIMER_DEVICES; i++) {
            if ((Timer_anyMask & (1 << i))
                && (Timer_module->availMask & (1 << i))) {
                Timer_module->availMask &= ~(1 << i);
                tempId = i;
                break;
            }
        }
    }
    else if (Timer_module->availMask & (1 << id)) {
        Timer_module->availMask &= ~(1 << id);
        tempId = id;
    }

    Hwi_restore(key);

    obj->staticInst = FALSE;

    if (tempId == 0xffff) {
        Error_raise(eb, Timer_E_notAvailable, id, 0);
        return (2);
    }
    else {
        obj->id = tempId;
    }

    Timer_module->handles[obj->id] = obj;

    clkSrc = (params->extFreq.lo)?0:1;
    obj->controlRegInit = (params->controlRegInit.func |
                       (params->controlRegInit.invout << 1) |
                       (params->controlRegInit.datout << 2) |
                       (params->controlRegInit.pwid << 4) |
                       (params->controlRegInit.cp << 8) |
                       (clkSrc << 9) |
                       (params->controlRegInit.spnd << 15));

    obj->runMode = params->runMode;
    obj->startMode = params->startMode;
    obj->period = params->period;
    obj->periodType = params->periodType;
    obj->arg = params->arg;
    if (params->intNum == -1) {
        obj->intNum = intNumDef[obj->id];
    }
    else {
        obj->intNum = params->intNum;
    }
    obj->tickFxn = tickFxn;

    /* extFreq.hi is ignored */
    if (params->extFreq.lo) {
        obj->extFreq.lo = params->extFreq.lo;
    }

    if (obj->tickFxn != NULL) {
        if (params->hwiParams) {
            Hwi_Params_copy(&hwiParams, (params->hwiParams));
        }
        else {
            Hwi_Params_init(&hwiParams);
        }

        hwiParams.eventId = eventIdDef[obj->id];

        if (obj->runMode == Timer_RunMode_ONESHOT) {
            if (hwiParams.maskSetting == Hwi_MaskingOption_NONE) {
                Error_raise(eb, Timer_E_invalidHwiMask, 0, 0);
                return (3);
            }
            if (hwiParams.maskSetting == Hwi_MaskingOption_BITMASK) {
                if (!(hwiParams.disableMask & (1 << obj->intNum))) {
                    Error_raise(eb, Timer_E_invalidHwiMask, 0, 0);
                    return (3);
                }
            }
        }

        if (obj->runMode == Timer_RunMode_CONTINUOUS) {
            hwiParams.arg = obj->arg;
            obj->hwi = Hwi_create (obj->intNum, obj->tickFxn, 
                &hwiParams, eb);
        }
        else {
            hwiParams.arg = (UArg)obj;
            obj->hwi = Hwi_create (obj->intNum, Timer_oneShotStub, 
                &hwiParams, eb);
        }
        if (obj->hwi == NULL) {
            return (4);
        }
    }
    else {
        obj->hwi = NULL;
    }

    status = postInit(obj, eb);

    if (status) {
        return (status);
    }

    if (obj->startMode == Timer_StartMode_AUTO) {
        Timer_start(obj);
    }

    return (0);
}

/*
 *  ======== Timer_reconfig ========
 * 1. Init obj using params
 * 2. Reconfig Hwi
 * 3. Timer_init()
 * 4. Timer configuration (wrt emulation, external frequency etc)
 * 5. Timer_setPeriod()
 * 6. Timer_start()
 */
Void Timer_reconfig (Timer_Object *obj, Timer_FuncPtr tickFxn, const Timer_Params *params, 
    Error_Block *eb)
{
    Hwi_Params hwiParams;
    Int clkSrc;

    clkSrc = (params->extFreq.lo)?0:1;
    obj->controlRegInit = (params->controlRegInit.func |
                       (params->controlRegInit.invout << 1) |
                       (params->controlRegInit.datout << 2) |
                       (params->controlRegInit.pwid << 4) |
                       (params->controlRegInit.cp << 8) |
                       (clkSrc << 9) |
                       (params->controlRegInit.spnd << 15));

    obj->runMode = params->runMode;
    obj->startMode = params->startMode;
    obj->period = params->period;
    obj->periodType = params->periodType;
    obj->arg = params->arg;
    obj->tickFxn = tickFxn;
    if (params->extFreq.lo) {
        obj->extFreq.lo = params->extFreq.lo;
    }

    if (obj->tickFxn) {
        if (params->hwiParams) {
            Hwi_Params_copy(&hwiParams, (params->hwiParams));
        }
        else {
            Hwi_Params_init(&hwiParams);
        }
        hwiParams.eventId = eventIdDef[obj->id];

        hwiParams.arg = (UArg)obj;
        if (obj->runMode == Timer_RunMode_CONTINUOUS) {
            hwiParams.arg = obj->arg;
            Hwi_reconfig (obj->hwi, obj->tickFxn, &hwiParams);
        }
        else {
            hwiParams.arg = (UArg)obj;
            Hwi_reconfig (obj->hwi, Timer_oneShotStub, &hwiParams);
        }
    }

    postInit(obj, eb);

    if (obj->startMode == Timer_StartMode_AUTO) {
        Timer_start(obj);
    }
}

/*
 *  ======== postInit ========
 */
static Int postInit (Timer_Object *obj, Error_Block *eb)
{
    UInt key;

    key = Hwi_disable();
    
    initDevice(obj);

    ((TimerRegs *)(Timer_module->baseAddress[obj->id]))->control = obj->controlRegInit;
    
    if (obj->periodType == Timer_PeriodType_MICROSECS) {
        if (!Timer_setPeriodMicroSecs(obj, obj->period)) {
            Error_raise(eb, Timer_E_cannotSupport, obj->period, 0);
            Hwi_restore(key);
            return (5);
        }
    }
    else {
        Timer_setPeriod(obj, obj->period);
    }
    
    Hwi_restore(key);

    return (0);
}

/*
 *  ======== Timer_Instance_finalize ========
 */
Void Timer_Instance_finalize(Timer_Object *obj, Int status)
{
    UInt key;

    /* fall through in switch below is intentional */
    switch (status) {
        /* Timer_delete() */
        case 0:
        
        /* setPeriodMicroSecs failed */
        case 5:
            initDevice(obj);
            if (obj->hwi) {
                Hwi_delete(&obj->hwi);
            }
        
        /* Hwi create failed */
        case 4:

        /* hwiMask is wrong */
        case 3:

        /* timer not available */
        case 2:

        /* invalid timer id */
        case 1:

        default:
            break;
    };

    key = Hwi_disable();
    Timer_module->availMask |= (0x1 << obj->id);
    Timer_module->handles[obj->id] = NULL;
    Hwi_restore(key);
}

/* ======== initDevice ========
 * 1. stop timer
 * 2. disable timer interrupt. (IER and any timer specific interrupt enable)
 * 3. clear pending interrupt. (IFR and any timer specific interrupt flags)
 * 4. Set control registers back to reset value.
 * 5. clear counters
 * 6. clear period register.
 */
static Void initDevice(Timer_Object *obj) 
{
    UInt key;

    key = Hwi_disable();
    ((TimerRegs *)(Timer_module->baseAddress[obj->id]))->control = 
        TIMER_CONTROL_DEFAULT;
    if (obj->hwi) {
        Hwi_disableInterrupt(obj->intNum);
        ICR = (0x1 << (obj->intNum));
    }
    ((TimerRegs *)(Timer_module->baseAddress[obj->id]))->count = 0;
    ((TimerRegs *)(Timer_module->baseAddress[obj->id]))->period = 0;
    Hwi_restore(key);
}

/*
 *  ======== Timer_start ========
 * 1. Hwi_disable();
 * 2. Clear the counters
 * 3. Clear IFR
 * 4. Enable timer interrupt
 * 5. Start timer
 * 6. Hwi_restore()
 */
Void Timer_start(Timer_Object *obj)
{
    UInt key;

    key = Hwi_disable();
    ((TimerRegs *)(Timer_module->baseAddress[obj->id]))->count = 0;
    if (obj->hwi) {
        ICR = (0x1 << (obj->intNum));
        Hwi_enableInterrupt(obj->intNum);
    }
    ((TimerRegs *)(Timer_module->baseAddress[obj->id]))->control = 
        TIMER_CONTROL_START | obj->controlRegInit;
    Hwi_restore(key);
}

/*
 *  ======== Timer_stop ========
 * 1. stop timer
 * 2. disable timer interrupt
 */
Void Timer_stop(Timer_Object *obj)
{
    ((TimerRegs *)(Timer_module->baseAddress[obj->id]))->control = 
        obj->controlRegInit;
    if (obj->hwi) {
        Hwi_disableInterrupt(obj->intNum);
    }
}

/*
 *  ======== Timer_setPeriod ========
 * stop timer
 * set period register
 */
Void Timer_setPeriod(Timer_Object *obj, UInt32 period)
{
    Timer_stop(obj);
    ((TimerRegs *)(Timer_module->baseAddress[obj->id]))->period = period;
    obj->period = period;
}

/*
 *  ======== Timer_setPeriodMicroSecs ========
 */
Bool Timer_setPeriodMicroSecs(Timer_Object *obj, UInt32 period)
{
    Types_FreqHz freqHz;
    UInt64 counts;
    UInt32 prdCounts;
    UInt32 freqKHz;

    /*
     * stop timer
     * compute counts
     * set period register
     */
    Timer_stop(obj);
    /* Today c64 supports less than 4.2GHz */
    Timer_getFreq(obj, &freqHz);

    freqKHz = freqHz.lo/1000;
    if (checkOverflow(freqKHz, period/1000)) {
        return (FALSE);
    }
    else {
        counts = ((UInt64)freqKHz * (UInt64)period) / (UInt64)1000;
        prdCounts = counts;
        ((TimerRegs *)(Timer_module->baseAddress[obj->id]))->period = prdCounts;
        obj->period = prdCounts;
        obj->periodType = Timer_PeriodType_COUNTS;
        return(TRUE);
    }
}

/*
 *  ======== Timer_getPeriod ========
 */
UInt32 Timer_getPeriod(Timer_Object *obj)
{
    return (obj->period);
}

/*
 *  ======== Timer_getCount ========
 */
UInt32 Timer_getCount(Timer_Object *obj)
{
    return (((TimerRegs *)(Timer_module->baseAddress[obj->id]))->count);
}

/*
 *  ======== Timer_oneShotStub ========
 */
Void Timer_oneShotStub(UArg arg)
{
    Timer_Object *obj = (Timer_Object *)arg;
    Timer_stop(obj);
    ICR = (0x1 << (obj->intNum));
    obj->tickFxn(obj->arg);
}

/*
 *  ======== Timer_getExpiredCounts ========
 *  This API is used by the TimestampProvider as part of retrieving a timestamp
 *  using a timer and a tick counter. It returns the timer's count but also
 *  accounts for timer rollover.
 *
 *  This API must be called with interrupts disabled (the TimestampProvider
 *  should disable interrupts while retrieving the tick count and calling this
 *  API).
 *
 *  The TimestampProvider uses a 32-bit timer and 32-bit tick count to track
 *  the timestamp. The tick count either comes from the Clock module or is
 *  stored in the TimestampProvider's module state and incremented by an ISR 
 *  when the timer expires. 
 *  
 *  This approach has a difficult edge case which this API addresses.
 *  Timestamp_get64 may be called while interrupts are disabled, and while they
 *  are disabled, the timer may expire and reset to its initial period. Because
 *  interrupts are disabled, the tick count isr has not run yet to increment
 *  the tick count. This can result in the occasional timestamp value going 
 *  backwards in time because the upper bits are out of date.
 *
 *  To work around this, we need to detect the timer "rollover" and account for
 *  it by adding the timer period to the count returned.
 *
 *  To detect the rollover, we retrieve the count, check the IFR flag for the
 *  timer interrupt, then check the count again, all with interrupts disabled
 *  (the caller should disable interrupts).
 *
 *    Hwi_disable();
 *
 *    count1 = timer.TIM;
 *    ifrFlag = getIFRFlag();
 *    count2 = timer.TIM;
 *
 *    Hwi_restore();
 *
 *  For the most efficient implementation, we access the Timer register value
 *  directly, which means the count value is going *down* on the 28x. This
 *  means that most of the time count1 > count2.
 *
 *  The following table lists the possible values of count1, count2, and 
 *  ifrFlag. The third column states whether we would need to add the timer
 *  period to the result if we return count1. The fourth column states the
 *  same for count2. Count1 and count2 will be very close together, so either
 *  is acceptable to return.
 *
 *                                       Add prd to     Add prd to
 *         compare           IFR flag      count1         count2
 *  1. (count1 < count2)        0            NO             NO
 *  2. (count1 < count2)        1            YES            YES
 *  3. (count1 > count2)        0            NO             YES
 *  4. (count1 > count2)        1            NO             YES
 *
 *  1. Case 1 is by far the typical case. We're "in the middle" of the count, 
 *     not close to a counter rollover, and we just return the count.
 *  2. Case 2 means that the timer rolled over before we retrieved count1, but
 *     that interrupts were disabled, so the tick isr hasn't run yet. When an 
 *     isr is serviced, the hardware clears the IFR bit immediately, so it is
 *     not possible that we are in the middle of servicing the tick isr.
 *  3. Case 3 is rare. This means that the timer rolled over after checking
 *     the IFR flag but before retrieving count2.
 *  4. Case 4 is rare. This means that the timer rolled over after retrieving
 *     count1, but before we check the IFR flag.
 *
 *  Case 3 is the reason it's not sufficient to simply check the IFR flag, and
 *  case 2 is the reason it's not sufficient to simply compare count1 and 
 *  count2.
 *
 *  Returning count1 appears to mean less additions, so why return count2?
 *    - The intent of the logic is more apparent in the if statement.
 *      "If an interrupt occurred OR count2 is out of sequence with count1,
 *      a rollover occurred, so add the period".
 *    - Case 2 is the most common rollover case, and the performance for case 2
 *      is the same whether we return count1 or count2.
 */
UInt32 Timer_getExpiredCounts(Timer_Object *obj)
{
    UInt32 count1, count2;
    UInt ifrFlag;

    count1 = Timer_getCount(obj);
    ifrFlag = (IFR & (0x1 << obj->intNum));
    count2 = Timer_getCount(obj);


    if (count1 < count2 && ifrFlag) {
        return (count1 + Timer_getPeriod(obj));
    }
    else {
        return (count1) ;
    }
}

/*
 *  ======== Timer_getFreq ========
 */
Void Timer_getFreq(Timer_Object *obj, Types_FreqHz *freq)
{
    if (obj->extFreq.lo) {
        Assert_isTrue((obj->extFreq.hi == 0), NULL);
        freq->lo = obj->extFreq.lo;
        freq->hi = 0;
    }
    else {
        BIOS_getCpuFreq(freq);
        Assert_isTrue((freq->hi == 0), NULL);
        freq->lo = freq->lo / 8;
        freq->hi  = 0;
    }
}

/*
 *  ======== Timer_getFunc ========
 */
Timer_FuncPtr Timer_getFunc(Timer_Object *obj, UArg *arg)
{
    *arg = obj->arg;
    return (obj->tickFxn);
}

/*
 *  ======== Timer_setFunc ========
 */
Void Timer_setFunc(Timer_Object *obj, Timer_FuncPtr fxn, UArg arg)
{
    obj->tickFxn = fxn;
    obj->arg = arg;

    if (obj->runMode == Timer_RunMode_CONTINUOUS) {
        Hwi_setFunc(obj->hwi, obj->tickFxn, obj->arg);
    }
    else {
        Hwi_setFunc(obj->hwi, Timer_oneShotStub, (UArg)obj);
    }
}

/*
 *  ======== checkOverflow ========
 */
static Bool checkOverflow(UInt32 a, UInt32 b)
{
    return ((b > 0) && (a > Timer_MAX_PERIOD/b));
}

/*
 */

/*
 *  @(#) ti.sysbios.family.c64; 2, 0, 0, 0,584; 11-7-2012 12:41:26; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

