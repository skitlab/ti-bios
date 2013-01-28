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

#include "package/internal/TimerSupport.xdc.h"

#define TIMER_SUSPSRC           (volatile UInt32 *)0x01C14170
#define TIMER_SUSPSRC_TIM0SRC   0x08000000

/*
 *  ======== TimerSupport_enable ========
 *  This function sets the SUSPSRC register.
 */
Void TimerSupport_enable(UInt timerId, Error_Block *eb)
{
    UInt suspSrc;

    /* 
     * This update of SUSPRC assumes that KICK registers are not
     * locked to work.  If they are locked this will be a big noop since
     * the register writes below will quietly fail.
     */
 
    /* configure SUSPSRC */
    suspSrc = *TIMER_SUSPSRC & ~(TIMER_SUSPSRC_TIM0SRC << timerId);

    if (TimerSupport_module->suspSrc[timerId] == TimerSupport_SuspSrc_DSP) {
        *TIMER_SUSPSRC = suspSrc | (TIMER_SUSPSRC_TIM0SRC << timerId);
    }
    else {
        *TIMER_SUSPSRC = suspSrc;
    }
}

/*
 */
/*
 *  @(#) ti.sysbios.family.c64p.primus; 2, 0, 0, 0,439; 11-7-2012 12:41:33; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

