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
 *  ======== TimerSupport.xdc ========
 *
 *
 */

package ti.sysbios.hal.vayu;

import xdc.rov.ViewInfo;

/*!
 *  ======== TimerSupport ========
 *  Vayu Timer Support.
 *
 *  The Vayu Timer Support module provides a timer available mask 
 *  for each core that uses dmtimers - A15, DSP core 0 & DSP core 1.
 *  
 *  The application can modify this available mask in the .cfg script
 *  to choose a different set of timers.
 *
 *  If the available mask is changed from its default value, the 
 *  interrupt sources corresponding to the new Timer Ids need to be 
 *  connected to the DSP events. On the Vayu SoC, there are 9 DSP 
 *  events that have been reserved for timer use. These are event ids
 *  71 to 79.
 *
 *  Note: If the available mask is changed and the System Clock Manager
 *  is enabled, then System clock will use the default DSP event Id 
 *  specified in the deviceTable for the timer. The application should
 *  make sure this event is mapped to the System Clock timer source.
 *  
 *  Below is an example of how to statically override the default
 *  timer available mask in a configuration script:
 *  
 *  @p(code)
 *  var IntXbar = xdc.useModule('ti.sysbios.hal.vayu.IntXbar');
 *  var TimerSupport = xdc.useModule('ti.sysbios.hal.vayu.TimerSupport');
 *  
 *  TimerSupport.dsp0TimerAvailMask = 0x0003;
 *  TimerSupport.a15TimerAvailMask  = 0x00FC;
 *  
 *  // Connect DMTIMER0 to EventId 71 (XBAR Instance 40)
 *  IntXbar_connect(40, 33);
 *  
 *  // Connect DMTIMER1 to EventId 72 (XBAR Instance 41)
 *  IntXbar_connect(41, 34);
 *  @p
 * 
 */

@ModuleStartup

module TimerSupport inherits ti.sysbios.interfaces.ITimerSupport
{
    /*!
     *  ======== ModuleView ========
     *  @_nodoc
     */
    metaonly struct ModuleView {
        String a15TimerAvailMask;
        String dsp0TimerAvailMask;
        String dsp1TimerAvailMask;
    }

    /*!
     *  ======== rovViewInfo ========
     *  @_nodoc
     */
    @Facet
    metaonly config ViewInfo.Instance rovViewInfo = 
        ViewInfo.create({
            viewMap: [
            [
                'Module',
                {
                    type: ViewInfo.MODULE,
                    viewInitFxn: 'viewInitModule',
                    structName: 'ModuleView'
                }
            ],
            ]
        });

    /*!
     *  ======== a15TimerAvailMask ========
     *  Default Available mask for A15 dmtimers
     *
     *  Used to set Timer module's availMask.
     */
     config Bits32 a15TimerAvailMask = 0x00FF;

    /*!
     *  ======== dsp0TimerAvailMask ========
     *  Default Available mask for DSP core 0's dmtimers
     *
     *  Used to set Timer module's availMask.
     */
     config Bits32 dsp0TimerAvailMask = 0x0F00;

    /*!
     *  ======== dsp1TimerAvailMask ========
     *  Default Available mask for DSP core 1's dmtimers
     *
     *  Used to set Timer module's availMask.
     */
     config Bits32 dsp1TimerAvailMask = 0xF000;

    /*!
     *  ======== needDsp0XbarInit ========
     *  Flag to check if the XBAR instances on DSP0 need
     *  to be programmed.
     */
    config Bool needDsp0XbarInit = true;

    /*!
     *  ======== needDsp1XbarInit ========
     *  Flag to check if the XBAR instances on DSP1 need
     *  to be programmed.
     */
    config Bool needDsp1XbarInit = true;
}
/*
 *  @(#) ti.sysbios.hal.vayu; 2, 0, 0, 0,27; 11-7-2012 12:42:11; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

