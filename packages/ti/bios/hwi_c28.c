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
 *  ======== hwi_c28.c ========
 */

#include <xdc/std.h>

#include <ti/sysbios/family/c28/Hwi.h>

#include <xdc/runtime/Error.h>

#include <ti/bios/include/std.h>
#include <ti/bios/include/hwi.h>


__FAR__ HWI_Attrs HWI_ATTRS = {
    1,                          /* IER bitmask, 1="self" */
    0                           /* function arg */
};

/*
 *  ======== HWI_dispatchPlug ========
 *  Plug the HWI dispatcher table.
 */
Void HWI_dispatchPlug(Int vecid, Fxn fxn, HWI_Attrs *attrs)
{
    Hwi_Params hwiParams;
    Hwi_Handle hwi;
    Error_Block eb;

    if (attrs == NULL) {
        attrs = &HWI_ATTRS;
    }

    Hwi_Params_init(&hwiParams);

    Error_init(&eb);

    if (attrs->ierMask == 1) {
        hwiParams.maskSetting = Hwi_MaskingOption_SELF;
    }
    else {
        hwiParams.maskSetting = Hwi_MaskingOption_BITMASK;
    }
    
    hwiParams.disableMask = hwiParams.restoreMask = attrs->ierMask;

    hwiParams.arg = attrs->arg;
    hwiParams.enableInt = FALSE; 

    /* 
     * Tell the BIOS6 dispatcher not to ACK interrupts because the BIOS5
     * dispatcher doesn't ACK interrupts
     */
    hwiParams.enableAck = FALSE;

    hwi = Hwi_getHandle(vecid);
    if (hwi == NULL) {
        Hwi_create(vecid, (Hwi_FuncPtr)fxn, &hwiParams, &eb);
    }
    else {
        Hwi_reconfig(hwi, (Hwi_FuncPtr)fxn, &hwiParams);
    }
}

/*! Revision history
 *! =================
 *! 12-Mar-2010 connell fix for SDOCM00066697: made externs extern __FAR__
 *! 05-Jun-2009 skp     hwiParams.enableAck set to FALSE
 *! 18-Feb-2009 skp     Changed 'intrMask' to 'ierMask'
 *! 11-Jul-2007 jv      add error block to create call.
 *! 13-Dec-2006 kw      split out into hwi_c28.c
 *! 22-Sep-2006 cmcc    Don't need to include family/x/hwi.h. Added ifndef for
 *!                     TMS470 disableMask and restoreMask. Explicit cast on 
 *!                     Hwi_getInstance.
 *! 28-Nov-2005 agd     created.
 */
/*
 *  @(#) ti.bios; 5, 6, 0,576; 11-7-2012 12:40:04; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

