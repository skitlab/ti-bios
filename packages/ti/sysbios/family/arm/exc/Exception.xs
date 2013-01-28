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
 *  ======== Exception.xs ========
 *
 */

var Exception = null;
var Memory = null;

/*
 *  ======== module$meta$init ========
 */
function module$meta$init()
{
    /* Only process during "cfg" phase */
    if (xdc.om.$name != "cfg") {
        return;
    }

    Exception = this;

    /* by default, exception context is saved on local ISR stack */
    Exception.excContextBuffer = 0;

    /* by default, the exception thread stack is NOT copied */
    Exception.excStackBuffer = null;
}

/*
 *  ======== module$use ========
 */
function module$use()
{
    var BIOS = xdc.useModule("ti.sysbios.BIOS");
    Memory = xdc.useModule("xdc.runtime.Memory");
}

/*
 *  ======== module$static$init ========
 */
function module$static$init(mod, params)
{
    /* setup common Exception stack */
    mod.excActive = false;
    mod.excContext = $addr(Exception.excContextBuffer);
    mod.excStackBuffer = Exception.excStackBuffer;
    mod.excStackSize = params.excStackSize;
    mod.excStack.length = params.excStackSize;
    Memory.staticPlace(mod.excStack, 4, params.excStackSection);
}

function viewGetType(mode)
{
    switch(mode & 0x1f) {

        case 0x13: 
            return("Supervisor");

        case 0x17: 
            return("Prefetch Abort");

        case 0x18: 
            return("Data Abort");

        case 0x1b: 
            return("Undefined Instruction");

    }
    return("Unknown");
}

/*
 *  ======== viewInitBasic ========
 */
function viewInitBasic()
{
    var Program = xdc.useModule('xdc.rov.Program');
    var Exception = xdc.useModule('ti.sysbios.family.arm.exc.Exception');

    try {
        var excRawView = Program.scanRawView('ti.sysbios.family.arm.exc.Exception');
    }
    catch (e) {
        return null;
    }

    if (excRawView.modState.excActive == 0) {
        return("No Exception Context");
    }

    try {
        var excContext = Program.fetchStruct(Exception.ExcContext$fetchDesc, 
                             excRawView.modState.excContext);
    }
    catch (e) {
        return null;
    }

    var excDecode = {};

    excDecode.Decoded = viewGetType(excContext.type);

    var obj = {};

    obj["Exception"] = excDecode;

    obj["Exception Context"] = excContext;

    return (obj);
}

/*
 *  @(#) ti.sysbios.family.arm.exc; 2, 0, 0, 0,159; 11-7-2012 12:41:02; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

