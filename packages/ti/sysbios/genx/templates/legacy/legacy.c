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
 *  ======== legacy.c ========
 *  Legacy version of mutex example
 */

/*
 * Most BIOS 5.x/legacy apps include files using the short form
 * <std.h>, <sys.h>, etc. 
 *
#include <std.h>
#include <sys.h>
#include <clk.h>
#include <tsk.h>
#include <sem.h>
 *
 * We are using the long form <ti/bios/include/std.h>
 * so that this example works seamlessly with the CCSv4 project wizard.
 *
 * You can use the short form of these names if you update the -I option
 * in your project options (-IC:/Program Files/.../bios_6_20/ti/bios/include)
 */
#include <ti/bios/include/std.h>
#include <ti/bios/include/sys.h>
#include <ti/bios/include/clk.h>
#include <ti/bios/include/tsk.h>
#include <ti/bios/include/sem.h>

Void task1();
Void task2();

Int resource = 0;
SEM_Handle sem;
TSK_Handle tsk1;
TSK_Handle tsk2;

Int finishCount = 0;

/*
 *  ======== main ========
 */
Void main()
{ 
    TSK_Attrs taskAttrs;
        
    /* Create a SEM object to be use as a resource lock */
    sem = SEM_create(1, NULL);

    /* Create two tasks that share a resource*/
    taskAttrs = TSK_ATTRS;

    taskAttrs.priority = 1;
    tsk1 = TSK_create ((Fxn)task1, &taskAttrs, NULL);

    taskAttrs.priority = 2;
    tsk2 = TSK_create ((Fxn)task2, &taskAttrs, NULL);
}

/*
 *  ======== task1 ========
 */
Void task1()
{
    UInt32 time;

    for (;;) {
        SYS_printf("Running task1 function\n");

        if (SEM_count(sem) == 0) {
            SYS_printf("Sem blocked in task1\n");
        }

        /* Get access to resource */
        SEM_pend(sem, SYS_FOREVER); 

        /* do work by waiting for 2 system ticks to pass */
        time = CLK_getltime();
        while (CLK_getltime() <= (time + 1)) {
            ;
        }

        /* do work on locked resource */
        resource += 1;
        /* unlock resource */

        SEM_post(sem);

        TSK_sleep(5);
    }
}

/*
 *  ======== task2 ========
 */
Void task2()
{
    for (;;) {
        SYS_printf("Running task2 function\n");

        if (SEM_count(sem) == 0) {
            SYS_printf("Sem blocked in task2\n");
        }

         /* Get access to resource */
        SEM_pend(sem, SYS_FOREVER);

        /* do work on locked resource */
        resource += 1;
        /* unlock resource */

        SEM_post(sem);

        TSK_sleep(5);
        
        finishCount++;
        if (finishCount == 5) {
            SYS_printf("Calling SYS_exit from task2\n");
            SYS_exit(0);
        }
    }
}
/*
 *  @(#) ti.sysbios.genx; 2, 0, 0, 0,555; 11-7-2012 12:41:57; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

