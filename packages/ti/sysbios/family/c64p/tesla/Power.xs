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
 *  ======== Power.xs ========
 *
 */

var Power;
var Reset;
var Idle;

/*
 *  ======== module$use ========
 */
function module$use()
{
    xdc.useModule('ti.sysbios.hal.unicache.Cache');
    xdc.useModule('ti.sysbios.hal.ammu.AMMU');
    xdc.useModule('ti.sysbios.knl.Task');
    xdc.useModule('ti.sysbios.knl.Swi');

    Power = this;

    Reset = xdc.useModule('xdc.runtime.Reset');
    Reset.fxns[Reset.fxns.length++] = Power.resetFxn;

    Idle = xdc.useModule('ti.sysbios.knl.Idle');

    /* set fxntab default */
    Power.common$.fxntab = false;
}

/*
 *  ======== module$static$init ========
 */
function module$static$init(mod, params)
{
    /* if enabled to idle the CPU: plug the idling function */
    if (Power.idle == true) {

        /* plug the idling function to the Idle loop */
        Idle.addFunc(Power.idleCPU);
    }
}
/*
 *  @(#) ti.sysbios.family.c64p.tesla; 1, 0, 0, 0,334; 11-7-2012 12:41:38; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

