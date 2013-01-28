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
/* ======== Hwi_asm_switch.asm ========
 *
 */

#include "package/internal/Hwi.xdc.h"

/*
 *  ======== ti_sysbios_family_xxx_Hwi_switchToIsrStack ========
 *  Char *ti_sysbios_family_xxx_Hwi_switchToIsrStack();
 *
 *  If not already on the isr stack, switch to it.
 *
 *  Checks the Hwi module object's taskSP. 
 *  If 0, then set taskSP to current SP then switch to ISR stack.
 *
 *  Returns:
 *        old taskSP value for use with switchToTaskStack()
 */
Char *ti_sysbios_family_xxx_Hwi_switchToIsrStack()
{
    Char **taskSP = (Char **) &(Hwi_module->taskSP);
    Char *isrStack;

    if ((*taskSP) != 0) {
        return (*taskSP);
    }

    isrStack = Hwi_module->isrStack;

    __asm__ __volatile__ ("str sp, [%0]\n\t" /* save SP into taskSP */
                          "mov sp, %1"       /* switch to isr Stack */
                          :: "r" (taskSP), "r" (isrStack)
                          : "sp", "memory"
                          );

    return 0;
}

/*
 *  ======== ti_sysbios_family_xxx_Hwi_switchToTaskStack ========
 *  ti_sysbios_family_xxx_Hwi_switchToTaskStack(Char *oldTaskSP);
 *
 *  If at bottom of ISR stack, switch to Task stack.
 *
 *  If oldTaskSP is zero, then this is the thread that switched
 *  to the ISR stack first and therefore it is safe to switch
 *  back to the task stack address saved in the Hwi module 
 *  object's taskSP variable.
 */
Void ti_sysbios_family_xxx_Hwi_switchToTaskStack(Char *oldTaskSP)
{
    Char **taskSP = (Char **) &(Hwi_module->taskSP);

    if (oldTaskSP == 0) {
        __asm__ __volatile__ ("ldr sp, [%0]\n\t" /*Interrupted task's SP*/
                              "str %1, [%0]"     /*Signal return to Task Stack*/
                              :: "r" (taskSP), "r" (oldTaskSP)
                              : "sp", "memory"
                             );
    }
}
/*
 *  @(#) ti.sysbios.family.arm.gic; 2, 0, 0, 0,36; 11-7-2012 12:41:06; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

