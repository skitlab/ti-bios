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
 *  ======== Hwi_stack.c ========
 */

#include <xdc/std.h>
#include <xdc/runtime/Error.h>
#include "package/internal/Hwi.xdc.h"

#ifdef __ti__
#pragma CODE_SECTION(ti_sysbios_hal_Hwi_initStack, ".text:ti_sysbios_hal_Hwi_initStack")
#pragma CODE_SECTION(ti_sysbios_hal_Hwi_checkStack, ".text:ti_sysbios_hal_Hwi_checkStack")
#endif

__extern __FAR__ UInt8 _STACK_SIZE;

#if defined(xdc_target__isaCompatible_28)    \
    || defined(xdc_target__isaCompatible_62) \
    || defined(xdc_target__isaCompatible_64T)
__extern __FAR__ char _stack[8];
#define STACK_BASE _stack
#else
#if defined(__ICC430__)
#pragma segment = "CSTACK"
#define STACK_BASE (Ptr)__segment_begin("CSTACK")
#else
__extern __FAR__ UInt8 __TI_STACK_BASE;
#define STACK_BASE &__TI_STACK_BASE
#endif
#endif

/*
 *  ======== Hwi_initStack ========
 *  Initialize the Common Interrupt Stack
 */
Void ti_sysbios_hal_Hwi_initStack(Void)
{
#if defined(xdc_target__isaCompatible_430)    \
    || defined(xdc_target__isaCompatible_430X)

    UInt * curStack;

    curStack = (UInt *)(&curStack);

    while (curStack-- > (UInt *)STACK_BASE) {
        *((UInt *)curStack) = 0xbebe;
    }

#else

    UArg curStack;

#ifdef xdc_target__isaCompatible_28
    curStack = (UArg)(&curStack) + 1;

    while (++curStack < (UArg)STACK_BASE + (SizeT)(&_STACK_SIZE)) {
        *((UInt8 *)curStack) = 0xbebe;
    }
#else
    curStack = (UArg)(&curStack);

    while (curStack-- > (UArg)STACK_BASE) {
        *((UInt8 *)curStack) = 0xbe;
    }
#endif

#endif
}

/*
 *  ======== Hwi_checkStack ========
 *  Initialize the Common Interrupt Stack
 */
Void ti_sysbios_hal_Hwi_checkStack(Void)
{
#ifdef xdc_target__isaCompatible_28
    volatile UInt one = 1;
    UInt16 *stackTop;

    stackTop =  (UInt16 *)(STACK_BASE) + (SizeT)(&_STACK_SIZE);

    /* 
     * SDOCM00084944
     * extraordinary effort to coerce compiler into NOT
     * performing the subtraction of 1 at compile time 
     */
    stackTop -= one;

    if (*stackTop != (UInt16)0xbebe) {
#else
    UInt8 *stackTop;

    stackTop = (UInt8 *)STACK_BASE;

    if (*stackTop != (UInt8)0xbe) {
#endif
        Error_raise(NULL, Hwi_E_stackOverflow, 0, 0);
    }
}

/*
 */
/*
 *  @(#) ti.sysbios.hal; 2, 0, 0, 0,582; 11-7-2012 12:42:06; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

