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
 *  ======== IntXbar.c ========
 *  Contains functions specific to Vayu SoC.
 */

#include <xdc/std.h>

#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>

#include <ti/sysbios/interfaces/IHwi.h>

#ifdef xdc_target__isaCompatible_arp32

#include <arp32.h>
#include <ti/sysbios/family/arp32/Hwi.h>

#elif defined xdc_target__isaCompatible_66

#include <ti/sysbios/family/c64p/Hwi.h>

#elif (defined xdc_target__isaCompatible_v7M || \
       defined xdc_target__isaCompatible_v7M4)

#include <ti/sysbios/family/arm/m3/Hwi.h>
#define PID0_ADDRESS 0xE00FFFE0

#elif defined xdc_target__isaCompatible_v7A15

#include <ti/sysbios/family/arm/gic/Hwi.h>

#endif

#include "package/internal/IntXbar.xdc.h"

/*!
 *  ======== IntXbar_initIntXbar ========
 */
Void IntXbar_initIntXbar()
{
    UInt intNum;
    UInt32 regOffset;
    UInt32 *intXbarReg;
    UInt16 intXbarLength;

#ifdef xdc_target__isaCompatible_arp32
    UInt32 cpuId = _get_cpunum();

    if (cpuId == 0) {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_EVE0);
    }
    else if (cpuId == 1) {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_EVE1);
    }
    else if (cpuId == 2) {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_EVE2);
    }
    else if (cpuId == 3) {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_EVE3);
    }

    intXbarLength = IntXbar_NUM_EVE_XBAR_INST;

#elif defined xdc_target__isaCompatible_66
    extern cregister volatile UInt DNUM;
    
    if (DNUM) {  /* DSP1 */
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_DSP1);
    }
    else {       /* DSP0 */
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_DSP0);
    }

    intXbarLength = IntXbar_NUM_DSP_XBAR_INST;

#elif (defined xdc_target__isaCompatible_v7M || \
       defined xdc_target__isaCompatible_v7M4)
    if (*(UInt *)(PID0_ADDRESS)) {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_BENELLI_CORE1);
    }
    else {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_BENELLI_CORE0);
    }

    intXbarLength = IntXbar_NUM_BENELLI_XBAR_INST;

#elif defined xdc_target__isaCompatible_v7A15
        
    intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                            IntXbar_MMR_OFFSET_A15);

#endif

    for (intNum = 0; intNum < intXbarLength; intNum++) {
        if (IntXbar_module->intXbar[intNum]) {
            regOffset = intNum / 2;
            if (intNum % 2) {
                    intXbarReg[regOffset] = (intXbarReg[regOffset] & 0x0000FFFF) | 
                                        (IntXbar_module->intXbar[intNum] << 16);
            }
            else {
                    intXbarReg[regOffset] = (intXbarReg[regOffset] & 0xFFFF0000) | 
                                        (IntXbar_module->intXbar[intNum]);
            }
        }
    }
}

/*!
 *  ======== IntXbar_connect ========
 */
Void IntXbar_connect(UInt xbarInstance, UInt intSource)
{
    UInt32 regOffset;
    UInt32 *intXbarReg;
    UInt16 intXbarLength;

#ifdef xdc_target__isaCompatible_arp32
    UInt32 cpuId = _get_cpunum();

    if (cpuId == 0) {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_EVE0);
    }
    else if (cpuId == 1) {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_EVE1);
    }
    else if (cpuId == 2) {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_EVE2);
    }
    else if (cpuId == 3) {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_EVE3);
    }

    intXbarLength = IntXbar_NUM_EVE_XBAR_INST;

    Assert_isTrue((xbarInstance <= intXbarLength) && (xbarInstance >= 1),
            IntXbar_A_badEveXbarInstanceNum);

#elif defined xdc_target__isaCompatible_66
    extern cregister volatile UInt DNUM;
    
    if (DNUM) {  /* DSP1 */
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_DSP1);
    }
    else {       /* DSP0 */
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_DSP0);
    }

    intXbarLength = IntXbar_NUM_DSP_XBAR_INST;

    Assert_isTrue((xbarInstance <= intXbarLength) && (xbarInstance >= 1),
            IntXbar_A_badDspXbarInstanceNum);

#elif (defined xdc_target__isaCompatible_v7M || \
       defined xdc_target__isaCompatible_v7M4)
    if (*(UInt *)(PID0_ADDRESS)) {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_BENELLI_CORE1);
    }
    else {
        intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                                IntXbar_MMR_OFFSET_BENELLI_CORE0);
    }

    intXbarLength = IntXbar_NUM_BENELLI_XBAR_INST;
    
    Assert_isTrue((xbarInstance <= intXbarLength) && (xbarInstance >= 1),
            IntXbar_A_badBenelliXbarInstanceNum);

#elif defined xdc_target__isaCompatible_v7A15
        
    intXbarReg = (UInt32 *)(IntXbar_MMR_BASE_ADDR + 
                            IntXbar_MMR_OFFSET_A15);

    intXbarLength = IntXbar_NUM_A15_XBAR_INST;
    
    Assert_isTrue((xbarInstance <= intXbarLength) && (xbarInstance >= 1),
            IntXbar_A_badA15XbarInstanceNum);

#endif
    
    Assert_isTrue((intSource <= 391), IntXbar_A_badIntSourceIdx);

    regOffset = (xbarInstance - 1) / 2;

    if ((xbarInstance - 1) % 2) {
        intXbarReg[regOffset] = (intXbarReg[regOffset] & 0x0000FFFF) | 
                                (intSource << 16);
    }
    else {
        intXbarReg[regOffset] = (intXbarReg[regOffset] & 0xFFFF0000) | 
                                (intSource);
    }

    IntXbar_module->intXbar[xbarInstance - 1] = intSource;
}

/*
 */
/*
 *  @(#) ti.sysbios.hal.vayu; 2, 0, 0, 0,27; 11-7-2012 12:42:10; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

