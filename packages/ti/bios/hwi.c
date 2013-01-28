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
 *  ======== hwi.c ========
 */


#include <ti/bios/include/std.h>

#if defined(_64P_) || defined(_674_) || defined(_64T_) || defined(_66_)

#include "hwi_c64p.c"

#elif defined(_64_)
#include "hwi_c64.c"

#elif defined(_67P_)
#include "hwi_c67p.c"

#elif defined(_28_)
#include "hwi_c28.c"

#else
#error "target not supported by legacy HWI module"
#endif

/*! Revision history
 *! =================
 *! 02-Apr-2009 connell use _64T_ instead of "_TMS320C6000_LITE"
 *! 03-Dec-2008 connell use cg defined "_TMS320C6000_LITE" instead of "_Tesla_"
 *! 28-May-2008 connell added Tesla support
 *! 11-Jul-2007 jv      switch on define value from std.h
 *! 13-Dec-2006 kw      split into separate files
 */
/*
 *  @(#) ti.bios; 5, 6, 0,576; 11-7-2012 12:40:08; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

