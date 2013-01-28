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
 *  ======== ClockFreqs.xs ========
 *
 */

var ClockFreqs;

/*
 *  ======== module$use ========
 */
function module$use()
{
    ClockFreqs = this;

    /* set fxntab default */
    ClockFreqs.common$.fxntab = false;

    /* if application has not defined any rates... set defaults */
    if ( (ClockFreqs.ACLK === undefined) && (ClockFreqs.SMCLK === undefined) ) {

        var Boot = xdc.module('ti.catalog.msp430.init.Boot');

        if (Boot.configureDCO == true) {
            /* note: these are hardwired here, and in Boot too */
            ClockFreqs.ACLK  = 32768;
            ClockFreqs.SMCLK = 8192000;
        }
        else {
            /* note: these are hardwired here, and in IClock.xdc too */
            ClockFreqs.ACLK  = 32768;
            ClockFreqs.SMCLK = 1000000;
        }
    }

    /* else, if app has defined at least one, but not all... throw an error */
    else if ( ( (!(ClockFreqs.ACLK === undefined)) || 
                (!(ClockFreqs.SMCLK === undefined)) ) && 
              ( (ClockFreqs.ACLK === undefined) || 
                (ClockFreqs.SMCLK === undefined) ) ) {

                throw new Error ("If one clock frequency is specified then ALL clock frequencies must be specified!");

    }

    /* else, do nothing more, just use the application-defined values */
}

/*
 *  @(#) ti.sysbios.family.msp430; 1, 0, 0, 0,243; 11-7-2012 12:41:47; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

