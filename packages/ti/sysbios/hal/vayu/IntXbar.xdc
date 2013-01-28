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
 *  ======== IntXbar.xdc ========
 *
 */

package ti.sysbios.hal.vayu;

import xdc.rov.ViewInfo;

import xdc.runtime.Assert;
import xdc.runtime.Error;

import ti.sysbios.interfaces.IHwi;

/*!
 *  ======== IntXbar ========
 *  IntXbar Module
 *
 *  Below is an example of how to override the default mapping of 
 *  interrupt 23 on a M3 so that it is sourced by I2C module 1 rather 
 *  than Display Controller interrupt request(mapped by default):
 *
 *  @p(code)
 *  #include <ti/sysbios/family/arm/m3/Hwi.h>
 *  #include <ti/sysbios/hal/vayu/IntXbar.h>
 *  
 *  Void myI2CHandler(UArg arg)
 *  {
 *      // Handler Code
 *  }
 *  
 *  Int main(Int argc, Char* argv[])
 *  {
 *      Hwi_Params params;
 *  
 *      Hwi_Params_init(&params);
 *
 *      // connect Xbar Instance 1 to Interrupt source index 51 (I2C1_IRQ)
 *      IntXbar_connect(1, 51);
 *  
 *      // create a corresponding interrupt handler
 *      params.arg = 23; // pass the Interrupt number to the handler
 *
 *      Hwi_create(23, myI2CHandler, &params, NULL);
 *  
 *      BIOS_start();
 *  
 *      return (0);
 *  }
 *  @p
 *  
 *  Here is how you would define the same interrupt handler statically 
 *  in a configuration script:
 *  
 *  @p(code)
 *  var Hwi = xdc.useModule('ti.sysbios.family..rm.m3.Hwi');
 *  var IntXbar = xdc.useModule('ti.sysbios.hal.vayu.IntXbar');
 *  
 *  IntXbar.connectMeta(1, 51);
 *  
 *  var hwiParams = new Hwi.Params();
 *  hwiParams.arg = 23;
 *
 *  Program.global.staticHwi = Hwi.create(23, '&myTimerHandler', hwiParams);
 *  @p
 *  
 *  @p(html)
 *  <h3> Calling Context </h3>
 *  <table border="1" cellpadding="3">
 *    <colgroup span="1"></colgroup> <colgroup span="5" align="center"></colgroup>
 *
 *    <tr><th> Function                 </th><th>  Hwi   </th><th>  Swi   </th><th>  Task  </th><th>  Main  </th><th>  Startup  </th></tr>
 *    <!--                                                                                                                 -->
 *    <tr><td> {@link #setEvent}    </td><td>   Y    </td><td>   Y    </td><td>   Y    </td><td>   Y    </td><td>   Y    </td></tr>
 *    <tr><td colspan="6"> Definitions: <br />
 *       <ul>
 *         <li> <b>Hwi</b>: API is callable from a Hwi thread. </li>
 *         <li> <b>Swi</b>: API is callable from a Swi thread. </li>
 *         <li> <b>Task</b>: API is callable from a Task thread. </li>
 *         <li> <b>Main</b>: API is callable during any of these phases: </li>
 *           <ul>
 *             <li> In your module startup after this module is started (e.g. Mod_Module_startupDone() returns TRUE). </li>
 *             <li> During xdc.runtime.Startup.lastFxns. </li>
 *             <li> During main().</li>
 *             <li> During BIOS.startupFxns.</li>
 *           </ul>
 *         <li> <b>Startup</b>: API is callable during any of these phases:</li>
 *           <ul>
 *             <li> During xdc.runtime.Startup.firstFxns.</li>
 *             <li> In your module startup before this module is started (e.g. Mod_Module_startupDone() returns FALSE).</li>
 *           </ul>
 *       </ul>
 *    </td></tr>
 *
 *  </table>
 *  @p
 */

module IntXbar
{
    /*!
     *  ======== ModuleDataView ========
     *  @_nodoc
     */
    metaonly struct ModuleDataView {
        Int xbarInstanceNumber;
        Int coreInterruptNumber;
        Int interruptSourceIndex;
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
                'XbarList',
                {
                    type: ViewInfo.MODULE_DATA,
                    viewInitFxn: 'viewInitData',
                    structName: 'ModuleDataView'
                }
            ],
            ]
        });

    /*!
     *  Assert if EVE XBAR instance number < 1 or > 8
     */
    config Assert.Id A_badEveXbarInstanceNum = {
        msg: "A_badEveXbarInstanceNum: xbarInstance must be >= 1 and <= 8"
    };

    /*!
     *  Assert if DSP XBAR instance number < 1 or > 64
     */
    config Assert.Id A_badDspXbarInstanceNum = {
        msg: "A_badDspXbarInstanceNum: xbarInstance must be >= 1 and <= 64"
    };

    /*!
     *  Assert if Benelli XBAR instance number < 1 or > 57
     */
    config Assert.Id A_badBenelliXbarInstanceNum = {
        msg: "A_badBenelliXbarInstanceNum: xbarInstance must be >= 1 and <= 57"
    };

    /*!
     *  Assert if A15 XBAR instance number < 1 or > 152
     */
    config Assert.Id A_badA15XbarInstanceNum = {
        msg: "A_badA15XbarInstanceNum: xbarInstance must be >= 1 and <= 152"
    };

    /*!
     *  Assert if Interrupt source index > 391
     */
    config Assert.Id A_badIntSourceIdx = {
        msg: "A_badIntSourceIdx: intSource must be <= 391"
    };

    /*!
     *  Number of XBAR instances per EVE core
     */
    const UInt16 NUM_EVE_XBAR_INST = 8;

    /*!
     *  Number of XBAR instances per DSP core
     */
    const UInt16 NUM_DSP_XBAR_INST = 64;

    /*!
     *  Number of XBAR instances per Benelli Core
     */
    const UInt16 NUM_BENELLI_XBAR_INST = 57;

    /*!
     *  Number of XBAR instances per A15 Core
     */
    const UInt16 NUM_A15_XBAR_INST = 152;

    /*!
     *  Base address of interrupt crossbar MMR registers
     */
    const UInt32 MMR_BASE_ADDR = 0x4A002000;

    /*!
     *  Offset of "AVATAR_INTR_DMA_OCPINTF__EVE1_IRQ_0_1" register
     */
    const UInt32 MMR_OFFSET_EVE0 = 0x7A0;

    /*!
     *  Offset of "AVATAR_INTR_DMA_OCPINTF__EVE2_IRQ_0_1" register
     */
    const UInt32 MMR_OFFSET_EVE1 = 0x7B0;

    /*!
     *  Offset of "AVATAR_INTR_DMA_OCPINTF__EVE3_IRQ_0_1" register
     */
    const UInt32 MMR_OFFSET_EVE2 = 0x7C0;

    /*!
     *  Offset of "AVATAR_INTR_DMA_OCPINTF__EVE4_IRQ_0_1" register
     */
    const UInt32 MMR_OFFSET_EVE3 = 0x7D0;

    /*!
     *  Offset of "AVATAR_INTR_DMA_OCPINTF__DSP1_IRQ_32_33" register
     */
    const UInt32 MMR_OFFSET_DSP0 = 0x948;

    /*!
     *  Offset of "AVATAR_INTR_DMA_OCPINTF__DSP2_IRQ_32_33" register
     */
    const UInt32 MMR_OFFSET_DSP1 = 0x9c8;

    /*!
     *  Offset of "AVATAR_INTR_DMA_OCPINTF__IPU1_IRQ_23_24" register
     */
    const UInt32 MMR_OFFSET_BENELLI_CORE0 = 0x7E0;

    /*!
     *  Offset of "AVATAR_INTR_DMA_OCPINTF__IPU2_IRQ_23_24" register
     */
    const UInt32 MMR_OFFSET_BENELLI_CORE1 = 0x854;
    
    /*!
     *  Offset of "AVATAR_INTR_DMA_OCPINTF__MPU_IRQ_4_5" register
     */
    const UInt32 MMR_OFFSET_A15 = 0xA48;
    
    /*!
     *  ======== connectMeta ========
     *  Connect the XBAR instance associated with an interrupt.
     *
     *  Dynamically connects the XBAR instance associated with 
     *  an interrupt on the current core to the selected
     *  interrupt source.
     *
     *  @param(xbarInstance)    XBAR instance number
     *                          (1-8)   For EVE Cores
     *                          (1-64)  For DSP Cores
     *                          (1-57)  For M4 Cores
     *                          (1-152) For A15 Cores
     *  @param(intSource)   Interrupt Source index (0-391) 
     */
    @DirectCall
    metaonly Void connectMeta(UInt xbarInstance, UInt intSource);

    /*!
     *  ======== disconnectMeta ========
     *  Disconnect the XBAR instance associated with an interrupt.
     *
     *  Dynamically disconnects the XBAR instance associated with 
     *  an interrupt on the current core by clearing the
     *  interrupt source index.
     *
     *  @param(xbarInstance)    XBAR instance number
     *                          (1-8)   For EVE Cores
     *                          (1-64)  For DSP Cores
     *                          (1-57)  For M4 Cores
     *                          (1-152) For A15 Cores
     */
    @DirectCall
    metaonly Void disconnectMeta(UInt xbarInstance);

    /*!
     *  ======== connect ========
     *  Connect the XBAR instance associated with an interrupt.
     *
     *  Dynamically connects the XBAR instance associated with 
     *  an interrupt on the current core to the selected
     *  interrupt source.
     *
     *  @param(xbarInstance)    XBAR instance number
     *                          (1-8)   For EVE Cores
     *                          (1-64)  For DSP Cores
     *                          (1-57)  For M4 Cores
     *                          (1-152) For A15 Cores
     *  @param(intSource)   Interrupt Source index (0-391) 
     */
    @DirectCall
    Void connect(UInt xbarInstance, UInt intSource);

    /*!
     *  ======== disconnect ========
     *  Disconnect the XBAR instance associated with an interrupt.
     *
     *  Dynamically disconnects the XBAR instance associated with 
     *  an interrupt on the current core by clearing the
     *  interrupt source index.
     *
     *  @param(xbarInstance)    XBAR instance number
     *                          (1-8)   For EVE Cores
     *                          (1-64)  For DSP Cores
     *                          (1-57)  For M4 Cores
     *                          (1-152) For A15 Cores
     */
    @DirectCall
    Void disconnect(UInt xbarInstance);

internal:

    config UInt16 intXbar[];   // table of interrupt Xbar instances

    /*
     *  ======== initIntXbar ========
     */
    Void initIntXbar();

    struct Module_State {
        UInt16 intXbar[];   // table of interrupt Xbar instances
    };
}
/*
 *  @(#) ti.sysbios.hal.vayu; 2, 0, 0, 0,27; 11-7-2012 12:42:11; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

