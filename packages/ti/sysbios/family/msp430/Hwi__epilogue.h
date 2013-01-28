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

#if defined(__ICC430__)
#include <intrinsics.h>
#endif

#define GIE_BIT  0x8    /* GIE bit position in Status Register (SR) */ 

/*
 *  ======== Hwi_disable ========
 */
#if defined(__ICC430__)
#pragma inline=forced
UInt ti_sysbios_family_msp430_Hwi_disable()
#else
inline UInt ti_sysbios_family_msp430_Hwi_disable()
#endif
{
    UInt state;

#if defined(__ICC430__)
    state = __get_SR_register();
    __disable_interrupt();
#else
    state = _get_SR_register();
    _disable_interrupts();
#endif
    return (state);
}


/*
 *  ======== Hwi_enable ========
 */
#if defined(__ICC430__)
#pragma inline=forced
UInt ti_sysbios_family_msp430_Hwi_enable()
#else
inline UInt ti_sysbios_family_msp430_Hwi_enable()
#endif
{
    UInt state;

#if defined(__ICC430__)
    state = __get_SR_register();
    __enable_interrupt();
#else
    state = _get_SR_register();
    _enable_interrupts();
#endif
    return (state);
}

/*
 *  ======== Hwi_restore ========
 */
#if defined(__ICC430__)
#pragma inline=forced
Void ti_sysbios_family_msp430_Hwi_restore(UInt key)
#else
inline Void ti_sysbios_family_msp430_Hwi_restore(UInt key)
#endif
{
    if (key & GIE_BIT) {
#if defined(__ICC430__)
        __enable_interrupt();
#else
        _enable_interrupts();
#endif
    }
    else {
#if defined(__ICC430__)
        __disable_interrupt();
#else
        _disable_interrupts();
#endif
    }
}

/*
 *  @(#) ti.sysbios.family.msp430; 1, 0, 0, 0,243; 11-7-2012 12:41:48; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

