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
 *  ======== GateSmp.c ========
 */

#include <xdc/std.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Startup.h>

#include <ti/sysbios/family/arm/ducati/Core.h>
#include <ti/sysbios/hal/Hwi.h>

#include "package/internal/GateSmp.xdc.h"

/*
 *  ======== GateSmp_Instance_init ========
 */
Void GateSmp_Instance_init(GateSmp_Object *gate,
                               const GateSmp_Params *params)
{
    gate->gateWord = 0;

    gate->stalls = 0;
    gate->noStalls = 0;
    gate->totalStalls = 0;
    gate->maxStall = 0;
}

/*
 *  ======== GateSmp_enter ========
 */
IArg GateSmp_enter(GateSmp_Object *gate)
{
    UInt stalls = 0;
    UInt coreId = Core_getId();
    volatile UInt8 *gateBytePtr;

    gateBytePtr = (volatile UInt8 *)&gate->gateWord;
    gateBytePtr = &gateBytePtr[coreId];

    while (TRUE) {

        *gateBytePtr = 1;

        if (gate->gateWord > 0x100) {
            *gateBytePtr = 0;

            /* make core 1's loop a little slower to avoid a stalemate */
            if (coreId == 1) {
                *gateBytePtr = *gateBytePtr; 
                *gateBytePtr = *gateBytePtr; 
                *gateBytePtr = *gateBytePtr; 
            }
            if (GateSmp_enableStats == TRUE) {
                stalls += 1;
            }
        }
        else {
            if (GateSmp_enableStats == TRUE) {
                if (stalls) {
                    gate->stalls += 1;
                    gate->totalStalls += stalls;
                    if (stalls > gate->maxStall) {
                        gate->maxStall = stalls;
                    }
                }
                else {
                    gate->noStalls += 1;
                }
            }
            Assert_isTrue((*gateBytePtr == 1), NULL);
            return (0);
        }
    }
}

/*
 *  ======== GateSmp_leave ========
 */
Void GateSmp_leave(GateSmp_Object *gate, IArg key)
{
    UInt coreId;
    volatile UInt8 *gateBytePtr;

    coreId = Core_getId();
    gateBytePtr = (volatile UInt8 *)&gate->gateWord;
    gateBytePtr = &gateBytePtr[coreId];
    *gateBytePtr = 0;
}

/*
 *  ======== GateSmp_sync ========
 *  32 bit Gate values
 *
 *  Gate operation depends on little endian orientation
 *
 *  00 00 00 00 = Gate reset
 *  00 00 00 01 = Core 0 is waiting for Core 1
 *  00 00 01 00 = Core 1 is waiting for Core 0
 *  00 00 01 01 = Both cores are "in sync"
 *  00 00 00 00 = Gate reset
 */
Void GateSmp_sync(GateSmp_Object *gate)
{
    UInt stalls = 0;
    UInt coreId = Core_getId();
    volatile UInt8 *gateBytePtr;

    gateBytePtr = (volatile UInt8 *)&gate->gateWord;
    gateBytePtr = &gateBytePtr[coreId];

    /* No nesting!!! */
    Assert_isTrue ((*gateBytePtr != 1),
        GateSmp_A_nestedEnter);

    *gateBytePtr = 1;

    /* 
     * wait here until the other core gets to the same point
     * or blows through it
     */

    while ((gate->gateWord == 0x0001) || (gate->gateWord == 0x0100)) {
        stalls += 1;
    }

    gate->gateWord = 0; /* signal the end of sync */

    if (GateSmp_enableStats == TRUE) {
        if (stalls) {
            gate->stalls += 1;
            gate->totalStalls += stalls;
            if (stalls > gate->maxStall) {
                gate->maxStall = stalls;
            }
        }
        else {
            gate->noStalls += 1;
        }
    }
}

/*
 *  ======== GateSmp_query ========
 */
Bool GateSmp_query(Int qual)
{
    return (FALSE);
}

/*
 */

/*
 *  @(#) ti.sysbios.family.arm.ducati; 2, 0, 0, 0,331; 11-7-2012 12:40:55; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

