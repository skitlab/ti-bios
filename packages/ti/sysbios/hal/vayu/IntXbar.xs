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
 *  ======== IntXbar.xs ========
 *
 */

var IntXbar = null;
var Hwi = null;
var Startup = null;

/*
 *  ======== module$meta$init ========
 */
function module$meta$init()
{
    var intXbarLength;

    /* Only process during "cfg" phase */
    if (xdc.om.$name != "cfg") {
        return;
    }

    IntXbar = this;

    if (Program.build.target.name == "ARP32") {
        intXbarLength = IntXbar.NUM_EVE_XBAR_INST;
    }
    else if (Program.build.target.name == "C66") {
        intXbarLength = IntXbar.NUM_DSP_XBAR_INST;
    }
    else if ((Program.build.target.name == "M3") || 
             (Program.build.target.name == "M4")) {
        intXbarLength = IntXbar.NUM_BENELLI_XBAR_INST;
    }
    else if (Program.build.target.name == "A15") {
        intXbarLength = IntXbar.NUM_A15_XBAR_INST;
    }

    IntXbar.intXbar.length = intXbarLength;

    /* set intXbar array to default interrupt mappings */
    for (var intNum = 0; intNum < intXbarLength; intNum++) {
            IntXbar.intXbar[intNum] = 0;
    }
}

/*
 *  ======== module$use ========
 */
function module$use()
{
    if (Program.build.target.name == "ARP32") {
        Hwi = xdc.useModule('ti.sysbios.family.arp32.Hwi');
    }
    else if (Program.build.target.name == "C66") {
        Hwi = xdc.useModule('ti.sysbios.family.c64p.Hwi');
    }
    else if ((Program.build.target.name == "M3") || 
             (Program.build.target.name == "M4")) {
        Hwi = xdc.useModule('ti.sysbios.family.arm.m3.Hwi');
    }
    else if (Program.build.target.name == "A15") {
        Hwi = xdc.useModule('ti.sysbios.family.arm.gic.Hwi');
    }

    Startup = xdc.useModule('xdc.runtime.Startup');

    Startup.firstFxns.$add(IntXbar.initIntXbar);
}

/*
 *  ======== module$static$init ========
 */
function module$static$init(mod, params)
{
    var intXbarLength;

    if (Program.build.target.name == "ARP32") {
        intXbarLength = IntXbar.NUM_EVE_XBAR_INST;
    }
    else if (Program.build.target.name == "C66") {
        intXbarLength = IntXbar.NUM_DSP_XBAR_INST;
    }
    else if ((Program.build.target.name == "M3") || 
             (Program.build.target.name == "M4")) {
        intXbarLength = IntXbar.NUM_BENELLI_XBAR_INST;
    }
    else if (Program.build.target.name == "A15") {
        intXbarLength = IntXbar.NUM_A15_XBAR_INST;
    }

    mod.intXbar.length = intXbarLength;

    /* set intXbar array to default interrupt mappings */
    for (var intNum = 0; intNum < intXbarLength; intNum++) {
            mod.intXbar[intNum] = IntXbar.intXbar[intNum];
    }
}

/*!
 *  ======== connectMeta ========
 */
function connectMeta(xbarInstance, intSource)
{
    var intXbarLength;

    if (Program.build.target.name == "ARP32") {
        intXbarLength = IntXbar.NUM_EVE_XBAR_INST;
    }
    else if (Program.build.target.name == "C66") {
        intXbarLength = IntXbar.NUM_DSP_XBAR_INST;
    }
    else if ((Program.build.target.name == "M3") || 
             (Program.build.target.name == "M4")) {
        intXbarLength = IntXbar.NUM_BENELLI_XBAR_INST;
    }
    else if (Program.build.target.name == "A15") {
        intXbarLength = IntXbar.NUM_A15_XBAR_INST;
    }

    if (xbarInstance > intXbarLength) {
        IntXbar.$logError(xbarInstance + " is not a valid XBAR instance number." +
         " Valid XBAR instance numbers are 1 - " + intXbarLength, IntXbar);
    }

    if (intSource > 391) {
        IntXbar.$logError(intSource + " is not a valid interrupt source index." +
         " Valid interrupt source indexes are 0 - 391", IntXbar);
    }

    IntXbar.intXbar[xbarInstance - 1] = intSource;
}

/*!
 *  ======== disconnectMeta ========
 */
function disconnectMeta(xbarInstance, intSource)
{
    var intXbarLength;

    if (Program.build.target.name == "ARP32") {
        intXbarLength = IntXbar.NUM_EVE_XBAR_INST;
    }
    else if (Program.build.target.name == "C66") {
        intXbarLength = IntXbar.NUM_DSP_XBAR_INST;
    }
    else if ((Program.build.target.name == "M3") || 
             (Program.build.target.name == "M4")) {
        intXbarLength = IntXbar.NUM_BENELLI_XBAR_INST;
    }
    else if (Program.build.target.name == "A15") {
        intXbarLength = IntXbar.NUM_A15_XBAR_INST;
    }

    if ((xbarInstance > intXbarLength) || (xbarInstance < 1)) {
            IntXbar.$logError(xbarInstance + " is not a valid XBAR instance number." +
            " Valid XBAR instance numbers are 1 - " + intXbarLength, IntXbar);
    }

    IntXbar.intXbar[xbarInstance - 1] = 0x0;
}

/*!
 *  ======== viewInitData ========
 *  Initialize the Xbar 'ModuleData' view.
 */
function viewInitData(view, obj)
{
    var EVE_INT_OFFSET = 0;
    var DSP_INT_OFFSET = 32;
    var BENELLI_INT_OFFSET = 23;
    var A15_INT_OFFSET = 4;

    var intOffset;
    var intXbarLength;

    var Program = xdc.useModule('xdc.rov.Program');
    var Xbar = xdc.useModule('ti.sysbios.hal.vayu.IntXbar');
    var XbarConfig = Program.getModuleConfig(Xbar.$name);
    var rawView = Program.scanRawView('ti.sysbios.hal.vayu.IntXbar');
    var mod = rawView.modState;

    if (Program.build.target.name == "ARP32") {
        intOffset = EVE_INT_OFFSET;
        intXbarLength = XbarConfig.NUM_EVE_XBAR_INST;
    }
    else if (Program.build.target.name == "C66") {
        intOffset = DSP_INT_OFFSET;
        intXbarLength = XbarConfig.NUM_DSP_XBAR_INST;
    }
    else if ((Program.build.target.name == "M3") || 
             (Program.build.target.name == "M4")) {
        intOffset = BENELLI_INT_OFFSET;
        intXbarLength = XbarConfig.NUM_BENELLI_XBAR_INST;
    }
    else if (Program.build.target.name == "A15") {
        intOffset = A15_INT_OFFSET;
        intXbarLength = XbarConfig.NUM_A15_XBAR_INST;
    }

    for (var intNum = 0; intNum < intXbarLength; intNum++) {
        var elem = Program.newViewStruct('ti.sysbios.hal.vayu.IntXbar', 'XbarList');

        // TODO Find a better way to figure out the interrupt number for A15
        if (Program.build.target.name == "A15") {
            if ((intNum >= 1) && (intNum < 125)) {
                intOffset = intOffset + 2;
            }
            else if (intNum >= 125) {
                intOffset = intOffset + 4;
            }
        }

        elem.xbarInstanceNumber = intNum + 1;
        elem.coreInterruptNumber = intNum + intOffset;
        var intXbar = Program.fetchArray(mod.intXbar$fetchDesc, mod.intXbar, intXbarLength);
        elem.interruptSourceIndex = intXbar[intNum];

        view.elements.$add(elem);
    }
}   
/*
 *  @(#) ti.sysbios.hal.vayu; 2, 0, 0, 0,27; 11-7-2012 12:42:11; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

