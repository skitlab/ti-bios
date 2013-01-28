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
 *  ======== TimerSupport.c ========
 */

#include <xdc/std.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Startup.h>

#include <ti/sysbios/hal/Hwi.h>

#include <ti/sysbios/hal/vayu/IntXbar.h>

#include <ti/sysbios/timers/dmtimer/Timer.h>

#include "package/internal/TimerSupport.xdc.h"

/*
 *  ======== TimerSupport_Module_startup ========
 */
Int TimerSupport_Module_startup(Int phase)
{
    extern cregister volatile UInt DNUM;

    if (DNUM) { /* DSP Core 1 */
        Timer_setAvailMask(TimerSupport_dsp1TimerAvailMask);

        /* Connect default dmtimer interrupt sources to XBAR instances */
        if (TimerSupport_needDsp1XbarInit) {
            IntXbar_connect(45, 339);  // DMTIMER12 connection
            IntXbar_connect(46, 340);  // DMTIMER13 connection
            IntXbar_connect(47, 341);  // DMTIMER14 connection
            IntXbar_connect(48, 342);  // DMTIMER15 connection
        }
    }
    else {      /* DSP Core 0 */
        Timer_setAvailMask(TimerSupport_dsp0TimerAvailMask);

        /* Connect default dmtimer interrupt sources to XBAR instances */
        if (TimerSupport_needDsp0XbarInit) {
            IntXbar_connect(41, 40);   // DMTIMER8 connection
            IntXbar_connect(42, 41);   // DMTIMER9 connection
            IntXbar_connect(43, 42);   // DMTIMER10 connection
            IntXbar_connect(44, 90);   // DMTIMER11 connection
        }
    }

    return (Startup_DONE);
}

/*
 *  ======== TimerSupport_enable ========
 */
Void TimerSupport_enable(UInt timerId, Error_Block *eb)
{
}

/*
 */
/*
 *  @(#) ti.sysbios.hal.vayu; 2, 0, 0, 0,27; 11-7-2012 12:42:11; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

