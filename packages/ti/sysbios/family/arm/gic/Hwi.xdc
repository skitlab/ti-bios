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
 *  ======== Hwi.xdc ========
 *
 */
package ti.sysbios.family.arm.gic;

import xdc.rov.ViewInfo;

import xdc.runtime.Diags;
import xdc.runtime.Log;
import xdc.runtime.Error;

import ti.sysbios.BIOS;
import ti.sysbios.interfaces.IHwi;

/*!
 *  ======== Hwi ========
 *  Hardware Interrupt Support Module.
 *  
 *  This Hwi module provides ARM cortex-A15 Generic Interrupt Controller (GIC)
 *  specific implementations and extensions of the APIs defined in 
 *  {@link ti.sysbios.interfaces.IHwi IHwi}.
 *
 *  @a(NOTE)
 *  In this Hwi module implementation, the instance config parameter value
 *  {@link #MaskingOption_LOWER} is equivalent to {@link #MaskingOption_SELF}.
 *  Statically configuring a Hwi object's {@link #Params.maskSetting} to 
 *  {@link #MaskingOption_LOWER} will result in the generation of a benign
 *  build warning. Dynamic usages of {@link #MaskingOption_LOWER} will be
 *  silently converted to {@link #MaskingOption_SELF}.
 *
 */

@Template("./Hwi.xdt")  /* generates the vector table and the dispatcher */
@ModuleStartup          /* generates call to Hwi_Module_startup at startup */

module Hwi inherits ti.sysbios.interfaces.IHwi
{

    // -------- Module Constants --------

    /*! 
     *  Number of interrupts implemented in GIC
     *
     *  On OMAP543x GIC implements 192 interrupts.
     *
     *  See the OMAP543x_ES1 Technical Reference Manual pg 5280 for more
     *  details.
     */
    config UInt NUM_INTERRUPTS;

    /*!
     *  Number of Priority bits implemented.
     *
     *  On OMAP543x running in non-secure mode, only most significant 4 
     *  priority bits are available for use. The least significant 4 bits
     *  are always 0.
     */
    config UInt NUM_PRIORITY_BITS;

    /*!
     *  Minimum Interrupt Priority.
     */
    config UInt MIN_INT_PRIORITY;

    /*!
     *  Default Interrupt Priority.
     *
     *  Set to one level higher than minimum supported priority.
     */
    config UInt DEFAULT_INT_PRIORITY;

    /*!
     *  GIC Binary Point Register value
     *
     *  Defines the point at which the priority value fields split into
     *  two parts, the group priority field and the sub-priority field.
     *
     *  The group priority field determines interrupt preemption in case
     *  of nested interrupts wheras sub-priority field is used to determine
     *  priority within a group when multiple interrrupts belonging to the
     *  same group are pending.
     *
     *  @a(constraints)
     *  SYS/BIOS currently only supports non-secure mode of operation. In
     *  this mode, the minimum value that can be assigned to BPR is 3. 
     */
    config UInt BPR = 3;

    /*! @_nodoc
     * Interrupt type. IRQ or FIQ 
     */
    enum Type {
        Type_IRQ,               /*! IRQ interrupt. */
        Type_FIQ                /*! FIQ interrupt. */
    };

    // -------- Module Types --------

    /*! Hwi vector function type definition. */
    typedef Void (*VectorFuncPtr)(void);

    /*!
     *  ======== BasicView ========
     *  @_nodoc
     */
    metaonly struct BasicView {
        Ptr         halHwiHandle;
        String      label;
        Int         intNum;
        String      absolutePriority;
        UInt        relativeGrpPriority;
        UInt        relativeSubPriority;
        String      fxn; 
        UArg        arg;
    };
    
    /*!
     *  ======== DetailedView ========
     *  @_nodoc
     */
    metaonly struct DetailedView {
        Ptr         halHwiHandle;
        String      label;
        Int         intNum;
        String      absolutePriority;
        UInt        relativeGrpPriority;
        UInt        relativeSubPriority;
        String      fxn; 
        UArg        arg;
        Ptr         irp; 
        Bool        enabled;
        Bool        pending;
    };
    
    /*!
     *  ======== ModuleView ========
     *  @_nodoc
     */
    metaonly struct ModuleView {
        String      options[4];
        UInt        spuriousInterrupts;
        UInt        lastSpuriousInterrupt;
        SizeT       hwiStackPeak;
        SizeT       hwiStackSize;
        Ptr         hwiStackBase;
    };

    /*!
     *  ======== rovViewInfo ========
     *  @_nodoc
     */
    @Facet
    metaonly config ViewInfo.Instance rovViewInfo = 
        ViewInfo.create({
            viewMap: [
                [
                    'Basic',    
                    {
                        type: ViewInfo.INSTANCE, 
                        viewInitFxn: 'viewInitBasic',    
                        structName: 'BasicView'
                    }
                ],
                [
                    'Detailed', 
                    {
                        type: ViewInfo.INSTANCE, 
                        viewInitFxn: 'viewInitDetailed', 
                        structName: 'DetailedView'
                    }
                ],
                [
                    'Module',   
                    {
                        type: ViewInfo.MODULE,
                        viewInitFxn: 'viewInitModule',   
                        structName: 'ModuleView'
                    }
                ]
            ]
        });

    /*! 
     * Generic Interrupt Controller Distributor. Symbol "Hwi_gicd" is 
     * a physical device 
     */
    struct Gicd {
        UInt32 CTLR;            /*! 0x000 Distributor Control Register */ 
        UInt32 TYPER;           /*! 0x004 Interrupt Controller Type Register */
        UInt32 IIDR;            /*! 0x008 Distributor Implementor Id Register */
        UInt32 hole0[29];       /*! 0x00C-0x07C */
        UInt32 IGROUPR[32];     /*! 0x080 Interrupt Group Registers */ 
        UInt32 ISENABLER[32];   /*! 0x100 Interrupt Set-Enable Registers */ 
        UInt32 ICENABLER[32];   /*! 0x180 Interrupt Clear-Enable Registers */ 
        UInt32 ISPENDR[32];     /*! 0x200 Interrupt Set-Pending Registers */ 
        UInt32 ICPENDR[32];     /*! 0x280 Interrupt Clear-Pending Registers */ 
        UInt32 ISACTIVER[32];   /*! 0x300 Interrupt Set-Active Registers */ 
        UInt32 ICACTIVER[32];   /*! 0x380 Interrupt Clear-Active Registers */ 
        UInt32 IPRIORITYR[255]; /*! 0x400 Interrupt Priority Registers */
        UInt32 hole1[1];        /*! 0x7FC */
        UInt32 ITARGETSR[255];  /*! 0x800 Interrupt Processor Targets Register */
        UInt32 hole2[1];        /*! 0xBFC */
        UInt32 ICFGR[64];       /*! 0xC00 Interrupt Configuration Registers */
        UInt32 PPISR;           /*! 0xD00 PPI Status Register */
        UInt32 SPISR[7];        /*! 0xD04 SPI Status Registers */
        UInt32 hole3[120];      /*! 0xD20-0xEFC */
        UInt32 SGIR;            /*! 0xF00 Software Generated Interrupt 
                                          Registers */
        UInt32 hole4[3];        /*! 0xF04-0xF0C */
        UInt32 CPENDSGIR[4];    /*! 0xF10 SGI Clear-Pending Registers */
        UInt32 SPENDSGIR[4];    /*! 0xF20 SGI Set-Pending Registers */
        UInt32 hole5[40];       /*! 0xF30-0xFCC */
        UInt32 PIDR4;           /*! 0xFD0 Peripheral ID4 Register */
        UInt32 PIDR5;           /*! 0xFD4 Peripheral ID5 Register */
        UInt32 PIDR6;           /*! 0xFD8 Peripheral ID6 Register */
        UInt32 PIDR7;           /*! 0xFDC Peripheral ID7 Register */
        UInt32 PIDR0;           /*! 0xFE0 Peripheral ID0 Register */
        UInt32 PIDR1;           /*! 0xFE4 Peripheral ID1 Register */
        UInt32 PIDR2;           /*! 0xFE8 Peripheral ID2 Register */
        UInt32 PIDR3;           /*! 0xFEC Peripheral ID3 Register */
        UInt32 CIDR0;           /*! 0xFF0 Component  ID0 Register */
        UInt32 CIDR1;           /*! 0xFF4 Component  ID1 Register */
        UInt32 CIDR2;           /*! 0xFF8 Component  ID2 Register */
        UInt32 CIDR3;           /*! 0xFFC Component  ID3 Register */
    };

    extern volatile Gicd gicd;

    /*! 
     * Generic Interrupt Controller CPU Interface. Symbol "Hwi_gicc" is 
     * a physical device.
     */
    struct Gicc {
        UInt32 CTLR;            /*! 0x0000 CPU Interface Control Register */ 
        UInt32 PMR;             /*! 0x0004 Interrupt Priority Mask Register */
        UInt32 BPR;             /*! 0x0008 Binary Point Register */
        UInt32 IAR;             /*! 0x000C Interrupt Acknowledge Register */
        UInt32 EOIR;            /*! 0x0010 End Of Interrupt Register */
        UInt32 RPR;             /*! 0x0014 Running Priority Register */
        UInt32 HPPIR;           /*! 0x0018 Highest Priority Pending Interrupt
                                    Register */
        UInt32 ABPR;            /*! 0x001C Aliased Binary Point Register */
        UInt32 AIAR;            /*! 0x0020 Aliased IAR Register */
        UInt32 AEOIR;           /*! 0x0024 Aliased EOI Register */
        UInt32 AHPPIR;          /*! 0x0028 Aliased HPPI Register */
        UInt32 hole0[41];       /*! 0x002C-0x00CC */
        UInt32 APR0;            /*! 0x00D0 Active Priority Register */
        UInt32 hole1[3];        /*! 0x00D4-0x00DC */
        UInt32 NSAPR0;          /*! 0x00E0 Non-secure Active Priority Register */
        UInt32 hole2[6];        /*! 0x00E4-0x00F8 */
        UInt32 IIDR;            /*! 0x00FC CPU Interface Id Register */
        UInt32 hole3[960];      /*! 0x0100-0x0FFC */
        UInt32 DIR;             /*! 0x1000 Deactivate Interrupt Register */
    };

    extern volatile Gicc gicc;

    // -------- Module Parameters --------

    /*! Reset Handler. Default is _c_int00 */
    metaonly config VectorFuncPtr resetFunc;

    /*! 
     * Undefined instruction exception handler. 
     * Default is an internal exception handler.
     */
    metaonly config VectorFuncPtr undefinedInstFunc;

    /*! 
     * SVC Handler. Supervisor Call exception handler.
     * (previously called Software Interrupt or SWI)
     * Default is an internal exception handler.
     */
    metaonly config VectorFuncPtr svcFunc;

    /*! 
     * Prefetch abort exception handler.
     * Default is an internal exception handler.
     */
    metaonly config VectorFuncPtr prefetchAbortFunc;

    /*! 
     * Data abort exception handler.
     * Default is an internal exception handler.
     */
    metaonly config VectorFuncPtr dataAbortFunc;

    /*! 
     * Reserved exception handler.
     * Default is an internal exception handler.
     */
    metaonly config VectorFuncPtr reservedFunc;

    /*! IRQ interrupt handler.
     *  Default is internal IRQ dispatcher
     */
    metaonly config VectorFuncPtr irqFunc;

    /*! FIQ interrupt handler.
     *  Default is internal exception handler.
     */
    metaonly config VectorFuncPtr fiqFunc;

    /*!
     *  Error raised when an attempt is made to create a Hwi
     *  that has already been created.
     */
    config Error.Id E_alreadyDefined = {
        msg: "E_alreadyDefined: Hwi already defined, intnum: %d"
    };

    /*!
     *  Error raised when Hwi handle referenced in Hwi_delete()
     *  is not found in the Hwi dispatch table
     */
    config Error.Id E_handleNotFound = {
        msg: "E_handleNotFound: Hwi handle not found: 0x%x"
    };

    /*!
     *  Error raised when an undefined interrupt has fired.
     */
    config Error.Id E_undefined = {
        msg: "E_undefined: Hwi undefined, intnum: %d"
    };

    /*!
     *  Error raised if an attempt is made to create a Hwi
     *  with an interrupt number greater than Hwi_NUM_INTERRUPTS - 1.
     */
    config Error.Id E_badIntNum = {
        msg: "E_badIntNum, intnum: %d is out of range"
    };

    /*!
     *  Issued just prior to Hwi function invocation (with interrupts disabled)
     */
    config Log.Event LM_begin = {
        mask: Diags.USER1 | Diags.USER2,
        msg: "LM_begin: hwi: 0x%x, func: 0x%x, preThread: %d, intNum: %d, irp: 0x%x"
    };

    /*!
     *  Issued just after return from Hwi function (with interrupts disabled)
     */
    config Log.Event LD_end = {
        mask: Diags.USER2,
        msg: "LD_end: hwi: 0x%x"
    };


    // -------- Module Functions --------

    /*!
     *  ======== disable ========
     */
    @Macro
    override UInt disable();

    /*!
     *  ======== enable ========
     */
    @Macro
    override UInt enable();

    /*!
     *  ======== restore ========
     */
    @Macro
    override Void restore(UInt key);

    /*!
     *  ======== getHandle ========
     *  Returns Hwi_Handle associated with intNum
     *
     *  @param(intNum)  interrupt number
     */
    @DirectCall
    Handle getHandle(UInt intNum);

    /*!
     *  ======== setPriority ========
     *  Set an interrupt's priority.
     *
     *  Not an instance function so that it can be used
     *  with non-dispatched interrupts.
     *
     *  @param(intNum)      ID of interrupt
     *  @param(priority)    priority
     */
    @DirectCall
    Void setPriority(UInt intNum, UInt priority);

instance:

    /*! @_nodoc
     *  Interrupt type (IRQ/FIQ). Default is IRQ.
     */
    config Type type = Type_IRQ;

    /*!
     *  ======== Interrupt priority ========
     *  Hwi instance interrupt priority.
     *
     *  Valid priorities are device dependent and their
     *  nesting behaviors depend on the {@link #BPR} setting.
     *
     *  See the ARM GIC Architecture Specification v2.0 document for more
     *  details.
     */
    override config Int priority = -1;

    /*! The interrupt controller is designed for priority based interrupts */
    override config IHwi.MaskingOption maskSetting = IHwi.MaskingOption_LOWER;

    /*!
     *  ======== reconfig ========
     *  Reconfigure a dispatched interrupt.
     */
    @DirectCall
    Void reconfig(FuncPtr fxn, const Params *params);

internal:   /* not for client use */

    /*!
     *  ======== inUseMeta ========
     *  @_nodoc
     *  Check for Hwi already in use.
     *  For internal SYS/BIOS use only. 
     *  Should be called prior to any internal Hwi.create().
     *
     *  @param(intNum)  interrupt number
     */
    metaonly Bool inUseMeta(UInt intNum);

    /* 
     * Swi and Task module function pointers. 
     * Used to decouple Hwi from Swi and Task when 
     * dispatcherSwiSupport or
     * dispatcherTaskSupport is false.
     */
    config UInt (*swiDisable)();
    config Void (*swiRestoreHwi)(UInt);
    config UInt (*taskDisable)();
    config Void (*taskRestoreHwi)(UInt);

    /* assembly code mode registers setup */
    Void init();

    /* Interrupt Dispatcher assembly code wrapper */
    Void dispatch();

    /* Interrupt Dispatcher C code */
    Void dispatchC(Irp irp);

    /* non plugged interrupt handler */
    Void nonPluggedHwiHandler(UArg arg);

    /*!
     *  const array to hold all HookSet objects.
     */
    config HookSet hooks[length] = [];

    /*! Meta World Only Hwi Configuration Object. */
    metaonly struct InterruptObj {
        Bool used;              /* Interrupt already defined? */
        FuncPtr fxn;            /* Dispatched ISR function */
    };

    /*!
     * Meta-only array of interrupt objects.
     * This meta-only array of Hwi config objects is initialized
     * in Hwi.xs:module$meta$init().
     */
    metaonly config InterruptObj interrupt[];

    /*!
     * GIC Distributor base address
     */
    metaonly config Ptr gicdBaseAddress;

    /*!
     * GIC cpu interface base address
     */
    metaonly config Ptr giccBaseAddress;

    struct Instance_State {
        Type        type;           // Interrupt Type
        UInt        priority;       // Interrupt Priority
        UArg        arg;            // Argument to Hwi function.
        FuncPtr     fxn;            // Hwi function.
        Irp         irp;            // current IRP
        Ptr         hookEnv[];
    };
 
    struct Module_State {
        UInt32        iser[32];       // Initial Interrupt Set Enable Reg values
        UInt          spuriousInts;   // Count of spurious interrupts
        UInt          lastSpuriousInt;// Most recent spurious interrupt
        UInt          irp;            // temporary irp storage for IRQ handler
        Char          *taskSP;        // temporary storage of interrupted
                                      // Task's SP during ISR execution

        Char          *isrStack;      // Points to isrStack address
        Ptr           isrStackBase;   // = __TI_STACK_BASE
        Ptr           isrStackSize;   // = Program.stack 
        Hwi.Object    nonPluggedHwi;  // default Hwi object
        Handle        dispatchTable[];// dispatch table
        volatile UInt curIntId;       // current Interrupt Id
    };
}

/*
 *  @(#) ti.sysbios.family.arm.gic; 2, 0, 0, 0,36; 11-7-2012 12:41:06; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

