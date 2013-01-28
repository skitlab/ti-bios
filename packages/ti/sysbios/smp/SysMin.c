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
 *  ======== SysMin.c ========
 */


#include <xdc/runtime/Startup.h>
#include <xdc/runtime/Gate.h>

#include <ti/sysbios/hal/Core.h>
#include <ti/sysbios/hal/Hwi.h>

#include <string.h>

#include "package/internal/SysMin.xdc.h"

/*
 *  ======== SysMin_Module_startup ========
 */
Int SysMin_Module_startup(Int phase)
{
    if (SysMin_bufSize != 0) {
        memset(module->outbuf, 0, SysMin_bufSize);
    }
    return (Startup_DONE);
}

/*
 *  ======== SysMin_abort ========
 */
Void SysMin_abort(String str)
{
    Char ch;    
    
    if (SysMin_bufSize != 0) {
        if (str != NULL) {
            while ((ch = *str++) != '\0') {
                SysMin_putch(ch);
            }
        }

        /* Only flush if configured to do so */
        if (SysMin_flushAtExit) {
            SysMin_flush();
        }
    }
    
    /* 
     *  System_abort() in xdc/runtime/System.c enters the System gate
     *  before aborting, but does not leave the gate. Aforementioned 
     *  System gate maps to the Inter-core gate entered by the Hwi lock. 
     *  Since Hwi lock is never released, the other core's dispacther
     *  may spin forever, waiting to acquire the Hwi lock.
     *
     *  We Unlock Hwi before returning so all locks are released before 
     *  exiting.
     */
     Core_unlock();
}

/*
 *  ======== SysMin_exit ========
 */
Void SysMin_exit(Int stat)
{
    /*
     *  System_rtsExit() in xdc/runtime/System.c enters the System gate
     *  before exiting, but does not leave the gate. The BASEPRI
     *  register on Arm M3 is therefore not restored to 0 (disabled state).
     *  When SysMin_flush() enters Hwi gate, the key returned by
     *  Hwi_disable() is incorrect (Its equal to Hwi disable priority
     *  instead of 0). This prevents the Hwi_restore() function, 
     *  called when SysMin_flush() exits, from freeing the Hwi lock.
     *  Since Hwi lock is never released, the other core's dispacther
     *  may spin forever, waiting to acquire the Hwi lock.
     *
     *  We Unlock Hwi before returning so all locks are released before 
     *  exiting.
     */
    if ((SysMin_flushAtExit) && (SysMin_bufSize != 0)) {
        SysMin_flush();
        Core_unlock();
    }
}

/*
 *  ======== SysMin_putch ========
 */
Void SysMin_putch(Char ch)
{
    UInt coreId;
    UInt outidx;
    UInt i;
    Char *outbuf;
    IArg key;
    
    if (SysMin_bufSize != 0) {

        /* 
         * only disable local interrupts to place chars in 
         * local line buffer 
         */

        key = (IArg)Core_hwiDisable();

        coreId = Core_getId();
        outidx = module->lineBuffers[coreId].outidx;
        outbuf = module->lineBuffers[coreId].outbuf;
        outbuf[outidx++] = ch;
        SysMin_module->lineBuffers[coreId].outidx = outidx;
    
        /* At EOL, copy core's line buffer to shared outbuf */
        if ((ch == '\n') || (outidx >= 256)) {

            /* 
             * disable interrupts globally to transfer lines 
             * to the shared output buffer
             */

            Gate_enterSystem();

            for (i = 0; i < outidx; i++) {
                module->outbuf[module->outidx++] = outbuf[i];
                if (module->outidx == SysMin_bufSize) {
                    module->outidx = 0;
                    module->wrapped = TRUE;
                }
            }

            SysMin_module->lineBuffers[coreId].outidx = 0;

            Gate_leaveSystem(key);
        }
        else {
            /* restore local interrupts */
            Core_hwiRestore((UInt)key);
        }
    }
}

/*
 *  ======== SysMin_ready ========
 */
Bool SysMin_ready()
{
    return (SysMin_bufSize != 0);
}

/*
 *  ======== SysMin_flush ========
 *  Called during SysMin_exit, System_exit or System_flush.
 */
Void SysMin_flush()
{
    IArg key;
    
    key = Gate_enterSystem();
    
    /*
     *  If a wrap occured, we need to flush the "end" of the internal buffer
     *  first to maintain fifo character output order.
     */    
    if (module->wrapped == TRUE) {
        SysMin_outputFunc(module->outbuf + module->outidx,
                          SysMin_bufSize - module->outidx);
    }
    
    SysMin_outputFunc(module->outbuf, module->outidx);
    module->outidx = 0;
    module->wrapped = FALSE;
    
    Gate_leaveSystem(key);
}
/*
 *  @(#) ti.sysbios.smp; 1, 0, 0,24; 11-7-2012 12:42:38; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

