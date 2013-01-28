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

var Hwi = null;
var Exception = null;

/*
 *  ======== module$use ========
 */
function module$use()
{
    Hwi = xdc.useModule("ti.sysbios.family.c64p.Hwi");
    Diags = xdc.useModule("xdc.runtime.Diags");

    var Log = xdc.useModule('xdc.runtime.Log');
    this.common$.diags_USER1 = Diags.ALWAYS_ON;
    
    Exception = this;
}

/*
 *  ======== module$static$init ========
 */
function module$static$init(mod, params)
{
    mod.efr = null;
    mod.nrp = null;
    mod.ntsr = null;
    mod.ierr = null;
    mod.returnHook = params.returnHook;
    mod.excContext = null;
    mod.isrStack = null;

    /* init the scratch buffer to 0 */
    for (var i=0; i < mod.scratch.length; i++) {
        mod.scratch[i] = 0;
    }

    Hwi.plugMeta(1, Exception.dispatch);
}

/*
 *  ======== viewDecodeInternal ========
 */
function viewDecodeInternal(excContext)
{
    var Exception = xdc.useModule('ti.sysbios.family.c64p.Exception');
    var fault = "Internal: ";

    if (excContext.IERR & Exception.IERRIFX) {
        fault += "Instruction fetch exception; ";
    }
    if (excContext.IERR & Exception.IERRFPX) {
        fault += "Fetch packet exception; ";
    }
    if (excContext.IERR & Exception.IERREPX) {
        fault += "Execute packet exception; ";
    }
    if (excContext.IERR & Exception.IERROPX) {
        fault += "Opcode exception; ";
    }
    if (excContext.IERR & Exception.IERRRCX) {
        fault += "Resource conflict exception; ";
    }
    if (excContext.IERR & Exception.IERRRAX) {
        fault += "Resource access exception; ";
    }
    if (excContext.IERR & Exception.IERRPRX) {
        fault += "Privilege exception; ";
    }
    if (excContext.IERR & Exception.IERRLBX) {
        fault += "Loop buffer exception; ";
    }
    if (excContext.IERR & Exception.IERRMSX) {
        fault += "Missed stall exception; ";
    }

    return (fault);
}

/*
 *  ======== viewDecodeException ========
 */
function viewDecodeException(excNum)
{
    var Program = xdc.useModule('xdc.rov.Program');
    var Exception = xdc.useModule('ti.sysbios.family.c64p.Exception');

    try {
        var excRawView =
            Program.scanRawView('ti.sysbios.family.c64p.Exception');
    }
    catch (e) {
        print("Caught exception while retrieving raw view: " + e);
        return (null);
    }

    if (excRawView.modState.excContext == 0) {
        return("No Exception Context");
    }

    try {
        var excContext = Program.fetchStruct(Exception.Context$fetchDesc, 
                     excRawView.modState.excContext);
    }
    catch (e) {
        print("Caught exception while retrieving raw view: " + e);
        return (null);
    }

    if (excNum & Exception.EFRIXF) {
        return (viewDecodeInternal(excContext));    /* Internal */
    }
    if (excNum & Exception.EFREXF) {    
        return ("External Exception");              /* External */
    }
    if (excNum & Exception.EFRNXF) {
        return ("Legacy NMI Exception");                /* Legacy NMI */
    }
    
    return (null);
}

/*
 *  ======== viewInitException ========
 */
function viewInitException()
{
    var Program = xdc.useModule('xdc.rov.Program');
    var Exception = xdc.useModule('ti.sysbios.family.c64p.Exception');

    try {
        var excRawView =
            Program.scanRawView('ti.sysbios.family.c64p.Exception');
    }
    catch (e) {
        print("Caught exception while retrieving raw view: " + e);
        return null;
    }

    if (excRawView.modState.excContext == 0
        || excRawView.modState.efr == 0) {
        return("No Exception Context");
    }

    try {
        var excContext = Program.fetchStruct(Exception.Context$fetchDesc, 
                                 excRawView.modState.excContext);
    }
    catch (e) {
        print("Caught exception while retrieving raw view: " + e);
        return null;
    }

    var excDecode = {};
    excDecode["Decoded"] = {};
    excDecode.Decoded = viewDecodeException(excRawView.modState.efr);
    excDecode["Address"] = {};
    excDecode.Address = excContext.NRP;
    
    var obj = {};

    obj["Exception"] = excDecode;

    obj["Exception Context"] = excContext;

    return (obj);
}
/*
 *  @(#) ti.sysbios.family.c64p; 2, 0, 0, 0,583; 11-7-2012 12:41:26; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

