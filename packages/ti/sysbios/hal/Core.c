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
 *  ======== Core.c ========
 *  "Global Proxy" for target specific Core implementaions
 */

#include <xdc/std.h>
#include "package/internal/Core.xdc.h"

/*
 *  ======== Core_getId ========
 */
UInt Core_getId()
{
#ifdef ti_sysbios_hal_Core_delegate_getId
    extern UInt ti_sysbios_hal_Core_delegate_getId();
    return (ti_sysbios_hal_Core_delegate_getId());
#else
    return (Core_CoreProxy_getId());
#endif
}

/*
 *  ======== Core_interruptCore ========
 */
Void Core_interruptCore(UInt coreId)
{
#ifdef ti_sysbios_hal_Core_delegate_interruptCore
    extern Void ti_sysbios_hal_Core_delegate_interruptCore(UInt);
    ti_sysbios_hal_Core_delegate_interruptCore(coreId);
#else
    Core_CoreProxy_interruptCore(coreId);
#endif
}

/*
 *  ======== Core_lock ========
 */
Void Core_lock()
{
#ifdef ti_sysbios_hal_Core_delegate_lock
    extern Void ti_sysbios_hal_Core_delegate_lock();
    ti_sysbios_hal_Core_delegate_lock();
#else
    Core_CoreProxy_lock();
#endif
}

/*
 *  ======== Core_unlock ========
 */
Void Core_unlock()
{
#ifdef ti_sysbios_hal_Core_delegate_unlock
    extern Void ti_sysbios_hal_Core_delegate_unlock();
    ti_sysbios_hal_Core_delegate_unlock();
#else
    Core_CoreProxy_unlock();
#endif
}

/*
 *
 */
/*
 *  @(#) ti.sysbios.hal; 2, 0, 0, 0,582; 11-7-2012 12:42:05; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

