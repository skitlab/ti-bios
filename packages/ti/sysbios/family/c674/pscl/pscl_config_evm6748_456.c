/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  ======== pscl_config_evm6748_456.c ========
 *
 *  PSCL configuration library for evm6748, extended for 456MHz.
 *
 */

#include <stdlib.h>

#include <ti/sysbios/family/c674/pmi.h>
#include <ti/sysbios/family/c674/pscl/_pscl.h>

#define NUMBER_CPU_SETPOINTS    4 
#define NUMBER_PER_SETPOINTS    2 

unsigned _PSCL_numSP[NUMBER_CLOCKS] = {NUMBER_CPU_SETPOINTS, 
    NUMBER_PER_SETPOINTS};

const unsigned PSCL_voltScalingSupported = TRUE;

// ******************** PLL0 setpoint configuration ********************

PMI_PllCfg PSCL_pllCfgTableCPU[NUMBER_CPU_SETPOINTS] = {
//  pllm  postdiv prediv    mode       lockCycles  powerDown       SYSCLK1 
//  ----  ------- ------  ---------    ----------  ---------      --------- 
   {0x18, 0x8002, 0x8000, PMI_LOCK,      0x190,         0   }, //  100 MHz
   {0x18, 0x8002, 0x8000, PMI_LOCK,      0x190,         0   }, //  200 MHz
   {0x1E, 0x8000, 0x8001, PMI_LOCK,      0x2CF,         0   }, //  372 MHz
   {0x12, 0x8000, 0x8000, PMI_LOCK,      0x1CB,         0   }, //  456 MHz
};

PMI_ClkDivCfg PSCL_divCfgTableCPU[NUMBER_CPU_SETPOINTS] = {
//    div1    div2    div3    div7        DSP div 
//   ------  ------  ------  -------      ------- 
   { 0x8001, 0x8003, 0x8003, 0x8001 }, //    2
   { 0x8000, 0x8001, 0x8001, 0x8001 }, //    1
   { 0x8000, 0x8001, 0x8001, 0x8001 }, //    1
   { 0x8000, 0x8001, 0x8001, 0x8001 }, //    1
};

PMI_ClkSourceCfg clkCfg = { 
//        clkmode             bypass clksrc         EMIFA clksrc
//    -----------------     ----------------     ------------------
        CLKMODE_OSCIN,      EXTCLKSRC_OSCIN,     EMA_CLKSRC_SYSCLK3 
};

_PSCL_SP_Info _PSCL_SP_table_CPU[NUMBER_CPU_SETPOINTS] = {
//        PLL config             divider config       clk cfg   freq  voltage
//  -----------------------  -----------------------  -------  ------ -------   
   {&PSCL_pllCfgTableCPU[0], &PSCL_divCfgTableCPU[0], &clkCfg, 100000, 1000 },
   {&PSCL_pllCfgTableCPU[1], &PSCL_divCfgTableCPU[1], &clkCfg, 200000, 1100 },
   {&PSCL_pllCfgTableCPU[2], &PSCL_divCfgTableCPU[2], &clkCfg, 372000, 1200 },
   {&PSCL_pllCfgTableCPU[3], &PSCL_divCfgTableCPU[3], &clkCfg, 456000, 1300 },
};


// ******************** PLL1 setpoint configuration ********************

PMI_PllCfg PSCL_pllCfgTablePER[NUMBER_PER_SETPOINTS] = {
//  pllm  postdiv prediv    mode       lockCycles  powerDown       SYSCLK1 
//  ----  ------- ------  ---------    ----------  -----------    --------- 
   {0x15, 0x8001, 0x8000, PMI_LOCK,      0x1AB,         0   }, //  264 MHz
   {0x18, 0x8001, 0x8000, PMI_LOCK,      0x190,         0   }, //  300 MHz
};

PMI_ClkDivCfg PSCL_divCfgTablePER[NUMBER_PER_SETPOINTS] = {
//    div1    div2    div3 
//   ------  ------  ------
   { 0x8000, 0x8001, 0x8002 },
   { 0x8000, 0x8001, 0x8002 },
};

_PSCL_SP_Info _PSCL_SP_table_PER[NUMBER_PER_SETPOINTS] = {
//        PLL config             divider config       clk cfg   freq  voltage
//  -----------------------  -----------------------  -------  ------ -------   
   {&PSCL_pllCfgTablePER[0], &PSCL_divCfgTablePER[0],   NULL,  264000, 1000 },
   {&PSCL_pllCfgTablePER[1], &PSCL_divCfgTablePER[1],   NULL,  300000, 1200 },
};
/*
 *  @(#) ti.sysbios.family.c674.pscl; 1, 0, 0,52; 11-7-2012 12:41:45; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

