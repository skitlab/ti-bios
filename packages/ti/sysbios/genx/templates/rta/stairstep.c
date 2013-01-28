/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  ======== stairstep.c ========
 *
 *  This testcase exercises CCS4's CPU Load and Task Load RTA GUIs.
 *  It also exercises the BIOS Execution GUI.
 *
 *  cpuLoadInit() gets the CPU frequency using an API and 
 *  fills the loadValue arrays with load values corresponding to 
 *  0, 25, 50, 75 and 95 percent cpuload.
 *
 *  timerFunc() (a Hwi thread) runs every 100ms and launches 
 *  3 types of threads (Hwi, Swi, and Task).
 *  Each respective thread then performs a corresponding load 
 *  function before relinquishing the CPU. 
 *
 *  After dwelling for 5 seconds at each load setting, timerFunc() 
 *  calls step() which advances to the next set of Hwi, Swi, and 
 *  Task load values. The cycle repeats forever.
 *
 *  The loads of the 3 thread types can be seen separately using 
 *  CCS's Task Load view, and cumulatively with the CPU Load view.
 *
 *  The BIOS Execution GUI depicts all the threads and transition
 *  events.
 */

#include <xdc/std.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerBuf.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Diags.h>

#include <ti/sysbios/BIOS.h>

#include <ti/sysbios/hal/Timer.h>

#include <ti/sysbios/knl/Semaphore.h>

#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Swi.h>

#include <ti/sysbios/utils/Load.h>

#include <xdc/cfg/global.h>

#define LOAD_STEPS              20

Void cpuLoadInit();
Void step();

/* 
 * Thread Load Tables
 */

UInt hwiLoadPercent[LOAD_STEPS] =  {0, 25, 50, 75, 95,  
                                    0,  0,  0,  0,  0,  
                                    0,  0,  0,  0,  0,  
                                    0,  5, 10, 15, 20};

UInt swiLoadPercent[LOAD_STEPS] =  {0,  0,  0,  0,  0,  
                                    0, 25, 50, 75, 95,  
                                    0,  0,  0,  0,  0,  
                                    0, 10, 15, 20, 25};

UInt taskLoadPercent[LOAD_STEPS] = {0,  0,  0,  0,  0,  
                                    0,  0,  0,  0,  0,  
                                    0, 25, 50, 75, 95,  
                                    0, 15, 20, 25, 30};

ULong hwiLoadValue[LOAD_STEPS];
ULong swiLoadValue[LOAD_STEPS];
ULong taskLoadValue[LOAD_STEPS];

ULong hwiLoadVal = 0;
ULong swiLoadVal = 0;
ULong taskLoadVal = 0;

Int loadIndex = 0;

#define PERIOD          100                /* 100ms */
#define NUMPERSEC        10                /* 10 * 100ms = 1sec */

/*
 *  ======== main ========
 */
Void main()
{
    Log_print0(Diags_USER1, "stairstep example started.");    

    /* Set up the Hwi, Swi, and Task thread load tables */
    cpuLoadInit();
    
    BIOS_start();
    
    /* Fall into BIOS idle loop */
    return;                 
}

/*
 *  ======== cpuloadInit ========
 */
Void cpuLoadInit() 
{
    extern Clock_Handle loadClock;
    Types_FreqHz freq;
    ULong maxLoad;
    Int i;
 
    Timestamp_getFreq(&freq); 
        
    /* maxLoad is maximum timestamp counts per second (100% cpuload) */ 
    maxLoad = freq.lo / NUMPERSEC;    /* since we run load function NUM times per second */
        
    /* 
     * calculate loadValues for each thread type for 
     * each load interval (5 seconds)
     */
    for (i = 0; i< LOAD_STEPS; i++) {
        hwiLoadValue[i] = hwiLoadPercent[i] * maxLoad / 100;
        swiLoadValue[i] = swiLoadPercent[i] * maxLoad / 100;
        taskLoadValue[i] = taskLoadPercent[i] * maxLoad / 100;
    }
}

/*
 *  ======== doLoad ========
 *  stall in a loop until timestamp equals initial 
 *  value plus count.
 */
Void doLoad(ULong count)
{
    ULong now, end;
    Types_Timestamp64 timestamp;

    /* get current timestamp */
    Timestamp_get64(&timestamp);
    
    /* 
     * concatenate 32 bit hi/lo timestamp pieces 
     * into a single 64 bit number timestamp
     *
     * 28x can only perform a 16-bit shift, so shift twice.
     */
    end = (ULong)timestamp.hi << 16;
    end = end << 16;
    end |= timestamp.lo;

    /* compute load loop endpoint */
    end += count; 

    /* loop until we reach termination timestamp */
    do {
        Timestamp_get64(&timestamp);
        now = (ULong) timestamp.hi << 16;
        now = now << 16;
        now |= timestamp.lo;
    }
    while (now < end);
}

/*
 *  ======== hwiLoad ========
 */
Void hwiLoad(Void)
{
    static ULong oldLoad = ~0;

    /* display confirmation of load changes */
    if (oldLoad != hwiLoadVal ) {
        oldLoad = hwiLoadVal;
        Log_print1(Diags_USER1, "Hwi load: new load = %d%%",
                hwiLoadPercent[loadIndex]);
    }

    if (hwiLoadVal) {
        doLoad(hwiLoadVal);
    }
}

/*
 *  ======== swiLoad ========
 */
Void swiLoad(UArg arg1, UArg arg2)
{
    static ULong oldLoad = ~0;

    /* display confirmation of load changes */
    if (oldLoad != swiLoadVal ) {
        oldLoad = swiLoadVal;
        Log_print1(Diags_USER1, "Swi load: new load = %d%%",
                swiLoadPercent[loadIndex]);
    }

    if (swiLoadVal) {
        doLoad(swiLoadVal);
    }
}

/*
 *  ======== taskLoad ========
 */
Void taskLoad(UArg arg1, UArg arg2)
{
    static ULong oldLoad = ~0;

    while (TRUE) {
        Semaphore_pend(sem, BIOS_WAIT_FOREVER);

        /* display confirmation of load changes */
        if (oldLoad != taskLoadVal ) {
            oldLoad = taskLoadVal;
            Log_print1(Diags_USER1, "Task load: new load = %d%%",
                taskLoadPercent[loadIndex]);
        }

        if (taskLoadVal) {
            doLoad(taskLoadVal);
        }
    }
}

/*
 *  ======== timerFunc ========
 *  Here every 100ms. This is a Hwi thread.
 */
Void timerFunc(UArg arg)
{
    static UInt tickCount = 0;

    /* bump step every 50 ticks */
    if (++tickCount % 50 == 0) {
        step();
    }

    /* Kick of Swi thread load */
    Swi_post(swi);

    /* Kick of Task thread load */
    Semaphore_post(sem);

    /* Do Hwi thread load now */
    hwiLoad();
}

/*
 *  ======== step ========
 */
Void step(void)
{
    loadIndex++;

    if (loadIndex == LOAD_STEPS) {
        loadIndex = 0;
    }
                
    hwiLoadVal = hwiLoadValue[loadIndex];
    swiLoadVal = swiLoadValue[loadIndex];
    taskLoadVal = taskLoadValue[loadIndex];
}



/*
 *  @(#) ti.sysbios.genx; 2, 0, 0, 0,555; 11-7-2012 12:41:58; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

