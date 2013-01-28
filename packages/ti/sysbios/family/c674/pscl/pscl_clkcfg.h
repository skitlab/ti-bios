/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  ======== pscl_clkcfg.h ========
 *
 *  PSCL clock configuration type and variable declarations.
 *
 */

#ifndef PSCLCLKCFG_
#define PSCLCLKCFG_

#include <ti/sysbios/family/c674/pmi.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
   PSCL_CPU_CLK = 0,
   PSCL_PER_CLK = 1
} PSCL_ClkID;


extern const unsigned PSCL_cpuFreqCnt;     /* must be <= 16 */

extern PMI_PllCfg PSCL_pllCfgTableCPU[];
extern PMI_PllCfg PSCL_pllCfgTablePER[];

#ifdef __cplusplus
}
#endif

#endif /* PSCLCLKCFG_*/
/*
 *  @(#) ti.sysbios.family.c674.pscl; 1, 0, 0,52; 11-7-2012 12:41:45; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

