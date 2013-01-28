/* 
 *  Copyright (c) 2008 Texas Instruments. All rights reserved. 
 *  This program and the accompanying materials are made available under the 
 *  terms of the Eclipse Public License v1.0 and Eclipse Distribution License
 *  v. 1.0 which accompanies this distribution. The Eclipse Public License is
 *  available at http://www.eclipse.org/legal/epl-v10.html and the Eclipse
 *  Distribution License is available at 
 *  http://www.eclipse.org/org/documents/edl-v10.php.
 *
 *  Contributors:
 *      Texas Instruments - initial implementation
 * */
/*
 *  ======== SysStd.c ========
 */
 
#include <xdc/std.h>
#include <xdc/runtime/Gate.h>

#include <ti/sysbios/hal/Core.h>
#include <ti/sysbios/hal/Hwi.h>

#include <stdio.h>
#include <stdlib.h>

#include "package/internal/SysStd.xdc.h"

/*
 *  ======== SysStd_abort ========
 */
Void SysStd_abort(String str)
{
    if (str != NULL) {
        puts(str);
    }
    fflush(stdout);

    /* 
     *  System_abort() in xdc/runtime/System.c enters the System gate
     *  before aborting, but does not leave the gate. Aforementioned 
     *  System gate maps to the Inter-core gate entered by the Hwi lock. 
     *  We Unlock Hwi before returning so all locks are released before 
     *  exiting.
     */
     Core_unlock();
}

/*
 *  ======== SysStd_exit ========
 */
Void SysStd_exit(Int stat)
{
    fflush(stdout);
}

/*
 *  ======== SysStd_putch ========
 */
Void SysStd_putch(Char ch)
{
    UInt coreId = Core_getId();
    UInt outidx;
    Char *outbuf;
    IArg key;

    /* 
     * only disable local interrupts to place chars in 
     * local line buffer 
     */

    key = (IArg)Core_hwiDisable();

    outidx = module->lineBuffers[coreId].outidx;
    outbuf = module->lineBuffers[coreId].outbuf;
    
    if ((ch == '\n') || (outidx >= 255)) {

        outbuf[outidx] = 0;

        /* 
         * disable interrupts globally to transfer lines 
         * to the shared output buffer
         */

        Gate_enterSystem();

        puts(outbuf);

        SysStd_module->lineBuffers[coreId].outidx = 0;

        Gate_leaveSystem(key);
    }
    else {
        outbuf[outidx++] = ch;
        SysStd_module->lineBuffers[coreId].outidx = outidx;
        /* restore local interrupts */
        Core_hwiRestore((UInt)key);
    }
}

/*
 *  ======== SysStd_flush ========
 */
Void SysStd_flush()
{
    fflush(stdout);
}

/*
 *  ======== SysStd_ready ========
 */
Bool SysStd_ready()
{
    return (TRUE);
}
/*
 *  @(#) ti.sysbios.smp; 1, 0, 0,24; 11-7-2012 12:42:38; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

