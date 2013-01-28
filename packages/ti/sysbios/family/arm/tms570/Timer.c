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
#include <ti/sysbios/family/arm/tms570/Hwi.h>
#include "package/internal/Timer.xdc.h"

/* Timer Global Control Register Description
 * Bit#         Name            Value
 * 31-16        RESERVED
 * 15           COS             0 Counters run/stop during emulation halt
 * 14-2         RESERVED
 * 1            CNT1EN          0 Counter 1 enable/disable
 * 0            CNT0EN          0 Counter 0 enable/disable
 */

#define TIMER_GCTRL_START0      0x1
#define TIMER_GCTRL_START1      0x2
#define TIMER_GCTRL_RESET0      0x2
#define TIMER_GCTRL_RESET1      0x1
#define TIMER_SETINT_INT0       0x1
#define TIMER_SETINT_INT1       0x2
#define TIMER_INTFLAG_INT0      0x1
#define TIMER_INTFLAG_INT1      0x2
#define TIMER_COMPCTRL_SEL0     0xFFFFFFFE      /* compare0 with FRC 0 */
#define TIMER_COMPCTRL_SEL1     0x10            /* compare1 with FRC 1 */
#define TIMER_MINPERIOD         0x1

#define Timer_sweep ti_sysbios_family_arm_tms570_Timer_sweep

typedef volatile struct TimerRegs {
    UInt gctrl;
    UInt reserved04;
    UInt capctrl;
    UInt compctrl;
    UInt frc0;
    UInt uc0;
    UInt cpuc0;
    UInt reserved1c;
    UInt cafrc0;
    UInt cauc0;
    UInt reserved28;
    UInt reserved2c;
    UInt frc1;
    UInt uc1;
    UInt cpuc1;
    UInt reserved3c;
    UInt cafrc1;
    UInt cauc1;
    UInt reserved48;
    UInt reserved4c;
    UInt comp0;
    UInt udcp0;
    UInt comp1;
    UInt udcp1;
    UInt comp2;
    UInt udcp2;
    UInt comp3;
    UInt udcp3;
    UInt reserved70;
    UInt reserved74;
    UInt reserved78;
    UInt reserved7c;
    UInt setint;
    UInt clearint;
    UInt intflag;
    UInt reserved8c;
    UInt dwdctrl;
    UInt dwdprld;
    UInt wdstatus;
    UInt wdkey;
    UInt dwdcntr;
}TimerRegs;

/* nail down base address of timerDevices */
#define timerDevices ti_sysbios_family_arm_tms570_Timer_timerDevices
asm("_ti_sysbios_family_arm_tms570_Timer_timerDevices    .set    0xFFFFFC00");
asm("ti_sysbios_family_arm_tms570_Timer_timerDevices    .set    0xFFFFFC00");

extern TimerRegs timerDevices;
//extern cregister volatile unsigned int IFR;
volatile unsigned int IFR;

static char const intNumDef[2] = {2, 3};

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
    UInt tempId = 0xffff;

    if (id >= Timer_NUM_TIMER_DEVICES) {
        if (id != Timer_ANY) {
        Error_raise(eb, Timer_E_invalidTimer, id, 0);
        return (1);
        }
    }

    key = Hwi_disable();
    if (id == -1) {
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
    obj->controlRegInit = (params->controlRegInit.cos);

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
    obj->accuTicks = 0;

    if (obj->tickFxn) {
        if (params->hwiParams) {
            Hwi_Params_copy(&hwiParams, (params->hwiParams));
        }
        else {
            Hwi_Params_init(&hwiParams);
        }

        if (obj->runMode == Timer_RunMode_ONESHOT) {
            if (hwiParams.maskSetting == Hwi_MaskingOption_NONE) {
                Error_raise(eb, Timer_E_invalidHwiMask, 0, 0);
                return (3);
            }
//            if (hwiParams.maskSetting == Hwi_MaskingOption_BITMASK) {
//              if (!(hwiParams.disableMask & (1 << obj->intNum))) {
//                    Error_raise(eb, Timer_E_invalidHwiMask, 0, 0);
//                    return (3);
//              }
//          }
        }

        if (hwiParams.type == Hwi_Type_IRQ) {
            hwiParams.arg = (UArg)obj;
            if (obj->runMode == Timer_RunMode_CONTINUOUS) {
                obj->hwi = Hwi_create (obj->intNum, Timer_periodicStub, 
                   &hwiParams, eb);
            }
            else {
                obj->hwi = Hwi_create (obj->intNum, Timer_oneShotStub, 
                   &hwiParams, eb);
            }
        }
        else { /* FIQ interrupts go straight to ISR, no stub */
            obj->hwi = Hwi_create (obj->intNum, obj->tickFxn,
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
    obj->controlRegInit = params->controlRegInit.cos << 15;

    obj->runMode = params->runMode;
    obj->startMode = params->startMode;
    obj->period = params->period;
    obj->periodType = params->periodType;
    obj->arg = params->arg;
    obj->tickFxn = tickFxn;
    if (params->extFreq.lo) {
        obj->extFreq.lo = params->extFreq.lo;
    }
    obj->accuTicks = 0;

    if (obj->tickFxn) {
        if (params->hwiParams) {
            Hwi_Params_copy(&hwiParams, (params->hwiParams));
        }
        else {
            Hwi_Params_init(&hwiParams);
        }

        hwiParams.arg = (UArg)obj;

        if (obj->runMode == Timer_RunMode_CONTINUOUS) {
            Hwi_reconfig (obj->hwi, Timer_periodicStub, &hwiParams);
        }
        else {
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
    timerDevices.gctrl |= obj->controlRegInit;
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

    if (obj->id == 0) {
        timerDevices.setint |= TIMER_SETINT_INT0;
        timerDevices.compctrl &= TIMER_COMPCTRL_SEL0;
    }
    else {
        timerDevices.setint |= TIMER_SETINT_INT1;
        timerDevices.compctrl |= TIMER_COMPCTRL_SEL1;
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
    if (obj->id == 0) {
        timerDevices.gctrl &= TIMER_GCTRL_RESET0;
        if (obj->hwi) {
            Hwi_disableInterrupt(obj->intNum);
            timerDevices.intflag = TIMER_INTFLAG_INT0;
        }
        timerDevices.udcp0 = 0;
        timerDevices.comp0 = 0;
        timerDevices.cpuc0 = 0;
    }
    else {
        timerDevices.gctrl &= TIMER_GCTRL_RESET1;
        if (obj->hwi) {
            Hwi_disableInterrupt(obj->intNum);
            timerDevices.intflag = TIMER_INTFLAG_INT1;
        }
        timerDevices.udcp1 = 0;
        timerDevices.comp1 = 0;
        timerDevices.cpuc1 = 0;
    }
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
    if (obj->id == 0) {
        timerDevices.uc0 = 0;
        timerDevices.frc0 = 0;
        if (obj->hwi) {
            if (obj->id == 0) {
                timerDevices.intflag = TIMER_INTFLAG_INT0;
            }
            else {
                timerDevices.intflag = TIMER_INTFLAG_INT1;
            }
            Hwi_enableInterrupt(obj->intNum);
        }
        timerDevices.gctrl |= TIMER_GCTRL_START0 | obj->controlRegInit;
    }
    else {
        timerDevices.uc1 = 0;
        timerDevices.frc1 = 0;
        if (obj->hwi) {
            if (obj->id == 0) {
                timerDevices.intflag = TIMER_INTFLAG_INT0;
            }
            else {
                timerDevices.intflag = TIMER_INTFLAG_INT1;
            }
            Hwi_enableInterrupt(obj->intNum);
        }
        timerDevices.gctrl |= TIMER_GCTRL_START1 | obj->controlRegInit;
    }
    Hwi_restore(key);
}



/*
 *  ======== Timer_stop ========
 * 1. stop timer
 * 2. disable timer interrupt
 */
Void Timer_stop(Timer_Object *obj)
{
    UInt key;

    key = Hwi_disable();
    if (obj->id == 0) {
        timerDevices.gctrl &= (~TIMER_GCTRL_START0 | obj->controlRegInit);
    }
    else {
        timerDevices.gctrl &= (~TIMER_GCTRL_START1 | obj->controlRegInit);
    }
    Hwi_restore(key);
    if (obj->hwi) {
        Hwi_disableInterrupt(obj->intNum);
    }
}

/*
 *  ======== Timer_setPeriodMicroSecs ========
 */
Bool Timer_setPeriodMicroSecs(Timer_Object *obj, UInt32 period)
{
    Types_FreqHz freqHz;
    UInt32 counts;
    UInt32 freqKHz;

    /*
     * stop timer
     * compute counts
     * set period register
     */
    Timer_stop(obj);
    /* Today arm_tms570 support less than 4.2GHz */
    Timer_getFreq(obj, &freqHz);

    freqKHz = freqHz.lo/1000;
    if (checkOverflow(freqKHz, period/1000)) {
        return (FALSE);
    }
    else {
        counts = (freqKHz * period) / 1000;
        obj->period = counts;
        obj->periodType = Timer_PeriodType_COUNTS;
        Timer_setPeriod(obj, counts);
        return(TRUE);
    }
}

/*
 *  ======== Timer_setPeriod ========
 */
Void Timer_setPeriod(Timer_Object *obj, UInt32 period)
{
    UInt key;

    Timer_stop(obj);
    key = Hwi_disable();
    if (obj->id == 0) {
        timerDevices.udcp0 = period;
        timerDevices.comp0 = period;
        timerDevices.cpuc0 = TIMER_MINPERIOD;
    }
    else {
        timerDevices.udcp1 = period;
        timerDevices.comp1 = period;
        timerDevices.cpuc1 = TIMER_MINPERIOD;
    }
    Hwi_restore(key);
}

/*
 *  ======== Timer_getPeriod ========
 */
UInt32 Timer_getPeriod(Timer_Object *obj)
{
    if (obj->id == 0) {
        return (timerDevices.udcp0);
    }
    else {
        return (timerDevices.udcp1);
    }
}

/*
 *  ======== Timer_getCount ========
 */
UInt32 Timer_getCount(Timer_Object *obj)
{
    if (obj->id == 0) {
        return (timerDevices.frc0);
    }
    else {
        return (timerDevices.frc1);
    }
}

/*
 *  ======== Timer_ackInterrupt ========
 */
Void Timer_ackInterrupt(Timer_Object *obj)
{
    if (obj->id == 0) {
        timerDevices.intflag = TIMER_INTFLAG_INT0;
    }
    else {
        timerDevices.intflag = TIMER_INTFLAG_INT1;
    }
}

/*
 *  ======== Timer_oneShotStub ========
 */
Void Timer_oneShotStub(UArg arg)
{
    Timer_Object *obj = (Timer_Object *)arg;
    Timer_stop(obj);
    Timer_ackInterrupt(obj);
    obj->tickFxn(obj->arg);
}

/*
 *  ======== Timer_periodicStub ========
 */
Void Timer_periodicStub(UArg arg)
{
    Timer_Object *obj = (Timer_Object *)arg;
    obj->accuTicks++;
    Timer_ackInterrupt(obj);
    obj->tickFxn(obj->arg);
}

/*
 *  ======== Timer_getExpiredCounts ========
 */
UInt32 Timer_getExpiredCounts(Timer_Object *obj)
{
    UInt key;
    UInt32 count1, count2;
    Bool ifrFlag;

    key = Hwi_disable();
    count1 = Timer_getCount(obj);
    ifrFlag = (IFR & (0x1 << obj->intNum));
    count2 = Timer_getCount(obj);

    Hwi_restore(key);
    if (count2 < count1 && ifrFlag) {
        return (count1 + Timer_getPeriod(obj));
    }
    else {
        return (count1) ;
    }
}

/*
 *  ======== Timer_getAccuTicks ========
 */
UInt32 Timer_getAccuTicks(Timer_Object *obj)
{
    return (obj->accuTicks);
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
        Assert_isTrue(freq->hi == 0, NULL);
        freq->lo = freq->lo / 4;
        freq->hi = 0;
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
}

/*
 *  ======== checkOverflow ========
 */
static Bool checkOverflow(UInt32 a, UInt32 b)
{
    return ((b > 0) && (a > Timer_MAX_PERIOD/b));
}

/*
 *  ======== Timer_trigger ========
 */
Void Timer_trigger(Timer_Object *obj, UInt32 cycles)
{
    UInt key;

    /* follow proper procedure for dynamic period change */
    key = Hwi_disable();
    Timer_setPeriod(obj, cycles);
    Timer_start(obj);
    Hwi_restore(key);
}

/*
 */

/*
 *  @(#) ti.sysbios.family.arm.tms570; 2, 0, 0, 0,324; 11-7-2012 12:41:15; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

