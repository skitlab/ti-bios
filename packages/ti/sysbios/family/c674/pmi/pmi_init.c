/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  ======== pmi_init.c ========
 *
 *  PMI module initialization.
 *
 */

#include <ti/sysbios/family/c674/pmi.h>

/*
 *  ======== PMI_init ========
 */
PMI_Status PMI_init(void)
{
    PMI_Status status = PMI_OK;
    static unsigned initialized = 0;

    if (initialized == 0) {
        PMI_initPLL(PMI_CPU);
        PMI_initPLL(PMI_PER);
        PMI_initVoltageControl();
        initialized = 1;
    }

    return(status);
}


/*
 *  @(#) ti.sysbios.family.c674.pmi; 1, 0, 0,52; 11-7-2012 12:41:45; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

