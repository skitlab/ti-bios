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
 *  ======== TimerSupport.xs ========
 *
 */

/*
 *  ======== module$use ========
 */
function module$use()
{
    var Xbar = xdc.useModule('ti.sysbios.hal.vayu.IntXbar');
    var Timer = xdc.useModule('ti.sysbios.timers.dmtimer.Timer');
    var TimerSupport = xdc.useModule('ti.sysbios.hal.vayu.TimerSupport');
 
    var a15  = TimerSupport.a15TimerAvailMask;
    var dsp0 = TimerSupport.dsp0TimerAvailMask;
    var dsp1 = TimerSupport.dsp1TimerAvailMask;

    if (Timer.$written("anyMask")) {
        TimerSupport.$logFatal("dmtimer Any Mask should not be changed. ", Timer, "anyMask");
        return;
    }

    if (TimerSupport.$written("dsp0TimerAvailMask")) {
        TimerSupport.needDsp0XbarInit = false;
    }

    if (TimerSupport.$written("dsp1TimerAvailMask")) {
        TimerSupport.needDsp1XbarInit = false;
    }

    if ((a15 & dsp0) | (dsp0 & dsp1) | (a15 & dsp1)) {
        TimerSupport.$logFatal("Timer available masks for A15, DSP0 and DSP1 have a overlap. ", this);
        return;
    }
}

/*
 *  ======== viewInitModule ========
 *  Initialize the Timer 'Module' view.
 */
function viewInitModule(view, obj)
{
    var Program = xdc.useModule('xdc.rov.Program');
    var TimerSupport = xdc.useModule('ti.sysbios.hal.vayu.TimerSupport');
    var TimerSupportConfig = Program.getModuleConfig(TimerSupport.$name);

    /*
     *  Construct 'availMask' ROV field
     *
     *  Convert Available Mask into a string.  Goal here is to display
     *  Available Mask in binary, showing bits in groups of four separated
     *  by spaces and ending with "b".  For example, the binary mask '1110'
     *  should be displayed as:
     *
     *      0000 0000 0000 1110b
     *
     */
    view.a15TimerAvailMask  = Number(TimerSupportConfig.a15TimerAvailMask).toString(2);
    view.dsp0TimerAvailMask = Number(TimerSupportConfig.dsp0TimerAvailMask).toString(2);
    view.dsp1TimerAvailMask = Number(TimerSupportConfig.dsp1TimerAvailMask).toString(2);
}   
/*
 *  @(#) ti.sysbios.hal.vayu; 2, 0, 0, 0,27; 11-7-2012 12:42:11; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

