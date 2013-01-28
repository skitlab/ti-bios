/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

var BIOS = xdc.useModule('ti.sysbios.BIOS');
BIOS.libType = BIOS.LibType_Custom;
BIOS.buildingAppLib = false;
BIOS.assertsEnabled = false;
BIOS.logsEnabled = false;

var SourceDir = xdc.module("xdc.cfg.SourceDir");
SourceDir.verbose = 1;

var Hwi = xdc.useModule('ti.sysbios.hal.Hwi');
Hwi.numHooks = 0;       /* Force Hwi hooks to be disabled */
                        /* works for all but C64T (Wugen) */

var Swi = xdc.useModule('ti.sysbios.knl.Swi');
Swi.hooks.length = 0;   /* Force Swi hooks to be disabled */
/*
 *  @(#) ti.sysbios; 2, 0, 0, 0,597; 11-7-2012 12:40:19; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

