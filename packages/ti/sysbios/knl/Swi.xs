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
 *  ======== Swi.xs ========
 *
 *
 */

var Queue = null;
var Swi = null;
var BIOS = null;

/*
 *  ======== module$use ========
 */
function module$use()
{
    Swi = this;

    Queue = xdc.useModule("ti.sysbios.knl.Queue");
    BIOS = xdc.useModule("ti.sysbios.BIOS");

    xdc.useModule('xdc.runtime.Log');
    xdc.useModule('xdc.runtime.Assert');
    xdc.useModule("ti.sysbios.hal.Hwi");
    xdc.useModule("ti.sysbios.knl.Intrinsics");

    if (BIOS.taskEnabled == true) {
        xdc.useModule("ti.sysbios.knl.Task");
        Swi.taskDisable = '&ti_sysbios_knl_Task_disable__E';
        Swi.taskRestore = '&ti_sysbios_knl_Task_restore__E';
    }
    else {
        Swi.taskDisable = null;
        Swi.taskRestore = null;
    }
    
    /* 
     * Minimize footprint by only building 1 readyQ if Swi is disabled.
     * 1 is used rather than 0 to prevent various .xs file references to
     * "Swi.numPriorities - 1" from generating warnings/errors.
     */
    if (BIOS.swiEnabled == false) {
        Swi.numPriorities = 1;
    }
}

/*
 *  ======== module$static$init ========
 */
function module$static$init(mod, params)
{
    mod.locked = 1;
    mod.curSet = 0;
    mod.curTrigger = 0;
    mod.curSwi = null;
    mod.curQ = null;

    mod.readyQ.length = Swi.numPriorities;
    for (var i = 0; i < Swi.numPriorities; i++) {
        Queue.construct(mod.readyQ[i]);
    }
}

/*
 *  ======== instance$static$init ========
 */
function instance$static$init(obj, fxn, params)
{
    var mod = this.$module.$object;

    if (BIOS.swiEnabled == false) {
        Swi.$logFatal("Can't create a Swi with BIOS.swiEnabled == false.", this);
    }

    if (params.priority >= Swi.numPriorities) {
        Swi.$logFatal("Swi priority (" + params.priority + 
                        ") must be less than Swi.numPriorities (" + 
                        Swi.numPriorities + ").", this, "priority");
    }

    Queue.elemClearMeta(obj.qElem);

    obj.fxn = fxn;
    obj.arg0 = params.arg0;
    obj.arg1 = params.arg1;
    if (params.priority == ~0) {
        obj.priority = Swi.numPriorities - 1;
    }
    else {
        obj.priority = params.priority;
    }
    obj.posted = 0;
    obj.mask = 1 << obj.priority;
    obj.readyQ = mod.readyQ[obj.priority];
    obj.initTrigger = obj.trigger = params.trigger;

    /* 
     * the following assignment sets the number of entries in the
     * hookEnv pointer array pointed to by the obj.hookEnv ptr.
     */
    obj.hookEnv.length = Swi.hooks.length;

    /* add constructed Swis to constructedSwis array */
    if (this.$category == "Struct") {
        mod.constructedSwis.$add(this);
        Swi.numConstructedSwis += 1;
    }
}

/*
 *  ======== addHookSet ========
 */
function addHookSet(hookSet)
{
    /* use "===" so 'null' is not flagged */
    if (hookSet.registerFxn === undefined) {
        hookSet.registerFxn = null;
    }
    if (hookSet.createFxn === undefined) {
        hookSet.createFxn = null;
    }
    if (hookSet.readyFxn === undefined) {
        hookSet.readyFxn = null;
    }
    if (hookSet.beginFxn === undefined) {
        hookSet.beginFxn = null;
    }
    if (hookSet.endFxn === undefined) {
        hookSet.endFxn = null;
    }
    if (hookSet.deleteFxn === undefined) {
        hookSet.deleteFxn = null;
    }

    this.hooks.$add(hookSet);
}

/*
 *  ======== module$validate ========
 *  some redundant tests are here to catch changes since
 *  module$static$init() and instance$static$init()
 */
function module$validate()
{
    if (Swi.numPriorities > BIOS.bitsPerInt) {
        Swi.$logError("Swi.numPriorities (" + 
                        Swi.numPriorities + 
                        ") can't be greater " +
                        "than the number of " +
                        "bits in an integer (" +
                        BIOS.bitsPerInt + ")",
                        Swi, "numPriorities");
    }

    /* validate all "created" instances */
    for (var i = 0; i < Swi.$instances.length; i++) {
        instance_validate(Swi.$instances[i]);
    }
 
    /* validate all "constructed" instances */
    for (var i = 0; i < Swi.$objects.length; i++) {
        instance_validate(Swi.$objects[i]);
    }
}

/*
 *  ======== instance_validate ========
 *  common function to test instance configuration
 */
function instance_validate(instance)
{
    if (instance.$object.fxn == null) {
        Swi.$logError("function cannot be null", instance);
    }
    if (instance.priority >= Swi.numPriorities) {
        Swi.$logError("Swi priority (" + 
                instance.priority + 
                ") must be less than Swi.numPriorities (" + 
                Swi.numPriorities + ").", instance, "priority");
    }
}

/*
 *  ======== viewInitBasic ========
 *  Initialize the 'Basic' Task instance view.
 */
function viewInitBasic(view, obj)
{    
    var Swi = xdc.useModule('ti.sysbios.knl.Swi');
    var Program = xdc.useModule('xdc.rov.Program');

    view.label = Program.getShortName(obj.$label);
    view.priority = obj.priority;

    /* Validate priority */
    var modCfg = Program.getModuleConfig(Swi.$name);
    if (obj.priority > modCfg.numPriorities) {
        view.$status["priority"] = "Corrupted data: Swi priority is greater" +
                                   "than Swi.numPriorities";
    }

    /* Scan the module view to determine the current running Swi. */
    try {
        var modView = Program.scanModuleView('ti.sysbios.knl.Swi', 'Module');
    }
    catch (e) {
        view.$status["state"] = "Error scanning module view to get current Swi.";
        return;
    }

    /* Set the Swi's mode */
    if ((Number(modView.currentSwi) == Number(obj.$addr))) {
        view.state = "Running";
    }
    else {
        if (obj.posted) {
            view.state = "Posted";
        }
        else {
            view.state = "Idle";
        }
    }

    /* 
     * There may be more than one symbol at this address, so the function
     * name has to be an array.
     */
    view.fxn = Program.lookupFuncName(Number(obj.fxn));

    view.arg0 = obj.arg0;
    view.arg1 = obj.arg1;

    view.initTrigger = obj.initTrigger;
    view.curTrigger = obj.trigger;
}

/*
 *  ======== viewInitModule ========
 *  Initialize the Task module view.
 */
function viewInitModule(view, mod)
{
    view.schedulerState = (mod.locked ? "Locked" : "Unlocked");
    view.readyQMask = "0x" + mod.curSet.toString(16);
    view.currentSwi = mod.curSwi;
}
/*
 *  @(#) ti.sysbios.knl; 2, 0, 0, 0,580; 11-7-2012 12:42:26; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

