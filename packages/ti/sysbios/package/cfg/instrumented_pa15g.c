/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y35
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/TaskSupport.h>
#include <ti/sysbios/family/arm/a15/Cache.h>
#include <ti/sysbios/family/arm/a15/Mmu.h>
#include <ti/sysbios/family/arm/a15/TimerSupport.h>
#include <ti/sysbios/family/arm/a15/TimestampProvider.h>
#include <ti/sysbios/family/arm/exc/Exception.h>
#include <ti/sysbios/family/arm/gic/Hwi.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Cache.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/hal/vayu/IntXbar.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/timers/dmtimer/Timer.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__* __fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a15.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a15.Mmu INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a15.TimerSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a15.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.exc.Exception INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.gic.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_gic_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_gic_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_gic_Hwi_Module__ ti_sysbios_family_arm_gic_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_gic_Hwi_Object__ {
    const ti_sysbios_family_arm_gic_Hwi_Fxns__* __fxns;
    ti_sysbios_family_arm_gic_Hwi_Type type;
    xdc_UInt priority;
    xdc_UArg arg;
    ti_sysbios_family_arm_gic_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_gic_Hwi_Irp irp;
    __TA_ti_sysbios_family_arm_gic_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_gic_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_gic_Hwi_Object__ obj;
} ti_sysbios_family_arm_gic_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_gic_Hwi___VERS
    #define ti_sysbios_family_arm_gic_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_gic_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__* __fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__* __fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_gic_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_gic_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__* __fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_timers_dmtimer_Timer_Object__ {
    const ti_sysbios_timers_dmtimer_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    xdc_UInt tiocpCfg;
    xdc_UInt tmar;
    xdc_UInt tier;
    xdc_UInt twer;
    xdc_UInt tclr;
    xdc_UInt tsicr;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_Int eventId;
    xdc_UArg arg;
    ti_sysbios_hal_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_hal_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt rollovers;
    xdc_Bool useDefaultEventId;
} ti_sysbios_timers_dmtimer_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_timers_dmtimer_Timer_Object__ obj;
} ti_sysbios_timers_dmtimer_Timer_Object2__;

/* Object */
typedef ti_sysbios_timers_dmtimer_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.vayu.IntXbar INTERNALS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__* __fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem* pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.timers.dmtimer.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_timers_dmtimer_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_timers_dmtimer_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_timers_dmtimer_Timer_Module__ ti_sysbios_timers_dmtimer_Timer_Module__root__V;

/* <-- ti_sysbios_timers_dmtimer_Timer_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_timers_dmtimer_Timer___VERS
    #define ti_sysbios_timers_dmtimer_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_timers_dmtimer_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.SysMin INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.Timestamp INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x802d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x802e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8035, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* base__ */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    ti_sysbios_BIOS_StartFuncPtr startFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.a15.Cache DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a15_Cache_Module_State__ {
    xdc_Bits32 l1dInfo;
    xdc_Bits32 l1pInfo;
    xdc_Bits32 l2Info;
    xdc_SizeT l2WaySize;
} ti_sysbios_family_arm_a15_Cache_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_a15_Cache_Module_State__ ti_sysbios_family_arm_a15_Cache_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.a15.Mmu DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a15_Mmu_Module_State__ {
    __TA_ti_sysbios_family_arm_a15_Mmu_Module_State__tableBuf tableBuf;
} ti_sysbios_family_arm_a15_Mmu_Module_State__;
#ifdef __ICC430__
    #pragma data_alignment=16384
#endif

/* --> ti_sysbios_family_arm_a15_Mmu_Module_State_0_tableBuf__A */
__T1_ti_sysbios_family_arm_a15_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a15_Mmu_Module_State_0_tableBuf__A[4096];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_family_arm_a15_Mmu_Module_State_0_tableBuf__A, "ti.sysbios.family.arm.a15.mmuTableSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_family_arm_a15_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a15_Mmu_Module_State_0_tableBuf__A[4096] __attribute__ ((section("ti.sysbios.family.arm.a15.mmuTableSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_a15_Mmu_Module_State_0_tableBuf__A, 16384);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_family_arm_a15_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a15_Mmu_Module_State_0_tableBuf__A[4096] __attribute__ ((aligned(16384)));
#endif
#endif

/* Module__state__V */
ti_sysbios_family_arm_a15_Mmu_Module_State__ ti_sysbios_family_arm_a15_Mmu_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.a15.TimerSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.a15.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a15_TimestampProvider_Module_State__ {
    xdc_UInt32 upper32Bits;
} ti_sysbios_family_arm_a15_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_a15_TimestampProvider_Module_State__ ti_sysbios_family_arm_a15_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.exc.Exception DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_exc_Exception_Module_State__ {
    xdc_Bool excActive;
    ti_sysbios_family_arm_exc_Exception_ExcContext* excContext;
    xdc_Ptr excStackBuffer;
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excStack excStack;
    xdc_SizeT excStackSize;
} ti_sysbios_family_arm_exc_Exception_Module_State__;
#ifdef __ICC430__
    #pragma data_alignment=4
#endif

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[128];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A, 4);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[128] __attribute__ ((aligned(4)));
#endif
#endif

/* Module__state__V */
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.gic.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_gic_Hwi_Object__ ti_sysbios_family_arm_gic_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_gic_Hwi_Module_State__ {
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__iser iser;
    xdc_UInt spuriousInts;
    xdc_UInt lastSpuriousInt;
    xdc_UInt irp;
    xdc_Char* taskSP;
    xdc_Char* isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__dispatchTable dispatchTable;
    volatile xdc_UInt curIntId;
    ti_sysbios_family_arm_gic_Hwi_Object__ Object_field_nonPluggedHwi;
} ti_sysbios_family_arm_gic_Hwi_Module_State__;

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_gic_Hwi_Module_State_0_dispatchTable__A[192];

/* Module__state__V */
ti_sysbios_family_arm_gic_Hwi_Module_State__ ti_sysbios_family_arm_gic_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Cache DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.vayu.IntXbar DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_hal_vayu_IntXbar_Module_State__ {
    __TA_ti_sysbios_hal_vayu_IntXbar_Module_State__intXbar intXbar;
} ti_sysbios_hal_vayu_IntXbar_Module_State__;

/* --> ti_sysbios_hal_vayu_IntXbar_Module_State_0_intXbar__A */
__T1_ti_sysbios_hal_vayu_IntXbar_Module_State__intXbar ti_sysbios_hal_vayu_IntXbar_Module_State_0_intXbar__A[152];

/* Module__state__V */
ti_sysbios_hal_vayu_IntXbar_Module_State__ ti_sysbios_hal_vayu_IntXbar_Module__state__V;

/* --> ti_sysbios_hal_vayu_IntXbar_intXbar__A */
const __T1_ti_sysbios_hal_vayu_IntXbar_intXbar ti_sysbios_hal_vayu_IntXbar_intXbar__A[152];


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __ICC430__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_hal_Timer_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    xdc_UInt32 periodCounts;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 skipsWorkFunc;
    xdc_Bool inWorkFunc;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __ICC430__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurQ smpCurQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_knl_Task_checkStacks */
extern xdc_Void ti_sysbios_knl_Task_checkStacks(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.timers.dmtimer.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_timers_dmtimer_Timer_Object__ ti_sysbios_timers_dmtimer_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_timers_dmtimer_Timer_Module_State__ {
    xdc_Bits32 availMask;
    xdc_runtime_Types_FreqHz intFreq;
    __TA_ti_sysbios_timers_dmtimer_Timer_Module_State__device device;
    __TA_ti_sysbios_timers_dmtimer_Timer_Module_State__handles handles;
    xdc_Bool firstInit;
} ti_sysbios_timers_dmtimer_Timer_Module_State__;

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__device ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A[2];

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__handles ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A[2];

/* Module__state__V */
ti_sysbios_timers_dmtimer_Timer_Module_State__ ti_sysbios_timers_dmtimer_Timer_Module__state__V;


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[4];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_a15_Mmu_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a15_Mmu_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_a15_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a15_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_gic_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_gic_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_exc_Exception_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_exc_Exception_Module_startup__E(xdc_Int);

/* --> ti_sysbios_timers_dmtimer_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_timers_dmtimer_Timer_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[12];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[12];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_Char**,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5796];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[54];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_family_arm_gic_Hwi_Module_State_nonPluggedHwi__O = offsetof(ti_sysbios_family_arm_gic_Hwi_Module_State__, Object_field_nonPluggedHwi);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /db/vtree/library/trees/avala/avala-r22x/src/ti/sysbios/package/cfg/instrumented_pa15g");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7A15");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.simVayu");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = gnu.targets.arm.A15");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_a15_Mmu_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_family_arm_gic_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}
xdc_Bool ti_sysbios_timers_dmtimer_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[12];
    xdc_runtime_Startup_startModsFxn__C(state, 12);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, Char **pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    Char    *fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->ptr, pva, parse->aFlag);
            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int HOSTwrite(int, const char *, unsigned);
#elif defined(__ICC430__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
Void xdc_runtime_SysMin_output__I(Char *buf, UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__ICC430__)
    Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[6];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_exitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_exitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_hal_Timer_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_exitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
#endif
}



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__ICC430__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#if !defined(__ICC430__)
#include <stdlib.h>
#endif

#include <string.h>

/* malloc header */
typedef struct Header {
    Ptr   actualBuf;
    UArg  size;
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->actualBuf = (Ptr)packet;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    /*
     * If alignment is not a power of two or is less than the minimum
     * alignment of malloc(), then simply return what malloc() returns.
     * (same as behaviour as RTS library's memalign())
     * Note: HeapMem's header is the same as this header after it is raised
     * to a power of 2.
     */
    if (alignment <= sizeof(Header) || (alignment & (alignment-1))) {
        return malloc(size);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size,
        (SizeT)alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->actualBuf = tmp;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->actualBuf,
            (packet->size + ((char*)packet - (char*)packet->actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}


/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */




/*
 * ======== ti.sysbios.hal.Hwi TEMPLATE ========
 */

#ifdef __ti__
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_disable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_enable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_restore__E);
#endif

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);

    }
}

/*
 * ======== ti.sysbios.family.arm.a15.Mmu TEMPLATE ========
 */



#include <ti/sysbios/family/arm/a15/Mmu.h>

Void ti_sysbios_family_arm_a15_Mmu_initTableBuf__I(UInt32 *mmuTableBuf)
{
          asm (" push {r1-r2}                                             \n\t");
          asm (" movw r1, #0x402                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x4020\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x480                               \n\t");
          asm (" movw r2, #0xe12        \n\t");
          asm (" movt r2, #0x4800\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x482                               \n\t");
          asm (" movw r2, #0xe12        \n\t");
          asm (" movt r2, #0x4820\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x800                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8000\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x801                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8010\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x802                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8020\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x803                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8030\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x804                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8040\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x805                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8050\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x806                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8060\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x807                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8070\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x808                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8080\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x809                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8090\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x80a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x80a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x80b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x80b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x80c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x80c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x80d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x80d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x80e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x80e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x80f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x80f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x810                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8100\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x811                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8110\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x812                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8120\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x813                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8130\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x814                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8140\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x815                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8150\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x816                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8160\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x817                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8170\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x818                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8180\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x819                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8190\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x81a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x81a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x81b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x81b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x81c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x81c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x81d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x81d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x81e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x81e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x81f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x81f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x820                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8200\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x821                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8210\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x822                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8220\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x823                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8230\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x824                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8240\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x825                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8250\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x826                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8260\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x827                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8270\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x828                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8280\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x829                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8290\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x82a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x82a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x82b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x82b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x82c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x82c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x82d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x82d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x82e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x82e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x82f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x82f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x830                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8300\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x831                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8310\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x832                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8320\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x833                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8330\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x834                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8340\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x835                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8350\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x836                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8360\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x837                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8370\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x838                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8380\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x839                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8390\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x83a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x83a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x83b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x83b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x83c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x83c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x83d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x83d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x83e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x83e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x83f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x83f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x840                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8400\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x841                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8410\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x842                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8420\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x843                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8430\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x844                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8440\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x845                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8450\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x846                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8460\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x847                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8470\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x848                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8480\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x849                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8490\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x84a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x84a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x84b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x84b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x84c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x84c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x84d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x84d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x84e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x84e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x84f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x84f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x850                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8500\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x851                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8510\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x852                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8520\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x853                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8530\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x854                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8540\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x855                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8550\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x856                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8560\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x857                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8570\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x858                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8580\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x859                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8590\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x85a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x85a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x85b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x85b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x85c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x85c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x85d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x85d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x85e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x85e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x85f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x85f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x860                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8600\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x861                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8610\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x862                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8620\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x863                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8630\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x864                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8640\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x865                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8650\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x866                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8660\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x867                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8670\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x868                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8680\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x869                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8690\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x86a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x86a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x86b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x86b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x86c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x86c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x86d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x86d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x86e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x86e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x86f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x86f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x870                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8700\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x871                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8710\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x872                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8720\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x873                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8730\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x874                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8740\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x875                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8750\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x876                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8760\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x877                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8770\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x878                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8780\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x879                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8790\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x87a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x87a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x87b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x87b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x87c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x87c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x87d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x87d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x87e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x87e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x87f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x87f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x880                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8800\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x881                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8810\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x882                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8820\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x883                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8830\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x884                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8840\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x885                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8850\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x886                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8860\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x887                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8870\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x888                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8880\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x889                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8890\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x88a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x88a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x88b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x88b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x88c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x88c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x88d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x88d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x88e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x88e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x88f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x88f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x890                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8900\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x891                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8910\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x892                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8920\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x893                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8930\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x894                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8940\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x895                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8950\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x896                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8960\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x897                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8970\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x898                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8980\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x899                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8990\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x89a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x89a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x89b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x89b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x89c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x89c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x89d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x89d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x89e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x89e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x89f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x89f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8a0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8a00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8a1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8a10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8a2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8a20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8a3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8a30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8a4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8a40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8a5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8a50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8a6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8a60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8a7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8a70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8a8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8a80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8a9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8a90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8aa                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8aa0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ab                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ab0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ac                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ac0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ad                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ad0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ae                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ae0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8af                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8af0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8b0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8b00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8b1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8b10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8b2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8b20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8b3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8b30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8b4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8b40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8b5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8b50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8b6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8b60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8b7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8b70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8b8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8b80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8b9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8b90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ba                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ba0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8bb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8bb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8bc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8bc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8bd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8bd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8be                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8be0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8bf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8bf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8c0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8c00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8c1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8c10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8c2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8c20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8c3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8c30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8c4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8c40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8c5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8c50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8c6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8c60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8c7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8c70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8c8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8c80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8c9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8c90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ca                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ca0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8cb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8cb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8cc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8cc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8cd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8cd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ce                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ce0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8cf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8cf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8d0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8d00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8d1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8d10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8d2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8d20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8d3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8d30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8d4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8d40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8d5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8d50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8d6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8d60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8d7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8d70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8d8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8d80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8d9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8d90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8da                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8da0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8db                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8db0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8dc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8dc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8dd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8dd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8de                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8de0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8df                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8df0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8e0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8e00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8e1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8e10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8e2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8e20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8e3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8e30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8e4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8e40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8e5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8e50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8e6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8e60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8e7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8e70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8e8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8e80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8e9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8e90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ea                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ea0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8eb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8eb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ec                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ec0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ed                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ed0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ee                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ee0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ef                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ef0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8f0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8f00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8f1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8f10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8f2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8f20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8f3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8f30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8f4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8f40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8f5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8f50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8f6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8f60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8f7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8f70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8f8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8f80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8f9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8f90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8fa                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8fa0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8fb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8fb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8fc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8fc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8fd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8fd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8fe                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8fe0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x8ff                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x8ff0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x900                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9000\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x901                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9010\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x902                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9020\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x903                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9030\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x904                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9040\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x905                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9050\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x906                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9060\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x907                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9070\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x908                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9080\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x909                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9090\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x90a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x90a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x90b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x90b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x90c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x90c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x90d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x90d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x90e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x90e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x90f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x90f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x910                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9100\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x911                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9110\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x912                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9120\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x913                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9130\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x914                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9140\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x915                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9150\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x916                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9160\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x917                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9170\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x918                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9180\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x919                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9190\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x91a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x91a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x91b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x91b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x91c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x91c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x91d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x91d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x91e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x91e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x91f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x91f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x920                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9200\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x921                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9210\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x922                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9220\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x923                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9230\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x924                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9240\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x925                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9250\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x926                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9260\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x927                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9270\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x928                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9280\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x929                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9290\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x92a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x92a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x92b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x92b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x92c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x92c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x92d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x92d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x92e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x92e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x92f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x92f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x930                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9300\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x931                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9310\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x932                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9320\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x933                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9330\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x934                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9340\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x935                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9350\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x936                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9360\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x937                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9370\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x938                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9380\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x939                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9390\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x93a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x93a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x93b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x93b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x93c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x93c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x93d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x93d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x93e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x93e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x93f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x93f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x940                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9400\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x941                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9410\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x942                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9420\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x943                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9430\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x944                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9440\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x945                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9450\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x946                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9460\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x947                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9470\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x948                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9480\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x949                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9490\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x94a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x94a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x94b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x94b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x94c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x94c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x94d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x94d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x94e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x94e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x94f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x94f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x950                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9500\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x951                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9510\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x952                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9520\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x953                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9530\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x954                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9540\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x955                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9550\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x956                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9560\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x957                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9570\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x958                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9580\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x959                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9590\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x95a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x95a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x95b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x95b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x95c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x95c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x95d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x95d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x95e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x95e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x95f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x95f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x960                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9600\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x961                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9610\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x962                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9620\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x963                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9630\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x964                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9640\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x965                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9650\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x966                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9660\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x967                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9670\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x968                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9680\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x969                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9690\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x96a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x96a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x96b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x96b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x96c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x96c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x96d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x96d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x96e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x96e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x96f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x96f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x970                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9700\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x971                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9710\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x972                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9720\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x973                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9730\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x974                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9740\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x975                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9750\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x976                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9760\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x977                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9770\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x978                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9780\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x979                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9790\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x97a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x97a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x97b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x97b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x97c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x97c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x97d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x97d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x97e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x97e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x97f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x97f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x980                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9800\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x981                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9810\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x982                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9820\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x983                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9830\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x984                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9840\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x985                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9850\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x986                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9860\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x987                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9870\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x988                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9880\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x989                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9890\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x98a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x98a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x98b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x98b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x98c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x98c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x98d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x98d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x98e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x98e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x98f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x98f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x990                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9900\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x991                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9910\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x992                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9920\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x993                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9930\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x994                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9940\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x995                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9950\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x996                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9960\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x997                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9970\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x998                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9980\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x999                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9990\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x99a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x99a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x99b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x99b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x99c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x99c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x99d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x99d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x99e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x99e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x99f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x99f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9a0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9a00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9a1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9a10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9a2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9a20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9a3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9a30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9a4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9a40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9a5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9a50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9a6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9a60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9a7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9a70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9a8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9a80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9a9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9a90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9aa                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9aa0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ab                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ab0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ac                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ac0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ad                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ad0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ae                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ae0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9af                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9af0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9b0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9b00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9b1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9b10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9b2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9b20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9b3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9b30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9b4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9b40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9b5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9b50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9b6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9b60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9b7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9b70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9b8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9b80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9b9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9b90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ba                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ba0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9bb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9bb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9bc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9bc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9bd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9bd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9be                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9be0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9bf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9bf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9c0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9c00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9c1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9c10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9c2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9c20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9c3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9c30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9c4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9c40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9c5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9c50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9c6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9c60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9c7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9c70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9c8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9c80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9c9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9c90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ca                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ca0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9cb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9cb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9cc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9cc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9cd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9cd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ce                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ce0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9cf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9cf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9d0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9d00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9d1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9d10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9d2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9d20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9d3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9d30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9d4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9d40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9d5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9d50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9d6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9d60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9d7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9d70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9d8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9d80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9d9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9d90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9da                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9da0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9db                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9db0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9dc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9dc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9dd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9dd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9de                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9de0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9df                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9df0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9e0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9e00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9e1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9e10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9e2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9e20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9e3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9e30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9e4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9e40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9e5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9e50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9e6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9e60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9e7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9e70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9e8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9e80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9e9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9e90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ea                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ea0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9eb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9eb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ec                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ec0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ed                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ed0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ee                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ee0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ef                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ef0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9f0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9f00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9f1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9f10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9f2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9f20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9f3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9f30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9f4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9f40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9f5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9f50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9f6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9f60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9f7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9f70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9f8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9f80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9f9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9f90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9fa                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9fa0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9fb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9fb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9fc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9fc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9fd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9fd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9fe                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9fe0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0x9ff                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0x9ff0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa00                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa000\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa01                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa010\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa02                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa020\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa03                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa030\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa04                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa040\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa05                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa050\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa06                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa060\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa07                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa070\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa08                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa080\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa09                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa090\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa0a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa0a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa0b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa0b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa0c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa0c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa0d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa0d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa0e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa0e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa0f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa0f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa10                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa100\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa11                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa110\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa12                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa120\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa13                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa130\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa14                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa140\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa15                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa150\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa16                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa160\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa17                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa170\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa18                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa180\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa19                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa190\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa1a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa1a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa1b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa1b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa1c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa1c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa1d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa1d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa1e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa1e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa1f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa1f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa20                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa200\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa21                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa210\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa22                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa220\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa23                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa230\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa24                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa240\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa25                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa250\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa26                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa260\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa27                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa270\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa28                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa280\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa29                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa290\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa2a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa2a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa2b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa2b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa2c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa2c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa2d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa2d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa2e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa2e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa2f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa2f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa30                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa300\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa31                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa310\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa32                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa320\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa33                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa330\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa34                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa340\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa35                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa350\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa36                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa360\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa37                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa370\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa38                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa380\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa39                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa390\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa3a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa3a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa3b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa3b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa3c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa3c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa3d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa3d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa3e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa3e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa3f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa3f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa40                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa400\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa41                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa410\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa42                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa420\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa43                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa430\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa44                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa440\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa45                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa450\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa46                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa460\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa47                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa470\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa48                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa480\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa49                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa490\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa4a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa4a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa4b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa4b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa4c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa4c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa4d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa4d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa4e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa4e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa4f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa4f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa50                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa500\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa51                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa510\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa52                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa520\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa53                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa530\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa54                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa540\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa55                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa550\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa56                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa560\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa57                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa570\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa58                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa580\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa59                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa590\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa5a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa5a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa5b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa5b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa5c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa5c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa5d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa5d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa5e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa5e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa5f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa5f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa60                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa600\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa61                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa610\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa62                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa620\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa63                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa630\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa64                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa640\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa65                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa650\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa66                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa660\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa67                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa670\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa68                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa680\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa69                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa690\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa6a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa6a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa6b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa6b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa6c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa6c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa6d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa6d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa6e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa6e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa6f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa6f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa70                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa700\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa71                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa710\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa72                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa720\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa73                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa730\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa74                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa740\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa75                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa750\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa76                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa760\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa77                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa770\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa78                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa780\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa79                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa790\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa7a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa7a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa7b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa7b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa7c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa7c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa7d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa7d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa7e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa7e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa7f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa7f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa80                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa800\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa81                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa810\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa82                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa820\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa83                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa830\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa84                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa840\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa85                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa850\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa86                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa860\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa87                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa870\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa88                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa880\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa89                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa890\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa8a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa8a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa8b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa8b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa8c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa8c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa8d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa8d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa8e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa8e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa8f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa8f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa90                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa900\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa91                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa910\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa92                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa920\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa93                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa930\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa94                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa940\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa95                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa950\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa96                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa960\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa97                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa970\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa98                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa980\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa99                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa990\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa9a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa9a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa9b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa9b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa9c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa9c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa9d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa9d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa9e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa9e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xa9f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xa9f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc00                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc000\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc01                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc010\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc02                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc020\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc03                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc030\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc04                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc040\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc05                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc050\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc06                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc060\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc07                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc070\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc08                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc080\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc09                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc090\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc0a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc0a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc0b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc0b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc0c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc0c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc0d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc0d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc0e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc0e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc0f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc0f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc10                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc100\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc11                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc110\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc12                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc120\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc13                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc130\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc14                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc140\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc15                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc150\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc16                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc160\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc17                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc170\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc18                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc180\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc19                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc190\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc1a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc1a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc1b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc1b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc1c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc1c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc1d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc1d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc1e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc1e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc1f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc1f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc20                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc200\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc21                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc210\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc22                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc220\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc23                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc230\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc24                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc240\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc25                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc250\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc26                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc260\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc27                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc270\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc28                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc280\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc29                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc290\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc2a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc2a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc2b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc2b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc2c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc2c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc2d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc2d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc2e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc2e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc2f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc2f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc30                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc300\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc31                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc310\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc32                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc320\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc33                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc330\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc34                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc340\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc35                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc350\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc36                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc360\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc37                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc370\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc38                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc380\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc39                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc390\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc3a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc3a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc3b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc3b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc3c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc3c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc3d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc3d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc3e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc3e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc3f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc3f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc40                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc400\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc41                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc410\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc42                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc420\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc43                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc430\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc44                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc440\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc45                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc450\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc46                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc460\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc47                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc470\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc48                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc480\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc49                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc490\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc4a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc4a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc4b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc4b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc4c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc4c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc4d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc4d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc4e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc4e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc4f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc4f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc50                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc500\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc51                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc510\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc52                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc520\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc53                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc530\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc54                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc540\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc55                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc550\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc56                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc560\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc57                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc570\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc58                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc580\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc59                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc590\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc5a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc5a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc5b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc5b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc5c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc5c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc5d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc5d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc5e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc5e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc5f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc5f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc60                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc600\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc61                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc610\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc62                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc620\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc63                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc630\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc64                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc640\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc65                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc650\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc66                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc660\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc67                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc670\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc68                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc680\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc69                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc690\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc6a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc6a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc6b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc6b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc6c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc6c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc6d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc6d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc6e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc6e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc6f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc6f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc70                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc700\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc71                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc710\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc72                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc720\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc73                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc730\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc74                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc740\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc75                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc750\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc76                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc760\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc77                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc770\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc78                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc780\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc79                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc790\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc7a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc7a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc7b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc7b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc7c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc7c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc7d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc7d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc7e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc7e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc7f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc7f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc80                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc800\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc81                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc810\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc82                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc820\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc83                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc830\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc84                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc840\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc85                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc850\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc86                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc860\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc87                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc870\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc88                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc880\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc89                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc890\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc8a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc8a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc8b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc8b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc8c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc8c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc8d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc8d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc8e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc8e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc8f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc8f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc90                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc900\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc91                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc910\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc92                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc920\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc93                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc930\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc94                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc940\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc95                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc950\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc96                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc960\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc97                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc970\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc98                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc980\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc99                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc990\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc9a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc9a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc9b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc9b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc9c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc9c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc9d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc9d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc9e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc9e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xc9f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xc9f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xca0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xca00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xca1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xca10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xca2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xca20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xca3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xca30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xca4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xca40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xca5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xca50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xca6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xca60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xca7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xca70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xca8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xca80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xca9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xca90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcaa                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcaa0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcab                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcab0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcac                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcac0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcad                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcad0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcae                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcae0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcaf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcaf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcb0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcb00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcb1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcb10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcb2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcb20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcb3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcb30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcb4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcb40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcb5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcb50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcb6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcb60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcb7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcb70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcb8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcb80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcb9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcb90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcba                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcba0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcbb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcbb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcbc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcbc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcbd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcbd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcbe                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcbe0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcbf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcbf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcc0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcc00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcc1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcc10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcc2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcc20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcc3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcc30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcc4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcc40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcc5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcc50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcc6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcc60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcc7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcc70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcc8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcc80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcc9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcc90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcca                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcca0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xccb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xccb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xccc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xccc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xccd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xccd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcce                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcce0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xccf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xccf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcd0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcd00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcd1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcd10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcd2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcd20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcd3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcd30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcd4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcd40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcd5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcd50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcd6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcd60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcd7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcd70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcd8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcd80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcd9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcd90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcda                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcda0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcdb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcdb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcdc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcdc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcdd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcdd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcde                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcde0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcdf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcdf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xce0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xce00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xce1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xce10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xce2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xce20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xce3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xce30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xce4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xce40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xce5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xce50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xce6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xce60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xce7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xce70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xce8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xce80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xce9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xce90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcea                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcea0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xceb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xceb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcec                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcec0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xced                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xced0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcee                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcee0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcef                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcef0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcf0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcf00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcf1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcf10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcf2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcf20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcf3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcf30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcf4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcf40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcf5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcf50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcf6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcf60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcf7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcf70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcf8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcf80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcf9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcf90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcfa                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcfa0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcfb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcfb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcfc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcfc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcfd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcfd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcfe                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcfe0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xcff                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xcff0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd00                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd000\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd01                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd010\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd02                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd020\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd03                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd030\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd04                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd040\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd05                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd050\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd06                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd060\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd07                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd070\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd08                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd080\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd09                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd090\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd0a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd0a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd0b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd0b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd0c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd0c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd0d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd0d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd0e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd0e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd0f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd0f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd10                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd100\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd11                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd110\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd12                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd120\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd13                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd130\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd14                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd140\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd15                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd150\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd16                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd160\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd17                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd170\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd18                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd180\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd19                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd190\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd1a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd1a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd1b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd1b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd1c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd1c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd1d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd1d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd1e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd1e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd1f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd1f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd20                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd200\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd21                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd210\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd22                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd220\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd23                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd230\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd24                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd240\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd25                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd250\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd26                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd260\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd27                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd270\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd28                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd280\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd29                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd290\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd2a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd2a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd2b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd2b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd2c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd2c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd2d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd2d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd2e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd2e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd2f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd2f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd30                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd300\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd31                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd310\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd32                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd320\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd33                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd330\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd34                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd340\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd35                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd350\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd36                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd360\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd37                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd370\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd38                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd380\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd39                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd390\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd3a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd3a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd3b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd3b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd3c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd3c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd3d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd3d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd3e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd3e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd3f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd3f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd40                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd400\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd41                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd410\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd42                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd420\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd43                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd430\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd44                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd440\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd45                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd450\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd46                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd460\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd47                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd470\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd48                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd480\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd49                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd490\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd4a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd4a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd4b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd4b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd4c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd4c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd4d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd4d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd4e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd4e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd4f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd4f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd50                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd500\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd51                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd510\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd52                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd520\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd53                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd530\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd54                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd540\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd55                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd550\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd56                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd560\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd57                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd570\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd58                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd580\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd59                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd590\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd5a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd5a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd5b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd5b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd5c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd5c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd5d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd5d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd5e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd5e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd5f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd5f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd60                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd600\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd61                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd610\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd62                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd620\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd63                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd630\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd64                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd640\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd65                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd650\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd66                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd660\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd67                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd670\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd68                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd680\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd69                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd690\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd6a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd6a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd6b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd6b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd6c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd6c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd6d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd6d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd6e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd6e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd6f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd6f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd70                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd700\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd71                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd710\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd72                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd720\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd73                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd730\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd74                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd740\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd75                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd750\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd76                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd760\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd77                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd770\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd78                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd780\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd79                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd790\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd7a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd7a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd7b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd7b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd7c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd7c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd7d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd7d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd7e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd7e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd7f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd7f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd80                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd800\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd81                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd810\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd82                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd820\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd83                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd830\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd84                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd840\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd85                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd850\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd86                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd860\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd87                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd870\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd88                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd880\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd89                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd890\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd8a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd8a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd8b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd8b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd8c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd8c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd8d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd8d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd8e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd8e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd8f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd8f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd90                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd900\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd91                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd910\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd92                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd920\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd93                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd930\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd94                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd940\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd95                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd950\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd96                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd960\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd97                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd970\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd98                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd980\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd99                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd990\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd9a                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd9a0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd9b                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd9b0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd9c                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd9c0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd9d                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd9d0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd9e                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd9e0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xd9f                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xd9f0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xda0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xda00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xda1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xda10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xda2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xda20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xda3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xda30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xda4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xda40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xda5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xda50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xda6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xda60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xda7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xda70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xda8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xda80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xda9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xda90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdaa                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdaa0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdab                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdab0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdac                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdac0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdad                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdad0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdae                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdae0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdaf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdaf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdb0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdb00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdb1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdb10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdb2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdb20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdb3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdb30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdb4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdb40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdb5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdb50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdb6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdb60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdb7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdb70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdb8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdb80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdb9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdb90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdba                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdba0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdbb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdbb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdbc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdbc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdbd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdbd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdbe                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdbe0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdbf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdbf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdc0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdc00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdc1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdc10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdc2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdc20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdc3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdc30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdc4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdc40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdc5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdc50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdc6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdc60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdc7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdc70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdc8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdc80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdc9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdc90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdca                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdca0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdcb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdcb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdcc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdcc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdcd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdcd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdce                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdce0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdcf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdcf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdd0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdd00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdd1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdd10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdd2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdd20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdd3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdd30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdd4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdd40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdd5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdd50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdd6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdd60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdd7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdd70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdd8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdd80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdd9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdd90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdda                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdda0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xddb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xddb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xddc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xddc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xddd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xddd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdde                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdde0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xddf                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xddf0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xde0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xde00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xde1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xde10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xde2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xde20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xde3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xde30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xde4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xde40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xde5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xde50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xde6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xde60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xde7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xde70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xde8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xde80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xde9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xde90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdea                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdea0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdeb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdeb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdec                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdec0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xded                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xded0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdee                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdee0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdef                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdef0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdf0                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdf00\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdf1                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdf10\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdf2                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdf20\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdf3                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdf30\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdf4                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdf40\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdf5                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdf50\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdf6                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdf60\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdf7                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdf70\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdf8                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdf80\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdf9                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdf90\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdfa                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdfa0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdfb                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdfb0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdfc                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdfc0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdfd                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdfd0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdfe                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdfe0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" movw r1, #0xdff                               \n\t");
          asm (" movw r2, #0xe0e        \n\t");
          asm (" movt r2, #0xdff0\n\t");
          asm (" str  r2, [r0, r1, lsl #2]                                \n\t");
          asm (" pop {r1-r2}                                              \n\t");
}

/*
 * ======== ti.sysbios.family.arm.gic.Hwi TEMPLATE ========
 */


extern Void _c_int00();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerDataAsm__I();
extern Void ti_sysbios_family_arm_gic_Hwi_dispatch__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();

const UInt32 ti_sysbios_family_arm_gic_Hwi_vectors[] __attribute__ ((section (".vecs"), aligned (0x400))) = {
    (UInt32)(0xE59FF018),       /*   ldr  pc, resetFunc         */
    (UInt32)(0xE59FF018),       /*   ldr  pc, undefInstFunc     */
    (UInt32)(0xE59FF018),       /*   ldr  pc, svcFunc           */
    (UInt32)(0xE59FF018),       /*   ldr  pc, prefetchAbortFunc */
    (UInt32)(0xE59FF018),       /*   ldr  pc, dataAbortFunc     */
    (UInt32)(0xE59FF018),       /*   ldr  pc, reservedFunc      */
    (UInt32)(0xE59FF018),       /*   ldr  pc, irqFunc           */
    (UInt32)(0xE59FF018),       /*   ldr  pc, fiqFunc           */

/* resetFunc */
    (UInt32)(&_c_int00),    /* _c_int00 */ 

/* undefInstFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* svcFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* prefetchAbortFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* dataAbortFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerDataAsm__I),

/* reservedFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* irqFunc */
    (UInt32)(&ti_sysbios_family_arm_gic_Hwi_dispatch__I),

/* fiqFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I)
};


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x2faf0800,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x2faf0800,  /* lo */
};

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__id ti_sysbios_family_arm_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__count ti_sysbios_family_arm_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__table ti_sysbios_family_arm_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsMask ti_sysbios_family_arm_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__gateObj ti_sysbios_family_arm_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__gatePrms ti_sysbios_family_arm_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__id ti_sysbios_family_arm_TaskSupport_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerObj ti_sysbios_family_arm_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__count ti_sysbios_family_arm_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__heap ti_sysbios_family_arm_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__sizeof ti_sysbios_family_arm_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__table ti_sysbios_family_arm_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_defaultStackSize ti_sysbios_family_arm_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_stackAlignment ti_sysbios_family_arm_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.arm.a15.Cache INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_arm_a15_Cache_Module_State__ ti_sysbios_family_arm_a15_Cache_Module__state__V = {
    (xdc_Bits32)0x0,  /* l1dInfo */
    (xdc_Bits32)0x0,  /* l1pInfo */
    (xdc_Bits32)0x0,  /* l2Info */
    (xdc_SizeT)0x0,  /* l2WaySize */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__diagsEnabled ti_sysbios_family_arm_a15_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__diagsIncluded ti_sysbios_family_arm_a15_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__diagsMask ti_sysbios_family_arm_a15_Cache_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a15_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__gateObj ti_sysbios_family_arm_a15_Cache_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a15_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__gatePrms ti_sysbios_family_arm_a15_Cache_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a15_Cache_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__id ti_sysbios_family_arm_a15_Cache_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__loggerDefined ti_sysbios_family_arm_a15_Cache_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__loggerObj ti_sysbios_family_arm_a15_Cache_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a15_Cache_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__loggerFxn0 ti_sysbios_family_arm_a15_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a15_Cache_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__loggerFxn1 ti_sysbios_family_arm_a15_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a15_Cache_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__loggerFxn2 ti_sysbios_family_arm_a15_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a15_Cache_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__loggerFxn4 ti_sysbios_family_arm_a15_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a15_Cache_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__loggerFxn8 ti_sysbios_family_arm_a15_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a15_Cache_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Module__startupDoneFxn ti_sysbios_family_arm_a15_Cache_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a15_Cache_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Object__count ti_sysbios_family_arm_a15_Cache_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Object__heap ti_sysbios_family_arm_a15_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Object__sizeof ti_sysbios_family_arm_a15_Cache_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_Object__table ti_sysbios_family_arm_a15_Cache_Object__table__C = 0;

/* A_badBlockLength__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_A_badBlockLength ti_sysbios_family_arm_a15_Cache_A_badBlockLength__C = (((xdc_runtime_Assert_Id)1394) << 16 | 16);

/* A_blockCrossesPage__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_A_blockCrossesPage ti_sysbios_family_arm_a15_Cache_A_blockCrossesPage__C = (((xdc_runtime_Assert_Id)1460) << 16 | 16);

/* enableCache__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_enableCache ti_sysbios_family_arm_a15_Cache_enableCache__C = 1;

/* branchPredictionEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Cache_branchPredictionEnabled ti_sysbios_family_arm_a15_Cache_branchPredictionEnabled__C = 1;


/*
 * ======== ti.sysbios.family.arm.a15.Mmu INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_a15_Mmu_Module_State_0_tableBuf__A */
__T1_ti_sysbios_family_arm_a15_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a15_Mmu_Module_State_0_tableBuf__A[4096];

/* Module__state__V */
ti_sysbios_family_arm_a15_Mmu_Module_State__ ti_sysbios_family_arm_a15_Mmu_Module__state__V = {
    ((void*)ti_sysbios_family_arm_a15_Mmu_Module_State_0_tableBuf__A),  /* tableBuf */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__diagsEnabled ti_sysbios_family_arm_a15_Mmu_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__diagsIncluded ti_sysbios_family_arm_a15_Mmu_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__diagsMask ti_sysbios_family_arm_a15_Mmu_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a15_Mmu_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__gateObj ti_sysbios_family_arm_a15_Mmu_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a15_Mmu_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__gatePrms ti_sysbios_family_arm_a15_Mmu_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a15_Mmu_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__id ti_sysbios_family_arm_a15_Mmu_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerDefined ti_sysbios_family_arm_a15_Mmu_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerObj ti_sysbios_family_arm_a15_Mmu_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn0 ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn1 ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn2 ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn4 ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn8 ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a15_Mmu_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Module__startupDoneFxn ti_sysbios_family_arm_a15_Mmu_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a15_Mmu_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Object__count ti_sysbios_family_arm_a15_Mmu_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Object__heap ti_sysbios_family_arm_a15_Mmu_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Object__sizeof ti_sysbios_family_arm_a15_Mmu_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_Object__table ti_sysbios_family_arm_a15_Mmu_Object__table__C = 0;

/* A_nullPointer__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_A_nullPointer ti_sysbios_family_arm_a15_Mmu_A_nullPointer__C = (((xdc_runtime_Assert_Id)1523) << 16 | 16);

/* A_unknownDescType__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_A_unknownDescType ti_sysbios_family_arm_a15_Mmu_A_unknownDescType__C = (((xdc_runtime_Assert_Id)1554) << 16 | 16);

/* defaultAttrs__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_defaultAttrs ti_sysbios_family_arm_a15_Mmu_defaultAttrs__C = {
    ti_sysbios_family_arm_a15_Mmu_FirstLevelDesc_SECTION,  /* type */
    (xdc_UInt8)0x0,  /* tex */
    0,  /* bufferable */
    0,  /* cacheable */
    0,  /* shareable */
    0,  /* noexecute */
    (xdc_UInt8)0x1,  /* imp */
    (xdc_UInt8)0x0,  /* domain */
    (xdc_UInt8)0x3,  /* accPerm */
};

/* enableMMU__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_Mmu_enableMMU ti_sysbios_family_arm_a15_Mmu_enableMMU__C = 1;


/*
 * ======== ti.sysbios.family.arm.a15.TimerSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__diagsEnabled ti_sysbios_family_arm_a15_TimerSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__diagsIncluded ti_sysbios_family_arm_a15_TimerSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__diagsMask ti_sysbios_family_arm_a15_TimerSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a15_TimerSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__gateObj ti_sysbios_family_arm_a15_TimerSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a15_TimerSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__gatePrms ti_sysbios_family_arm_a15_TimerSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a15_TimerSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__id ti_sysbios_family_arm_a15_TimerSupport_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerDefined ti_sysbios_family_arm_a15_TimerSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerObj ti_sysbios_family_arm_a15_TimerSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn0 ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn1 ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn2 ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn4 ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn8 ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a15_TimerSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Module__startupDoneFxn ti_sysbios_family_arm_a15_TimerSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a15_TimerSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Object__count ti_sysbios_family_arm_a15_TimerSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Object__heap ti_sysbios_family_arm_a15_TimerSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Object__sizeof ti_sysbios_family_arm_a15_TimerSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimerSupport_Object__table ti_sysbios_family_arm_a15_TimerSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.a15.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_arm_a15_TimestampProvider_Module_State__ ti_sysbios_family_arm_a15_TimestampProvider_Module__state__V = {
    (xdc_UInt32)0x0,  /* upper32Bits */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__gateObj ti_sysbios_family_arm_a15_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_a15_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__id ti_sysbios_family_arm_a15_TimestampProvider_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Object__count ti_sysbios_family_arm_a15_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Object__heap ti_sysbios_family_arm_a15_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Object__sizeof ti_sysbios_family_arm_a15_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Object__table ti_sysbios_family_arm_a15_TimestampProvider_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.exc.Exception INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[128];

/* Module__state__V */
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V = {
    0,  /* excActive */
    ((ti_sysbios_family_arm_exc_Exception_ExcContext*)0),  /* excContext */
    ((xdc_Ptr)0),  /* excStackBuffer */
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A),  /* excStack */
    (xdc_SizeT)0x80,  /* excStackSize */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsMask ti_sysbios_family_arm_exc_Exception_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__gateObj ti_sysbios_family_arm_exc_Exception_Module__gateObj__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__gatePrms ti_sysbios_family_arm_exc_Exception_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__id ti_sysbios_family_arm_exc_Exception_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerDefined ti_sysbios_family_arm_exc_Exception_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerObj ti_sysbios_family_arm_exc_Exception_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__count ti_sysbios_family_arm_exc_Exception_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__heap ti_sysbios_family_arm_exc_Exception_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__sizeof ti_sysbios_family_arm_exc_Exception_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__table ti_sysbios_family_arm_exc_Exception_Object__table__C = 0;

/* E_swi__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_swi ti_sysbios_family_arm_exc_Exception_E_swi__C = (((xdc_runtime_Error_Id)3754) << 16 | 0);

/* E_prefetchAbort__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_prefetchAbort ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C = (((xdc_runtime_Error_Id)3787) << 16 | 0);

/* E_dataAbort__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_dataAbort ti_sysbios_family_arm_exc_Exception_E_dataAbort__C = (((xdc_runtime_Error_Id)3830) << 16 | 0);

/* E_undefinedInstruction__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C = (((xdc_runtime_Error_Id)3869) << 16 | 0);

/* enableDecode__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_enableDecode ti_sysbios_family_arm_exc_Exception_enableDecode__C = 1;

/* excStack__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_excStack ti_sysbios_family_arm_exc_Exception_excStack__C = ((CT__ti_sysbios_family_arm_exc_Exception_excStack)0);

/* excHookFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_excHookFunc ti_sysbios_family_arm_exc_Exception_excHookFunc__C = ((CT__ti_sysbios_family_arm_exc_Exception_excHookFunc)0);


/*
 * ======== ti.sysbios.family.arm.gic.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_gic_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_gic_Hwi_Params ti_sysbios_family_arm_gic_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_gic_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_gic_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    ti_sysbios_family_arm_gic_Hwi_Type_IRQ,  /* type */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_gic_Hwi_Module__ ti_sysbios_family_arm_gic_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_gic_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_gic_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_gic_Hwi_Object__ ti_sysbios_family_arm_gic_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        ti_sysbios_family_arm_gic_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0xe0,  /* priority */
        ((xdc_UArg)((void*)(ti_sysbios_timers_dmtimer_Timer_Handle)&ti_sysbios_timers_dmtimer_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_stub__E)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_gic_Hwi_Module_State_0_dispatchTable__A[192] = {
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [0] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [1] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [2] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [3] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [4] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [5] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [6] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [7] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [8] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [9] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [10] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [11] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [12] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [13] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [14] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [15] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [16] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [17] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [18] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [19] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [20] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [21] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [22] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [23] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [24] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [25] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [26] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [27] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [28] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [29] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [30] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [31] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [32] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [33] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [34] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [35] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [36] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [37] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [38] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [39] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [40] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [41] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [42] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [43] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [44] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [45] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [46] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [47] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [48] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [49] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [50] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [51] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [52] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [53] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [54] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [55] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [56] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [57] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [58] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [59] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [60] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [61] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [62] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [63] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [64] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [65] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [66] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [67] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [68] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [69] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Object__table__V[0],  /* [70] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [71] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [72] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [73] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [74] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [75] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [76] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [77] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [78] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [79] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [80] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [81] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [82] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [83] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [84] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [85] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [86] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [87] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [88] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [89] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [90] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [91] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [92] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [93] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [94] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [95] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [96] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [97] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [98] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [99] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [100] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [101] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [102] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [103] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [104] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [105] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [106] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [107] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [108] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [109] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [110] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [111] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [112] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [113] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [114] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [115] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [116] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [117] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [118] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [119] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [120] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [121] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [122] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [123] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [124] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [125] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [126] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [127] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [128] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [129] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [130] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [131] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [132] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [133] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [134] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [135] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [136] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [137] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [138] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [139] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [140] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [141] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [142] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [143] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [144] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [145] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [146] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [147] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [148] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [149] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [150] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [151] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [152] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [153] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [154] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [155] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [156] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [157] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [158] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [159] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [160] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [161] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [162] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [163] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [164] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [165] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [166] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [167] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [168] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [169] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [170] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [171] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [172] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [173] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [174] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [175] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [176] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [177] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [178] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [179] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [180] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [181] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [182] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [183] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [184] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [185] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [186] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [187] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [188] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [189] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [190] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [191] */
};

/* Module__state__V */
ti_sysbios_family_arm_gic_Hwi_Module_State__ ti_sysbios_family_arm_gic_Hwi_Module__state__V = {
    {
        (xdc_UInt32)0x1,  /* [0] */
        (xdc_UInt32)0x0,  /* [1] */
        (xdc_UInt32)0x40,  /* [2] */
        (xdc_UInt32)0x0,  /* [3] */
        (xdc_UInt32)0x0,  /* [4] */
        (xdc_UInt32)0x0,  /* [5] */
        (xdc_UInt32)0x0,  /* [6] */
        (xdc_UInt32)0x0,  /* [7] */
        (xdc_UInt32)0x0,  /* [8] */
        (xdc_UInt32)0x0,  /* [9] */
        (xdc_UInt32)0x0,  /* [10] */
        (xdc_UInt32)0x0,  /* [11] */
        (xdc_UInt32)0x0,  /* [12] */
        (xdc_UInt32)0x0,  /* [13] */
        (xdc_UInt32)0x0,  /* [14] */
        (xdc_UInt32)0x0,  /* [15] */
        (xdc_UInt32)0x0,  /* [16] */
        (xdc_UInt32)0x0,  /* [17] */
        (xdc_UInt32)0x0,  /* [18] */
        (xdc_UInt32)0x0,  /* [19] */
        (xdc_UInt32)0x0,  /* [20] */
        (xdc_UInt32)0x0,  /* [21] */
        (xdc_UInt32)0x0,  /* [22] */
        (xdc_UInt32)0x0,  /* [23] */
        (xdc_UInt32)0x0,  /* [24] */
        (xdc_UInt32)0x0,  /* [25] */
        (xdc_UInt32)0x0,  /* [26] */
        (xdc_UInt32)0x0,  /* [27] */
        (xdc_UInt32)0x0,  /* [28] */
        (xdc_UInt32)0x0,  /* [29] */
        (xdc_UInt32)0x0,  /* [30] */
        (xdc_UInt32)0x0,  /* [31] */
    },  /* iser */
    (xdc_UInt)0x0,  /* spuriousInts */
    (xdc_UInt)0x0,  /* lastSpuriousInt */
    (xdc_UInt)0x0,  /* irp */
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
    ((void*)ti_sysbios_family_arm_gic_Hwi_Module_State_0_dispatchTable__A),  /* dispatchTable */
    (xdc_UInt)(-0x0 - 1),  /* curIntId */
    {
        0,
        ti_sysbios_family_arm_gic_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0xe0,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_gic_Hwi_nonPluggedHwiHandler__I)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },  /* Object_field_nonPluggedHwi */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsEnabled ti_sysbios_family_arm_gic_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsIncluded ti_sysbios_family_arm_gic_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsMask ti_sysbios_family_arm_gic_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__gateObj ti_sysbios_family_arm_gic_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_gic_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__gatePrms ti_sysbios_family_arm_gic_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_gic_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__id ti_sysbios_family_arm_gic_Hwi_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerDefined ti_sysbios_family_arm_gic_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerObj ti_sysbios_family_arm_gic_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_gic_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_gic_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__count ti_sysbios_family_arm_gic_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__heap ti_sysbios_family_arm_gic_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__sizeof ti_sysbios_family_arm_gic_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_gic_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__table ti_sysbios_family_arm_gic_Hwi_Object__table__C = ti_sysbios_family_arm_gic_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS__C = (xdc_UInt)0xc0;

/* NUM_PRIORITY_BITS__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS__C = (xdc_UInt)0x4;

/* MIN_INT_PRIORITY__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY__C = (xdc_UInt)0xf0;

/* DEFAULT_INT_PRIORITY__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY__C = (xdc_UInt)0xe0;

/* BPR__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_BPR ti_sysbios_family_arm_gic_Hwi_BPR__C = (xdc_UInt)0x3;

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_alreadyDefined ti_sysbios_family_arm_gic_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3580) << 16 | 0);

/* E_handleNotFound__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_handleNotFound ti_sysbios_family_arm_gic_Hwi_E_handleNotFound__C = (((xdc_runtime_Error_Id)3630) << 16 | 0);

/* E_undefined__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_undefined ti_sysbios_family_arm_gic_Hwi_E_undefined__C = (((xdc_runtime_Error_Id)3675) << 16 | 0);

/* E_badIntNum__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_badIntNum ti_sysbios_family_arm_gic_Hwi_E_badIntNum__C = (((xdc_runtime_Error_Id)3714) << 16 | 0);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_LM_begin ti_sysbios_family_arm_gic_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)5300) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_LD_end ti_sysbios_family_arm_gic_Hwi_LD_end__C = (((xdc_runtime_Log_Event)5370) << 16 | 512);

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_swiDisable ti_sysbios_family_arm_gic_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_gic_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_taskDisable ti_sysbios_family_arm_gic_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_gic_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_hooks ti_sysbios_family_arm_gic_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)1968) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Cache INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsEnabled ti_sysbios_hal_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsIncluded ti_sysbios_hal_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsMask ti_sysbios_hal_Cache_Module__diagsMask__C = ((CT__ti_sysbios_hal_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gateObj ti_sysbios_hal_Cache_Module__gateObj__C = ((CT__ti_sysbios_hal_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gatePrms ti_sysbios_hal_Cache_Module__gatePrms__C = ((CT__ti_sysbios_hal_Cache_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__id ti_sysbios_hal_Cache_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerDefined ti_sysbios_hal_Cache_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerObj ti_sysbios_hal_Cache_Module__loggerObj__C = ((CT__ti_sysbios_hal_Cache_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn0 ti_sysbios_hal_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn1 ti_sysbios_hal_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn2 ti_sysbios_hal_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn4 ti_sysbios_hal_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn8 ti_sysbios_hal_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__startupDoneFxn ti_sysbios_hal_Cache_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Cache_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__count ti_sysbios_hal_Cache_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__heap ti_sysbios_hal_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__sizeof ti_sysbios_hal_Cache_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__table ti_sysbios_hal_Cache_Object__table__C = 0;


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_gic_Hwi_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)3418) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_timers_dmtimer_Timer_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.vayu.IntXbar INITIALIZERS ========
 */

/* --> ti_sysbios_hal_vayu_IntXbar_Module_State_0_intXbar__A */
__T1_ti_sysbios_hal_vayu_IntXbar_Module_State__intXbar ti_sysbios_hal_vayu_IntXbar_Module_State_0_intXbar__A[152] = {
    (xdc_UInt16)0x0,  /* [0] */
    (xdc_UInt16)0x0,  /* [1] */
    (xdc_UInt16)0x0,  /* [2] */
    (xdc_UInt16)0x0,  /* [3] */
    (xdc_UInt16)0x0,  /* [4] */
    (xdc_UInt16)0x0,  /* [5] */
    (xdc_UInt16)0x0,  /* [6] */
    (xdc_UInt16)0x0,  /* [7] */
    (xdc_UInt16)0x0,  /* [8] */
    (xdc_UInt16)0x0,  /* [9] */
    (xdc_UInt16)0x0,  /* [10] */
    (xdc_UInt16)0x0,  /* [11] */
    (xdc_UInt16)0x0,  /* [12] */
    (xdc_UInt16)0x0,  /* [13] */
    (xdc_UInt16)0x0,  /* [14] */
    (xdc_UInt16)0x0,  /* [15] */
    (xdc_UInt16)0x0,  /* [16] */
    (xdc_UInt16)0x0,  /* [17] */
    (xdc_UInt16)0x0,  /* [18] */
    (xdc_UInt16)0x0,  /* [19] */
    (xdc_UInt16)0x0,  /* [20] */
    (xdc_UInt16)0x0,  /* [21] */
    (xdc_UInt16)0x0,  /* [22] */
    (xdc_UInt16)0x0,  /* [23] */
    (xdc_UInt16)0x0,  /* [24] */
    (xdc_UInt16)0x0,  /* [25] */
    (xdc_UInt16)0x0,  /* [26] */
    (xdc_UInt16)0x0,  /* [27] */
    (xdc_UInt16)0x0,  /* [28] */
    (xdc_UInt16)0x0,  /* [29] */
    (xdc_UInt16)0x0,  /* [30] */
    (xdc_UInt16)0x0,  /* [31] */
    (xdc_UInt16)0x0,  /* [32] */
    (xdc_UInt16)0x0,  /* [33] */
    (xdc_UInt16)0x0,  /* [34] */
    (xdc_UInt16)0x0,  /* [35] */
    (xdc_UInt16)0x0,  /* [36] */
    (xdc_UInt16)0x0,  /* [37] */
    (xdc_UInt16)0x0,  /* [38] */
    (xdc_UInt16)0x0,  /* [39] */
    (xdc_UInt16)0x0,  /* [40] */
    (xdc_UInt16)0x0,  /* [41] */
    (xdc_UInt16)0x0,  /* [42] */
    (xdc_UInt16)0x0,  /* [43] */
    (xdc_UInt16)0x0,  /* [44] */
    (xdc_UInt16)0x0,  /* [45] */
    (xdc_UInt16)0x0,  /* [46] */
    (xdc_UInt16)0x0,  /* [47] */
    (xdc_UInt16)0x0,  /* [48] */
    (xdc_UInt16)0x0,  /* [49] */
    (xdc_UInt16)0x0,  /* [50] */
    (xdc_UInt16)0x0,  /* [51] */
    (xdc_UInt16)0x0,  /* [52] */
    (xdc_UInt16)0x0,  /* [53] */
    (xdc_UInt16)0x0,  /* [54] */
    (xdc_UInt16)0x0,  /* [55] */
    (xdc_UInt16)0x0,  /* [56] */
    (xdc_UInt16)0x0,  /* [57] */
    (xdc_UInt16)0x0,  /* [58] */
    (xdc_UInt16)0x0,  /* [59] */
    (xdc_UInt16)0x0,  /* [60] */
    (xdc_UInt16)0x0,  /* [61] */
    (xdc_UInt16)0x0,  /* [62] */
    (xdc_UInt16)0x0,  /* [63] */
    (xdc_UInt16)0x0,  /* [64] */
    (xdc_UInt16)0x0,  /* [65] */
    (xdc_UInt16)0x0,  /* [66] */
    (xdc_UInt16)0x0,  /* [67] */
    (xdc_UInt16)0x0,  /* [68] */
    (xdc_UInt16)0x0,  /* [69] */
    (xdc_UInt16)0x0,  /* [70] */
    (xdc_UInt16)0x0,  /* [71] */
    (xdc_UInt16)0x0,  /* [72] */
    (xdc_UInt16)0x0,  /* [73] */
    (xdc_UInt16)0x0,  /* [74] */
    (xdc_UInt16)0x0,  /* [75] */
    (xdc_UInt16)0x0,  /* [76] */
    (xdc_UInt16)0x0,  /* [77] */
    (xdc_UInt16)0x0,  /* [78] */
    (xdc_UInt16)0x0,  /* [79] */
    (xdc_UInt16)0x0,  /* [80] */
    (xdc_UInt16)0x0,  /* [81] */
    (xdc_UInt16)0x0,  /* [82] */
    (xdc_UInt16)0x0,  /* [83] */
    (xdc_UInt16)0x0,  /* [84] */
    (xdc_UInt16)0x0,  /* [85] */
    (xdc_UInt16)0x0,  /* [86] */
    (xdc_UInt16)0x0,  /* [87] */
    (xdc_UInt16)0x0,  /* [88] */
    (xdc_UInt16)0x0,  /* [89] */
    (xdc_UInt16)0x0,  /* [90] */
    (xdc_UInt16)0x0,  /* [91] */
    (xdc_UInt16)0x0,  /* [92] */
    (xdc_UInt16)0x0,  /* [93] */
    (xdc_UInt16)0x0,  /* [94] */
    (xdc_UInt16)0x0,  /* [95] */
    (xdc_UInt16)0x0,  /* [96] */
    (xdc_UInt16)0x0,  /* [97] */
    (xdc_UInt16)0x0,  /* [98] */
    (xdc_UInt16)0x0,  /* [99] */
    (xdc_UInt16)0x0,  /* [100] */
    (xdc_UInt16)0x0,  /* [101] */
    (xdc_UInt16)0x0,  /* [102] */
    (xdc_UInt16)0x0,  /* [103] */
    (xdc_UInt16)0x0,  /* [104] */
    (xdc_UInt16)0x0,  /* [105] */
    (xdc_UInt16)0x0,  /* [106] */
    (xdc_UInt16)0x0,  /* [107] */
    (xdc_UInt16)0x0,  /* [108] */
    (xdc_UInt16)0x0,  /* [109] */
    (xdc_UInt16)0x0,  /* [110] */
    (xdc_UInt16)0x0,  /* [111] */
    (xdc_UInt16)0x0,  /* [112] */
    (xdc_UInt16)0x0,  /* [113] */
    (xdc_UInt16)0x0,  /* [114] */
    (xdc_UInt16)0x0,  /* [115] */
    (xdc_UInt16)0x0,  /* [116] */
    (xdc_UInt16)0x0,  /* [117] */
    (xdc_UInt16)0x0,  /* [118] */
    (xdc_UInt16)0x0,  /* [119] */
    (xdc_UInt16)0x0,  /* [120] */
    (xdc_UInt16)0x0,  /* [121] */
    (xdc_UInt16)0x0,  /* [122] */
    (xdc_UInt16)0x0,  /* [123] */
    (xdc_UInt16)0x0,  /* [124] */
    (xdc_UInt16)0x0,  /* [125] */
    (xdc_UInt16)0x0,  /* [126] */
    (xdc_UInt16)0x0,  /* [127] */
    (xdc_UInt16)0x0,  /* [128] */
    (xdc_UInt16)0x0,  /* [129] */
    (xdc_UInt16)0x0,  /* [130] */
    (xdc_UInt16)0x0,  /* [131] */
    (xdc_UInt16)0x0,  /* [132] */
    (xdc_UInt16)0x0,  /* [133] */
    (xdc_UInt16)0x0,  /* [134] */
    (xdc_UInt16)0x0,  /* [135] */
    (xdc_UInt16)0x0,  /* [136] */
    (xdc_UInt16)0x0,  /* [137] */
    (xdc_UInt16)0x0,  /* [138] */
    (xdc_UInt16)0x0,  /* [139] */
    (xdc_UInt16)0x0,  /* [140] */
    (xdc_UInt16)0x0,  /* [141] */
    (xdc_UInt16)0x0,  /* [142] */
    (xdc_UInt16)0x0,  /* [143] */
    (xdc_UInt16)0x0,  /* [144] */
    (xdc_UInt16)0x0,  /* [145] */
    (xdc_UInt16)0x0,  /* [146] */
    (xdc_UInt16)0x0,  /* [147] */
    (xdc_UInt16)0x0,  /* [148] */
    (xdc_UInt16)0x0,  /* [149] */
    (xdc_UInt16)0x0,  /* [150] */
    (xdc_UInt16)0x0,  /* [151] */
};

/* Module__state__V */
ti_sysbios_hal_vayu_IntXbar_Module_State__ ti_sysbios_hal_vayu_IntXbar_Module__state__V = {
    ((void*)ti_sysbios_hal_vayu_IntXbar_Module_State_0_intXbar__A),  /* intXbar */
};

/* --> ti_sysbios_hal_vayu_IntXbar_intXbar__A */
const __T1_ti_sysbios_hal_vayu_IntXbar_intXbar ti_sysbios_hal_vayu_IntXbar_intXbar__A[152] = {
    (xdc_UInt16)0x0,  /* [0] */
    (xdc_UInt16)0x0,  /* [1] */
    (xdc_UInt16)0x0,  /* [2] */
    (xdc_UInt16)0x0,  /* [3] */
    (xdc_UInt16)0x0,  /* [4] */
    (xdc_UInt16)0x0,  /* [5] */
    (xdc_UInt16)0x0,  /* [6] */
    (xdc_UInt16)0x0,  /* [7] */
    (xdc_UInt16)0x0,  /* [8] */
    (xdc_UInt16)0x0,  /* [9] */
    (xdc_UInt16)0x0,  /* [10] */
    (xdc_UInt16)0x0,  /* [11] */
    (xdc_UInt16)0x0,  /* [12] */
    (xdc_UInt16)0x0,  /* [13] */
    (xdc_UInt16)0x0,  /* [14] */
    (xdc_UInt16)0x0,  /* [15] */
    (xdc_UInt16)0x0,  /* [16] */
    (xdc_UInt16)0x0,  /* [17] */
    (xdc_UInt16)0x0,  /* [18] */
    (xdc_UInt16)0x0,  /* [19] */
    (xdc_UInt16)0x0,  /* [20] */
    (xdc_UInt16)0x0,  /* [21] */
    (xdc_UInt16)0x0,  /* [22] */
    (xdc_UInt16)0x0,  /* [23] */
    (xdc_UInt16)0x0,  /* [24] */
    (xdc_UInt16)0x0,  /* [25] */
    (xdc_UInt16)0x0,  /* [26] */
    (xdc_UInt16)0x0,  /* [27] */
    (xdc_UInt16)0x0,  /* [28] */
    (xdc_UInt16)0x0,  /* [29] */
    (xdc_UInt16)0x0,  /* [30] */
    (xdc_UInt16)0x0,  /* [31] */
    (xdc_UInt16)0x0,  /* [32] */
    (xdc_UInt16)0x0,  /* [33] */
    (xdc_UInt16)0x0,  /* [34] */
    (xdc_UInt16)0x0,  /* [35] */
    (xdc_UInt16)0x0,  /* [36] */
    (xdc_UInt16)0x0,  /* [37] */
    (xdc_UInt16)0x0,  /* [38] */
    (xdc_UInt16)0x0,  /* [39] */
    (xdc_UInt16)0x0,  /* [40] */
    (xdc_UInt16)0x0,  /* [41] */
    (xdc_UInt16)0x0,  /* [42] */
    (xdc_UInt16)0x0,  /* [43] */
    (xdc_UInt16)0x0,  /* [44] */
    (xdc_UInt16)0x0,  /* [45] */
    (xdc_UInt16)0x0,  /* [46] */
    (xdc_UInt16)0x0,  /* [47] */
    (xdc_UInt16)0x0,  /* [48] */
    (xdc_UInt16)0x0,  /* [49] */
    (xdc_UInt16)0x0,  /* [50] */
    (xdc_UInt16)0x0,  /* [51] */
    (xdc_UInt16)0x0,  /* [52] */
    (xdc_UInt16)0x0,  /* [53] */
    (xdc_UInt16)0x0,  /* [54] */
    (xdc_UInt16)0x0,  /* [55] */
    (xdc_UInt16)0x0,  /* [56] */
    (xdc_UInt16)0x0,  /* [57] */
    (xdc_UInt16)0x0,  /* [58] */
    (xdc_UInt16)0x0,  /* [59] */
    (xdc_UInt16)0x0,  /* [60] */
    (xdc_UInt16)0x0,  /* [61] */
    (xdc_UInt16)0x0,  /* [62] */
    (xdc_UInt16)0x0,  /* [63] */
    (xdc_UInt16)0x0,  /* [64] */
    (xdc_UInt16)0x0,  /* [65] */
    (xdc_UInt16)0x0,  /* [66] */
    (xdc_UInt16)0x0,  /* [67] */
    (xdc_UInt16)0x0,  /* [68] */
    (xdc_UInt16)0x0,  /* [69] */
    (xdc_UInt16)0x0,  /* [70] */
    (xdc_UInt16)0x0,  /* [71] */
    (xdc_UInt16)0x0,  /* [72] */
    (xdc_UInt16)0x0,  /* [73] */
    (xdc_UInt16)0x0,  /* [74] */
    (xdc_UInt16)0x0,  /* [75] */
    (xdc_UInt16)0x0,  /* [76] */
    (xdc_UInt16)0x0,  /* [77] */
    (xdc_UInt16)0x0,  /* [78] */
    (xdc_UInt16)0x0,  /* [79] */
    (xdc_UInt16)0x0,  /* [80] */
    (xdc_UInt16)0x0,  /* [81] */
    (xdc_UInt16)0x0,  /* [82] */
    (xdc_UInt16)0x0,  /* [83] */
    (xdc_UInt16)0x0,  /* [84] */
    (xdc_UInt16)0x0,  /* [85] */
    (xdc_UInt16)0x0,  /* [86] */
    (xdc_UInt16)0x0,  /* [87] */
    (xdc_UInt16)0x0,  /* [88] */
    (xdc_UInt16)0x0,  /* [89] */
    (xdc_UInt16)0x0,  /* [90] */
    (xdc_UInt16)0x0,  /* [91] */
    (xdc_UInt16)0x0,  /* [92] */
    (xdc_UInt16)0x0,  /* [93] */
    (xdc_UInt16)0x0,  /* [94] */
    (xdc_UInt16)0x0,  /* [95] */
    (xdc_UInt16)0x0,  /* [96] */
    (xdc_UInt16)0x0,  /* [97] */
    (xdc_UInt16)0x0,  /* [98] */
    (xdc_UInt16)0x0,  /* [99] */
    (xdc_UInt16)0x0,  /* [100] */
    (xdc_UInt16)0x0,  /* [101] */
    (xdc_UInt16)0x0,  /* [102] */
    (xdc_UInt16)0x0,  /* [103] */
    (xdc_UInt16)0x0,  /* [104] */
    (xdc_UInt16)0x0,  /* [105] */
    (xdc_UInt16)0x0,  /* [106] */
    (xdc_UInt16)0x0,  /* [107] */
    (xdc_UInt16)0x0,  /* [108] */
    (xdc_UInt16)0x0,  /* [109] */
    (xdc_UInt16)0x0,  /* [110] */
    (xdc_UInt16)0x0,  /* [111] */
    (xdc_UInt16)0x0,  /* [112] */
    (xdc_UInt16)0x0,  /* [113] */
    (xdc_UInt16)0x0,  /* [114] */
    (xdc_UInt16)0x0,  /* [115] */
    (xdc_UInt16)0x0,  /* [116] */
    (xdc_UInt16)0x0,  /* [117] */
    (xdc_UInt16)0x0,  /* [118] */
    (xdc_UInt16)0x0,  /* [119] */
    (xdc_UInt16)0x0,  /* [120] */
    (xdc_UInt16)0x0,  /* [121] */
    (xdc_UInt16)0x0,  /* [122] */
    (xdc_UInt16)0x0,  /* [123] */
    (xdc_UInt16)0x0,  /* [124] */
    (xdc_UInt16)0x0,  /* [125] */
    (xdc_UInt16)0x0,  /* [126] */
    (xdc_UInt16)0x0,  /* [127] */
    (xdc_UInt16)0x0,  /* [128] */
    (xdc_UInt16)0x0,  /* [129] */
    (xdc_UInt16)0x0,  /* [130] */
    (xdc_UInt16)0x0,  /* [131] */
    (xdc_UInt16)0x0,  /* [132] */
    (xdc_UInt16)0x0,  /* [133] */
    (xdc_UInt16)0x0,  /* [134] */
    (xdc_UInt16)0x0,  /* [135] */
    (xdc_UInt16)0x0,  /* [136] */
    (xdc_UInt16)0x0,  /* [137] */
    (xdc_UInt16)0x0,  /* [138] */
    (xdc_UInt16)0x0,  /* [139] */
    (xdc_UInt16)0x0,  /* [140] */
    (xdc_UInt16)0x0,  /* [141] */
    (xdc_UInt16)0x0,  /* [142] */
    (xdc_UInt16)0x0,  /* [143] */
    (xdc_UInt16)0x0,  /* [144] */
    (xdc_UInt16)0x0,  /* [145] */
    (xdc_UInt16)0x0,  /* [146] */
    (xdc_UInt16)0x0,  /* [147] */
    (xdc_UInt16)0x0,  /* [148] */
    (xdc_UInt16)0x0,  /* [149] */
    (xdc_UInt16)0x0,  /* [150] */
    (xdc_UInt16)0x0,  /* [151] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__diagsEnabled ti_sysbios_hal_vayu_IntXbar_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__diagsIncluded ti_sysbios_hal_vayu_IntXbar_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__diagsMask ti_sysbios_hal_vayu_IntXbar_Module__diagsMask__C = ((CT__ti_sysbios_hal_vayu_IntXbar_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__gateObj ti_sysbios_hal_vayu_IntXbar_Module__gateObj__C = ((CT__ti_sysbios_hal_vayu_IntXbar_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__gatePrms ti_sysbios_hal_vayu_IntXbar_Module__gatePrms__C = ((CT__ti_sysbios_hal_vayu_IntXbar_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__id ti_sysbios_hal_vayu_IntXbar_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerDefined ti_sysbios_hal_vayu_IntXbar_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerObj ti_sysbios_hal_vayu_IntXbar_Module__loggerObj__C = ((CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn0 ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn1 ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn2 ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn4 ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn8 ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_vayu_IntXbar_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Module__startupDoneFxn ti_sysbios_hal_vayu_IntXbar_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_vayu_IntXbar_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Object__count ti_sysbios_hal_vayu_IntXbar_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Object__heap ti_sysbios_hal_vayu_IntXbar_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Object__sizeof ti_sysbios_hal_vayu_IntXbar_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_Object__table ti_sysbios_hal_vayu_IntXbar_Object__table__C = 0;

/* A_badEveXbarInstanceNum__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_A_badEveXbarInstanceNum ti_sysbios_hal_vayu_IntXbar_A_badEveXbarInstanceNum__C = (((xdc_runtime_Assert_Id)2093) << 16 | 16);

/* A_badDspXbarInstanceNum__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_A_badDspXbarInstanceNum ti_sysbios_hal_vayu_IntXbar_A_badDspXbarInstanceNum__C = (((xdc_runtime_Assert_Id)2153) << 16 | 16);

/* A_badBenelliXbarInstanceNum__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_A_badBenelliXbarInstanceNum ti_sysbios_hal_vayu_IntXbar_A_badBenelliXbarInstanceNum__C = (((xdc_runtime_Assert_Id)2214) << 16 | 16);

/* A_badA15XbarInstanceNum__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_A_badA15XbarInstanceNum ti_sysbios_hal_vayu_IntXbar_A_badA15XbarInstanceNum__C = (((xdc_runtime_Assert_Id)2279) << 16 | 16);

/* A_badIntSourceIdx__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_A_badIntSourceIdx ti_sysbios_hal_vayu_IntXbar_A_badIntSourceIdx__C = (((xdc_runtime_Assert_Id)2341) << 16 | 16);

/* intXbar__C */
__FAR__ const CT__ti_sysbios_hal_vayu_IntXbar_intXbar ti_sysbios_hal_vayu_IntXbar_intXbar__C = ((CT__ti_sysbios_hal_vayu_IntXbar_intXbar)ti_sysbios_hal_vayu_IntXbar_intXbar__A);


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8035;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2837) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2873) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2918) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4277) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2809) << 16 | 16);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_Int)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt32)0x0,  /* periodCounts */
    (xdc_UInt)0x0,  /* numTickSkip */
    (xdc_UInt32)0x0,  /* skipsWorkFunc */
    0,  /* inWorkFunc */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4489) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)4511) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)4529) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)355) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)436) << 16 | 16);

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1] = {
    (xdc_UInt)0x0,  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {1, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)4561) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)4591) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)756) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)811) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)635) << 16 | 16);

/* A_overflow__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)876) << 16 | 16);

/* supportsEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* eventPost__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)4634) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)4681) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)4699) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)930) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)987) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpCurQ */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int))0),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))0),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_knl_Task_checkStacks)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)4739) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)4807) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)4852) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)4893) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)4925) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)4973) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5029) << 16 | 512);

/* LM_setAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5060) << 16 | 768);

/* LM_schedule__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5143) << 16 | 1024);

/* LM_noWork__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5229) << 16 | 1024);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3455) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3498) << 16 | 0);

/* E_deleteNotAllowed__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)3549) << 16 | 0);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1036) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1105) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1159) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1213) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1276) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1326) << 16 | 16);

/* A_badAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1361) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* deleteTerminatedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks*)ti_sysbios_knl_Task_hooks__A)};

/* numConstructedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.timers.dmtimer.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_dmtimer_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_timers_dmtimer_Timer_Params ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_timers_dmtimer_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        (xdc_Bits8)0x0,  /* idlemode */
        (xdc_Bits8)0x0,  /* emufree */
        (xdc_Bits8)0x1,  /* softreset */
    },  /* tiocpCfg */
    {
        (xdc_Bits8)0x0,  /* mat_it_ena */
        (xdc_Bits8)0x1,  /* ovf_it_ena */
        (xdc_Bits8)0x0,  /* tcar_it_ena */
    },  /* tier */
    {
        (xdc_Bits8)0x0,  /* mat_wup_ena */
        (xdc_Bits8)0x0,  /* ovf_wup_ena */
        (xdc_Bits8)0x0,  /* tcar_wup_ena */
    },  /* twer */
    {
        (xdc_Bits32)0x0,  /* ptv */
        (xdc_Bits8)0x0,  /* pre */
        (xdc_Bits8)0x0,  /* ce */
        (xdc_Bits8)0x0,  /* scpwm */
        (xdc_Bits16)0x0,  /* tcm */
        (xdc_Bits16)0x0,  /* trg */
        (xdc_Bits8)0x0,  /* pt */
        (xdc_Bits8)0x0,  /* captmode */
        (xdc_Bits8)0x0,  /* gpocfg */
    },  /* tclr */
    {
        (xdc_Bits8)0x0,  /* sft */
        (xdc_Bits8)0x0,  /* posted */
    },  /* tsicr */
    (xdc_UInt32)0x0,  /* tmar */
    (xdc_Int)(-0x0 - 1),  /* intNum */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    ((ti_sysbios_hal_Hwi_Params*)0),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_timers_dmtimer_Timer_Module__ ti_sysbios_timers_dmtimer_Timer_Module__root__V = {
    {&ti_sysbios_timers_dmtimer_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_timers_dmtimer_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_timers_dmtimer_Timer_Object__ ti_sysbios_timers_dmtimer_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        (xdc_UInt)0x1,  /* tiocpCfg */
        (xdc_UInt)0x0,  /* tmar */
        (xdc_UInt)0x2,  /* tier */
        (xdc_UInt)0x0,  /* twer */
        (xdc_UInt)0x0,  /* tclr */
        (xdc_UInt)0x0,  /* tsicr */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x3e8,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0x46,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0x0,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        1,  /* useDefaultEventId */
    },
};

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__device ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A[2] = {
    {
        (xdc_UInt)0x46,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x48032000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x4e,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0x48086000)),  /* baseAddr */
    },  /* [1] */
};

/* --> ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_dmtimer_Timer_Module_State__handles ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A[2] = {
    (ti_sysbios_timers_dmtimer_Timer_Handle)&ti_sysbios_timers_dmtimer_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
};

/* Module__state__V */
ti_sysbios_timers_dmtimer_Timer_Module_State__ ti_sysbios_timers_dmtimer_Timer_Module__state__V = {
    (xdc_Bits32)0x2,  /* availMask */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x124f800,  /* lo */
    },  /* intFreq */
    ((void*)ti_sysbios_timers_dmtimer_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_timers_dmtimer_Timer_Module_State_0_handles__A),  /* handles */
    1,  /* firstInit */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsMask ti_sysbios_timers_dmtimer_Timer_Module__diagsMask__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__gateObj ti_sysbios_timers_dmtimer_Timer_Module__gateObj__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__gatePrms ti_sysbios_timers_dmtimer_Timer_Module__gatePrms__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__id ti_sysbios_timers_dmtimer_Timer_Module__id__C = (xdc_Bits16)0x8031;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerObj ti_sysbios_timers_dmtimer_Timer_Module__loggerObj__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_timers_dmtimer_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__count ti_sysbios_timers_dmtimer_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__heap ti_sysbios_timers_dmtimer_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__sizeof ti_sysbios_timers_dmtimer_Timer_Object__sizeof__C = sizeof(ti_sysbios_timers_dmtimer_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_Object__table ti_sysbios_timers_dmtimer_Timer_Object__table__C = ti_sysbios_timers_dmtimer_Timer_Object__table__V;

/* A_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_A_notAvailable ti_sysbios_timers_dmtimer_Timer_A_notAvailable__C = (((xdc_runtime_Assert_Id)2038) << 16 | 16);

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_invalidTimer ti_sysbios_timers_dmtimer_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)3961) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_notAvailable ti_sysbios_timers_dmtimer_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)3997) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_cannotSupport ti_sysbios_timers_dmtimer_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4036) << 16 | 0);

/* E_freqMismatch__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_E_freqMismatch ti_sysbios_timers_dmtimer_Timer_E_freqMismatch__C = (((xdc_runtime_Error_Id)4094) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_anyMask ti_sysbios_timers_dmtimer_Timer_anyMask__C = (xdc_Bits32)0x3;

/* checkFrequency__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_checkFrequency ti_sysbios_timers_dmtimer_Timer_checkFrequency__C = 0;

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_startupNeeded ti_sysbios_timers_dmtimer_Timer_startupNeeded__C = 1;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_timers_dmtimer_Timer_numTimerDevices ti_sysbios_timers_dmtimer_Timer_numTimerDevices__C = (xdc_Int)0x2;


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3178) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3200) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3204) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3238) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4313) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4337) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4358) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4377) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4394) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4408) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4424) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4431) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4442) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4452) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4471) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x4,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[4] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_a15_Cache_startup__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_vayu_IntXbar_initIntXbar__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [3] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[12] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_a15_Mmu_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_a15_TimestampProvider_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_gic_Hwi_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_exc_Exception_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Module_startup__E)),  /* [11] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[12] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    1,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {4, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)307) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5796] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x20,  /* [147] */
    (xdc_Char)0x69,  /* [148] */
    (xdc_Char)0x6e,  /* [149] */
    (xdc_Char)0x73,  /* [150] */
    (xdc_Char)0x74,  /* [151] */
    (xdc_Char)0x61,  /* [152] */
    (xdc_Char)0x6e,  /* [153] */
    (xdc_Char)0x63,  /* [154] */
    (xdc_Char)0x65,  /* [155] */
    (xdc_Char)0x20,  /* [156] */
    (xdc_Char)0x74,  /* [157] */
    (xdc_Char)0x6f,  /* [158] */
    (xdc_Char)0x74,  /* [159] */
    (xdc_Char)0x61,  /* [160] */
    (xdc_Char)0x6c,  /* [161] */
    (xdc_Char)0x46,  /* [162] */
    (xdc_Char)0x72,  /* [163] */
    (xdc_Char)0x65,  /* [164] */
    (xdc_Char)0x65,  /* [165] */
    (xdc_Char)0x53,  /* [166] */
    (xdc_Char)0x69,  /* [167] */
    (xdc_Char)0x7a,  /* [168] */
    (xdc_Char)0x65,  /* [169] */
    (xdc_Char)0x20,  /* [170] */
    (xdc_Char)0x69,  /* [171] */
    (xdc_Char)0x73,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x67,  /* [174] */
    (xdc_Char)0x72,  /* [175] */
    (xdc_Char)0x65,  /* [176] */
    (xdc_Char)0x61,  /* [177] */
    (xdc_Char)0x74,  /* [178] */
    (xdc_Char)0x65,  /* [179] */
    (xdc_Char)0x72,  /* [180] */
    (xdc_Char)0x20,  /* [181] */
    (xdc_Char)0x74,  /* [182] */
    (xdc_Char)0x68,  /* [183] */
    (xdc_Char)0x61,  /* [184] */
    (xdc_Char)0x6e,  /* [185] */
    (xdc_Char)0x20,  /* [186] */
    (xdc_Char)0x73,  /* [187] */
    (xdc_Char)0x74,  /* [188] */
    (xdc_Char)0x61,  /* [189] */
    (xdc_Char)0x72,  /* [190] */
    (xdc_Char)0x74,  /* [191] */
    (xdc_Char)0x69,  /* [192] */
    (xdc_Char)0x6e,  /* [193] */
    (xdc_Char)0x67,  /* [194] */
    (xdc_Char)0x20,  /* [195] */
    (xdc_Char)0x73,  /* [196] */
    (xdc_Char)0x69,  /* [197] */
    (xdc_Char)0x7a,  /* [198] */
    (xdc_Char)0x65,  /* [199] */
    (xdc_Char)0x0,  /* [200] */
    (xdc_Char)0x48,  /* [201] */
    (xdc_Char)0x65,  /* [202] */
    (xdc_Char)0x61,  /* [203] */
    (xdc_Char)0x70,  /* [204] */
    (xdc_Char)0x53,  /* [205] */
    (xdc_Char)0x74,  /* [206] */
    (xdc_Char)0x64,  /* [207] */
    (xdc_Char)0x5f,  /* [208] */
    (xdc_Char)0x61,  /* [209] */
    (xdc_Char)0x6c,  /* [210] */
    (xdc_Char)0x6c,  /* [211] */
    (xdc_Char)0x6f,  /* [212] */
    (xdc_Char)0x63,  /* [213] */
    (xdc_Char)0x20,  /* [214] */
    (xdc_Char)0x2d,  /* [215] */
    (xdc_Char)0x20,  /* [216] */
    (xdc_Char)0x72,  /* [217] */
    (xdc_Char)0x65,  /* [218] */
    (xdc_Char)0x71,  /* [219] */
    (xdc_Char)0x75,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x73,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x64,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x61,  /* [227] */
    (xdc_Char)0x6c,  /* [228] */
    (xdc_Char)0x69,  /* [229] */
    (xdc_Char)0x67,  /* [230] */
    (xdc_Char)0x6e,  /* [231] */
    (xdc_Char)0x6d,  /* [232] */
    (xdc_Char)0x65,  /* [233] */
    (xdc_Char)0x6e,  /* [234] */
    (xdc_Char)0x74,  /* [235] */
    (xdc_Char)0x20,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x73,  /* [238] */
    (xdc_Char)0x20,  /* [239] */
    (xdc_Char)0x67,  /* [240] */
    (xdc_Char)0x72,  /* [241] */
    (xdc_Char)0x65,  /* [242] */
    (xdc_Char)0x61,  /* [243] */
    (xdc_Char)0x74,  /* [244] */
    (xdc_Char)0x65,  /* [245] */
    (xdc_Char)0x72,  /* [246] */
    (xdc_Char)0x20,  /* [247] */
    (xdc_Char)0x74,  /* [248] */
    (xdc_Char)0x68,  /* [249] */
    (xdc_Char)0x61,  /* [250] */
    (xdc_Char)0x6e,  /* [251] */
    (xdc_Char)0x20,  /* [252] */
    (xdc_Char)0x61,  /* [253] */
    (xdc_Char)0x6c,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6f,  /* [256] */
    (xdc_Char)0x77,  /* [257] */
    (xdc_Char)0x65,  /* [258] */
    (xdc_Char)0x64,  /* [259] */
    (xdc_Char)0x0,  /* [260] */
    (xdc_Char)0x41,  /* [261] */
    (xdc_Char)0x5f,  /* [262] */
    (xdc_Char)0x69,  /* [263] */
    (xdc_Char)0x6e,  /* [264] */
    (xdc_Char)0x76,  /* [265] */
    (xdc_Char)0x61,  /* [266] */
    (xdc_Char)0x6c,  /* [267] */
    (xdc_Char)0x69,  /* [268] */
    (xdc_Char)0x64,  /* [269] */
    (xdc_Char)0x4c,  /* [270] */
    (xdc_Char)0x6f,  /* [271] */
    (xdc_Char)0x67,  /* [272] */
    (xdc_Char)0x67,  /* [273] */
    (xdc_Char)0x65,  /* [274] */
    (xdc_Char)0x72,  /* [275] */
    (xdc_Char)0x3a,  /* [276] */
    (xdc_Char)0x20,  /* [277] */
    (xdc_Char)0x54,  /* [278] */
    (xdc_Char)0x68,  /* [279] */
    (xdc_Char)0x65,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x6c,  /* [282] */
    (xdc_Char)0x6f,  /* [283] */
    (xdc_Char)0x67,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x65,  /* [286] */
    (xdc_Char)0x72,  /* [287] */
    (xdc_Char)0x20,  /* [288] */
    (xdc_Char)0x69,  /* [289] */
    (xdc_Char)0x64,  /* [290] */
    (xdc_Char)0x20,  /* [291] */
    (xdc_Char)0x25,  /* [292] */
    (xdc_Char)0x64,  /* [293] */
    (xdc_Char)0x20,  /* [294] */
    (xdc_Char)0x69,  /* [295] */
    (xdc_Char)0x73,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x69,  /* [298] */
    (xdc_Char)0x6e,  /* [299] */
    (xdc_Char)0x76,  /* [300] */
    (xdc_Char)0x61,  /* [301] */
    (xdc_Char)0x6c,  /* [302] */
    (xdc_Char)0x69,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x2e,  /* [305] */
    (xdc_Char)0x0,  /* [306] */
    (xdc_Char)0x41,  /* [307] */
    (xdc_Char)0x5f,  /* [308] */
    (xdc_Char)0x63,  /* [309] */
    (xdc_Char)0x61,  /* [310] */
    (xdc_Char)0x6e,  /* [311] */
    (xdc_Char)0x6e,  /* [312] */
    (xdc_Char)0x6f,  /* [313] */
    (xdc_Char)0x74,  /* [314] */
    (xdc_Char)0x46,  /* [315] */
    (xdc_Char)0x69,  /* [316] */
    (xdc_Char)0x74,  /* [317] */
    (xdc_Char)0x49,  /* [318] */
    (xdc_Char)0x6e,  /* [319] */
    (xdc_Char)0x74,  /* [320] */
    (xdc_Char)0x6f,  /* [321] */
    (xdc_Char)0x41,  /* [322] */
    (xdc_Char)0x72,  /* [323] */
    (xdc_Char)0x67,  /* [324] */
    (xdc_Char)0x3a,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x73,  /* [327] */
    (xdc_Char)0x69,  /* [328] */
    (xdc_Char)0x7a,  /* [329] */
    (xdc_Char)0x65,  /* [330] */
    (xdc_Char)0x6f,  /* [331] */
    (xdc_Char)0x66,  /* [332] */
    (xdc_Char)0x28,  /* [333] */
    (xdc_Char)0x46,  /* [334] */
    (xdc_Char)0x6c,  /* [335] */
    (xdc_Char)0x6f,  /* [336] */
    (xdc_Char)0x61,  /* [337] */
    (xdc_Char)0x74,  /* [338] */
    (xdc_Char)0x29,  /* [339] */
    (xdc_Char)0x20,  /* [340] */
    (xdc_Char)0x3e,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x73,  /* [343] */
    (xdc_Char)0x69,  /* [344] */
    (xdc_Char)0x7a,  /* [345] */
    (xdc_Char)0x65,  /* [346] */
    (xdc_Char)0x6f,  /* [347] */
    (xdc_Char)0x66,  /* [348] */
    (xdc_Char)0x28,  /* [349] */
    (xdc_Char)0x41,  /* [350] */
    (xdc_Char)0x72,  /* [351] */
    (xdc_Char)0x67,  /* [352] */
    (xdc_Char)0x29,  /* [353] */
    (xdc_Char)0x0,  /* [354] */
    (xdc_Char)0x41,  /* [355] */
    (xdc_Char)0x5f,  /* [356] */
    (xdc_Char)0x63,  /* [357] */
    (xdc_Char)0x6c,  /* [358] */
    (xdc_Char)0x6f,  /* [359] */
    (xdc_Char)0x63,  /* [360] */
    (xdc_Char)0x6b,  /* [361] */
    (xdc_Char)0x44,  /* [362] */
    (xdc_Char)0x69,  /* [363] */
    (xdc_Char)0x73,  /* [364] */
    (xdc_Char)0x61,  /* [365] */
    (xdc_Char)0x62,  /* [366] */
    (xdc_Char)0x6c,  /* [367] */
    (xdc_Char)0x65,  /* [368] */
    (xdc_Char)0x64,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x43,  /* [372] */
    (xdc_Char)0x61,  /* [373] */
    (xdc_Char)0x6e,  /* [374] */
    (xdc_Char)0x6e,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x74,  /* [377] */
    (xdc_Char)0x20,  /* [378] */
    (xdc_Char)0x63,  /* [379] */
    (xdc_Char)0x72,  /* [380] */
    (xdc_Char)0x65,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x65,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x61,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x63,  /* [388] */
    (xdc_Char)0x6c,  /* [389] */
    (xdc_Char)0x6f,  /* [390] */
    (xdc_Char)0x63,  /* [391] */
    (xdc_Char)0x6b,  /* [392] */
    (xdc_Char)0x20,  /* [393] */
    (xdc_Char)0x69,  /* [394] */
    (xdc_Char)0x6e,  /* [395] */
    (xdc_Char)0x73,  /* [396] */
    (xdc_Char)0x74,  /* [397] */
    (xdc_Char)0x61,  /* [398] */
    (xdc_Char)0x6e,  /* [399] */
    (xdc_Char)0x63,  /* [400] */
    (xdc_Char)0x65,  /* [401] */
    (xdc_Char)0x20,  /* [402] */
    (xdc_Char)0x77,  /* [403] */
    (xdc_Char)0x68,  /* [404] */
    (xdc_Char)0x65,  /* [405] */
    (xdc_Char)0x6e,  /* [406] */
    (xdc_Char)0x20,  /* [407] */
    (xdc_Char)0x42,  /* [408] */
    (xdc_Char)0x49,  /* [409] */
    (xdc_Char)0x4f,  /* [410] */
    (xdc_Char)0x53,  /* [411] */
    (xdc_Char)0x2e,  /* [412] */
    (xdc_Char)0x63,  /* [413] */
    (xdc_Char)0x6c,  /* [414] */
    (xdc_Char)0x6f,  /* [415] */
    (xdc_Char)0x63,  /* [416] */
    (xdc_Char)0x6b,  /* [417] */
    (xdc_Char)0x45,  /* [418] */
    (xdc_Char)0x6e,  /* [419] */
    (xdc_Char)0x61,  /* [420] */
    (xdc_Char)0x62,  /* [421] */
    (xdc_Char)0x6c,  /* [422] */
    (xdc_Char)0x65,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x69,  /* [426] */
    (xdc_Char)0x73,  /* [427] */
    (xdc_Char)0x20,  /* [428] */
    (xdc_Char)0x66,  /* [429] */
    (xdc_Char)0x61,  /* [430] */
    (xdc_Char)0x6c,  /* [431] */
    (xdc_Char)0x73,  /* [432] */
    (xdc_Char)0x65,  /* [433] */
    (xdc_Char)0x2e,  /* [434] */
    (xdc_Char)0x0,  /* [435] */
    (xdc_Char)0x41,  /* [436] */
    (xdc_Char)0x5f,  /* [437] */
    (xdc_Char)0x62,  /* [438] */
    (xdc_Char)0x61,  /* [439] */
    (xdc_Char)0x64,  /* [440] */
    (xdc_Char)0x54,  /* [441] */
    (xdc_Char)0x68,  /* [442] */
    (xdc_Char)0x72,  /* [443] */
    (xdc_Char)0x65,  /* [444] */
    (xdc_Char)0x61,  /* [445] */
    (xdc_Char)0x64,  /* [446] */
    (xdc_Char)0x54,  /* [447] */
    (xdc_Char)0x79,  /* [448] */
    (xdc_Char)0x70,  /* [449] */
    (xdc_Char)0x65,  /* [450] */
    (xdc_Char)0x3a,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x43,  /* [453] */
    (xdc_Char)0x61,  /* [454] */
    (xdc_Char)0x6e,  /* [455] */
    (xdc_Char)0x6e,  /* [456] */
    (xdc_Char)0x6f,  /* [457] */
    (xdc_Char)0x74,  /* [458] */
    (xdc_Char)0x20,  /* [459] */
    (xdc_Char)0x63,  /* [460] */
    (xdc_Char)0x72,  /* [461] */
    (xdc_Char)0x65,  /* [462] */
    (xdc_Char)0x61,  /* [463] */
    (xdc_Char)0x74,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x2f,  /* [466] */
    (xdc_Char)0x64,  /* [467] */
    (xdc_Char)0x65,  /* [468] */
    (xdc_Char)0x6c,  /* [469] */
    (xdc_Char)0x65,  /* [470] */
    (xdc_Char)0x74,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x20,  /* [473] */
    (xdc_Char)0x61,  /* [474] */
    (xdc_Char)0x20,  /* [475] */
    (xdc_Char)0x43,  /* [476] */
    (xdc_Char)0x6c,  /* [477] */
    (xdc_Char)0x6f,  /* [478] */
    (xdc_Char)0x63,  /* [479] */
    (xdc_Char)0x6b,  /* [480] */
    (xdc_Char)0x20,  /* [481] */
    (xdc_Char)0x66,  /* [482] */
    (xdc_Char)0x72,  /* [483] */
    (xdc_Char)0x6f,  /* [484] */
    (xdc_Char)0x6d,  /* [485] */
    (xdc_Char)0x20,  /* [486] */
    (xdc_Char)0x48,  /* [487] */
    (xdc_Char)0x77,  /* [488] */
    (xdc_Char)0x69,  /* [489] */
    (xdc_Char)0x20,  /* [490] */
    (xdc_Char)0x6f,  /* [491] */
    (xdc_Char)0x72,  /* [492] */
    (xdc_Char)0x20,  /* [493] */
    (xdc_Char)0x53,  /* [494] */
    (xdc_Char)0x77,  /* [495] */
    (xdc_Char)0x69,  /* [496] */
    (xdc_Char)0x20,  /* [497] */
    (xdc_Char)0x74,  /* [498] */
    (xdc_Char)0x68,  /* [499] */
    (xdc_Char)0x72,  /* [500] */
    (xdc_Char)0x65,  /* [501] */
    (xdc_Char)0x61,  /* [502] */
    (xdc_Char)0x64,  /* [503] */
    (xdc_Char)0x2e,  /* [504] */
    (xdc_Char)0x0,  /* [505] */
    (xdc_Char)0x41,  /* [506] */
    (xdc_Char)0x5f,  /* [507] */
    (xdc_Char)0x6e,  /* [508] */
    (xdc_Char)0x75,  /* [509] */
    (xdc_Char)0x6c,  /* [510] */
    (xdc_Char)0x6c,  /* [511] */
    (xdc_Char)0x45,  /* [512] */
    (xdc_Char)0x76,  /* [513] */
    (xdc_Char)0x65,  /* [514] */
    (xdc_Char)0x6e,  /* [515] */
    (xdc_Char)0x74,  /* [516] */
    (xdc_Char)0x4d,  /* [517] */
    (xdc_Char)0x61,  /* [518] */
    (xdc_Char)0x73,  /* [519] */
    (xdc_Char)0x6b,  /* [520] */
    (xdc_Char)0x73,  /* [521] */
    (xdc_Char)0x3a,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x6f,  /* [524] */
    (xdc_Char)0x72,  /* [525] */
    (xdc_Char)0x4d,  /* [526] */
    (xdc_Char)0x61,  /* [527] */
    (xdc_Char)0x73,  /* [528] */
    (xdc_Char)0x6b,  /* [529] */
    (xdc_Char)0x20,  /* [530] */
    (xdc_Char)0x61,  /* [531] */
    (xdc_Char)0x6e,  /* [532] */
    (xdc_Char)0x64,  /* [533] */
    (xdc_Char)0x20,  /* [534] */
    (xdc_Char)0x61,  /* [535] */
    (xdc_Char)0x6e,  /* [536] */
    (xdc_Char)0x64,  /* [537] */
    (xdc_Char)0x4d,  /* [538] */
    (xdc_Char)0x61,  /* [539] */
    (xdc_Char)0x73,  /* [540] */
    (xdc_Char)0x6b,  /* [541] */
    (xdc_Char)0x20,  /* [542] */
    (xdc_Char)0x61,  /* [543] */
    (xdc_Char)0x72,  /* [544] */
    (xdc_Char)0x65,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x6e,  /* [547] */
    (xdc_Char)0x75,  /* [548] */
    (xdc_Char)0x6c,  /* [549] */
    (xdc_Char)0x6c,  /* [550] */
    (xdc_Char)0x2e,  /* [551] */
    (xdc_Char)0x0,  /* [552] */
    (xdc_Char)0x41,  /* [553] */
    (xdc_Char)0x5f,  /* [554] */
    (xdc_Char)0x6e,  /* [555] */
    (xdc_Char)0x75,  /* [556] */
    (xdc_Char)0x6c,  /* [557] */
    (xdc_Char)0x6c,  /* [558] */
    (xdc_Char)0x45,  /* [559] */
    (xdc_Char)0x76,  /* [560] */
    (xdc_Char)0x65,  /* [561] */
    (xdc_Char)0x6e,  /* [562] */
    (xdc_Char)0x74,  /* [563] */
    (xdc_Char)0x49,  /* [564] */
    (xdc_Char)0x64,  /* [565] */
    (xdc_Char)0x3a,  /* [566] */
    (xdc_Char)0x20,  /* [567] */
    (xdc_Char)0x70,  /* [568] */
    (xdc_Char)0x6f,  /* [569] */
    (xdc_Char)0x73,  /* [570] */
    (xdc_Char)0x74,  /* [571] */
    (xdc_Char)0x65,  /* [572] */
    (xdc_Char)0x64,  /* [573] */
    (xdc_Char)0x20,  /* [574] */
    (xdc_Char)0x65,  /* [575] */
    (xdc_Char)0x76,  /* [576] */
    (xdc_Char)0x65,  /* [577] */
    (xdc_Char)0x6e,  /* [578] */
    (xdc_Char)0x74,  /* [579] */
    (xdc_Char)0x49,  /* [580] */
    (xdc_Char)0x64,  /* [581] */
    (xdc_Char)0x20,  /* [582] */
    (xdc_Char)0x69,  /* [583] */
    (xdc_Char)0x73,  /* [584] */
    (xdc_Char)0x20,  /* [585] */
    (xdc_Char)0x6e,  /* [586] */
    (xdc_Char)0x75,  /* [587] */
    (xdc_Char)0x6c,  /* [588] */
    (xdc_Char)0x6c,  /* [589] */
    (xdc_Char)0x2e,  /* [590] */
    (xdc_Char)0x0,  /* [591] */
    (xdc_Char)0x41,  /* [592] */
    (xdc_Char)0x5f,  /* [593] */
    (xdc_Char)0x65,  /* [594] */
    (xdc_Char)0x76,  /* [595] */
    (xdc_Char)0x65,  /* [596] */
    (xdc_Char)0x6e,  /* [597] */
    (xdc_Char)0x74,  /* [598] */
    (xdc_Char)0x49,  /* [599] */
    (xdc_Char)0x6e,  /* [600] */
    (xdc_Char)0x55,  /* [601] */
    (xdc_Char)0x73,  /* [602] */
    (xdc_Char)0x65,  /* [603] */
    (xdc_Char)0x3a,  /* [604] */
    (xdc_Char)0x20,  /* [605] */
    (xdc_Char)0x45,  /* [606] */
    (xdc_Char)0x76,  /* [607] */
    (xdc_Char)0x65,  /* [608] */
    (xdc_Char)0x6e,  /* [609] */
    (xdc_Char)0x74,  /* [610] */
    (xdc_Char)0x20,  /* [611] */
    (xdc_Char)0x6f,  /* [612] */
    (xdc_Char)0x62,  /* [613] */
    (xdc_Char)0x6a,  /* [614] */
    (xdc_Char)0x65,  /* [615] */
    (xdc_Char)0x63,  /* [616] */
    (xdc_Char)0x74,  /* [617] */
    (xdc_Char)0x20,  /* [618] */
    (xdc_Char)0x61,  /* [619] */
    (xdc_Char)0x6c,  /* [620] */
    (xdc_Char)0x72,  /* [621] */
    (xdc_Char)0x65,  /* [622] */
    (xdc_Char)0x61,  /* [623] */
    (xdc_Char)0x64,  /* [624] */
    (xdc_Char)0x79,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x69,  /* [627] */
    (xdc_Char)0x6e,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x75,  /* [630] */
    (xdc_Char)0x73,  /* [631] */
    (xdc_Char)0x65,  /* [632] */
    (xdc_Char)0x2e,  /* [633] */
    (xdc_Char)0x0,  /* [634] */
    (xdc_Char)0x41,  /* [635] */
    (xdc_Char)0x5f,  /* [636] */
    (xdc_Char)0x62,  /* [637] */
    (xdc_Char)0x61,  /* [638] */
    (xdc_Char)0x64,  /* [639] */
    (xdc_Char)0x43,  /* [640] */
    (xdc_Char)0x6f,  /* [641] */
    (xdc_Char)0x6e,  /* [642] */
    (xdc_Char)0x74,  /* [643] */
    (xdc_Char)0x65,  /* [644] */
    (xdc_Char)0x78,  /* [645] */
    (xdc_Char)0x74,  /* [646] */
    (xdc_Char)0x3a,  /* [647] */
    (xdc_Char)0x20,  /* [648] */
    (xdc_Char)0x62,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x64,  /* [651] */
    (xdc_Char)0x20,  /* [652] */
    (xdc_Char)0x63,  /* [653] */
    (xdc_Char)0x61,  /* [654] */
    (xdc_Char)0x6c,  /* [655] */
    (xdc_Char)0x6c,  /* [656] */
    (xdc_Char)0x69,  /* [657] */
    (xdc_Char)0x6e,  /* [658] */
    (xdc_Char)0x67,  /* [659] */
    (xdc_Char)0x20,  /* [660] */
    (xdc_Char)0x63,  /* [661] */
    (xdc_Char)0x6f,  /* [662] */
    (xdc_Char)0x6e,  /* [663] */
    (xdc_Char)0x74,  /* [664] */
    (xdc_Char)0x65,  /* [665] */
    (xdc_Char)0x78,  /* [666] */
    (xdc_Char)0x74,  /* [667] */
    (xdc_Char)0x2e,  /* [668] */
    (xdc_Char)0x20,  /* [669] */
    (xdc_Char)0x4d,  /* [670] */
    (xdc_Char)0x75,  /* [671] */
    (xdc_Char)0x73,  /* [672] */
    (xdc_Char)0x74,  /* [673] */
    (xdc_Char)0x20,  /* [674] */
    (xdc_Char)0x62,  /* [675] */
    (xdc_Char)0x65,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x63,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x6c,  /* [680] */
    (xdc_Char)0x6c,  /* [681] */
    (xdc_Char)0x65,  /* [682] */
    (xdc_Char)0x64,  /* [683] */
    (xdc_Char)0x20,  /* [684] */
    (xdc_Char)0x66,  /* [685] */
    (xdc_Char)0x72,  /* [686] */
    (xdc_Char)0x6f,  /* [687] */
    (xdc_Char)0x6d,  /* [688] */
    (xdc_Char)0x20,  /* [689] */
    (xdc_Char)0x61,  /* [690] */
    (xdc_Char)0x20,  /* [691] */
    (xdc_Char)0x54,  /* [692] */
    (xdc_Char)0x61,  /* [693] */
    (xdc_Char)0x73,  /* [694] */
    (xdc_Char)0x6b,  /* [695] */
    (xdc_Char)0x2e,  /* [696] */
    (xdc_Char)0x0,  /* [697] */
    (xdc_Char)0x4d,  /* [698] */
    (xdc_Char)0x61,  /* [699] */
    (xdc_Char)0x69,  /* [700] */
    (xdc_Char)0x6c,  /* [701] */
    (xdc_Char)0x62,  /* [702] */
    (xdc_Char)0x6f,  /* [703] */
    (xdc_Char)0x78,  /* [704] */
    (xdc_Char)0x5f,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x72,  /* [707] */
    (xdc_Char)0x65,  /* [708] */
    (xdc_Char)0x61,  /* [709] */
    (xdc_Char)0x74,  /* [710] */
    (xdc_Char)0x65,  /* [711] */
    (xdc_Char)0x27,  /* [712] */
    (xdc_Char)0x73,  /* [713] */
    (xdc_Char)0x20,  /* [714] */
    (xdc_Char)0x62,  /* [715] */
    (xdc_Char)0x75,  /* [716] */
    (xdc_Char)0x66,  /* [717] */
    (xdc_Char)0x53,  /* [718] */
    (xdc_Char)0x69,  /* [719] */
    (xdc_Char)0x7a,  /* [720] */
    (xdc_Char)0x65,  /* [721] */
    (xdc_Char)0x20,  /* [722] */
    (xdc_Char)0x70,  /* [723] */
    (xdc_Char)0x61,  /* [724] */
    (xdc_Char)0x72,  /* [725] */
    (xdc_Char)0x61,  /* [726] */
    (xdc_Char)0x6d,  /* [727] */
    (xdc_Char)0x65,  /* [728] */
    (xdc_Char)0x74,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x72,  /* [731] */
    (xdc_Char)0x20,  /* [732] */
    (xdc_Char)0x69,  /* [733] */
    (xdc_Char)0x73,  /* [734] */
    (xdc_Char)0x20,  /* [735] */
    (xdc_Char)0x69,  /* [736] */
    (xdc_Char)0x6e,  /* [737] */
    (xdc_Char)0x76,  /* [738] */
    (xdc_Char)0x61,  /* [739] */
    (xdc_Char)0x6c,  /* [740] */
    (xdc_Char)0x69,  /* [741] */
    (xdc_Char)0x64,  /* [742] */
    (xdc_Char)0x20,  /* [743] */
    (xdc_Char)0x28,  /* [744] */
    (xdc_Char)0x74,  /* [745] */
    (xdc_Char)0x6f,  /* [746] */
    (xdc_Char)0x6f,  /* [747] */
    (xdc_Char)0x20,  /* [748] */
    (xdc_Char)0x73,  /* [749] */
    (xdc_Char)0x6d,  /* [750] */
    (xdc_Char)0x61,  /* [751] */
    (xdc_Char)0x6c,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x29,  /* [754] */
    (xdc_Char)0x0,  /* [755] */
    (xdc_Char)0x41,  /* [756] */
    (xdc_Char)0x5f,  /* [757] */
    (xdc_Char)0x6e,  /* [758] */
    (xdc_Char)0x6f,  /* [759] */
    (xdc_Char)0x45,  /* [760] */
    (xdc_Char)0x76,  /* [761] */
    (xdc_Char)0x65,  /* [762] */
    (xdc_Char)0x6e,  /* [763] */
    (xdc_Char)0x74,  /* [764] */
    (xdc_Char)0x73,  /* [765] */
    (xdc_Char)0x3a,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x54,  /* [768] */
    (xdc_Char)0x68,  /* [769] */
    (xdc_Char)0x65,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x45,  /* [772] */
    (xdc_Char)0x76,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x6e,  /* [775] */
    (xdc_Char)0x74,  /* [776] */
    (xdc_Char)0x2e,  /* [777] */
    (xdc_Char)0x73,  /* [778] */
    (xdc_Char)0x75,  /* [779] */
    (xdc_Char)0x70,  /* [780] */
    (xdc_Char)0x70,  /* [781] */
    (xdc_Char)0x6f,  /* [782] */
    (xdc_Char)0x72,  /* [783] */
    (xdc_Char)0x74,  /* [784] */
    (xdc_Char)0x73,  /* [785] */
    (xdc_Char)0x45,  /* [786] */
    (xdc_Char)0x76,  /* [787] */
    (xdc_Char)0x65,  /* [788] */
    (xdc_Char)0x6e,  /* [789] */
    (xdc_Char)0x74,  /* [790] */
    (xdc_Char)0x73,  /* [791] */
    (xdc_Char)0x20,  /* [792] */
    (xdc_Char)0x66,  /* [793] */
    (xdc_Char)0x6c,  /* [794] */
    (xdc_Char)0x61,  /* [795] */
    (xdc_Char)0x67,  /* [796] */
    (xdc_Char)0x20,  /* [797] */
    (xdc_Char)0x69,  /* [798] */
    (xdc_Char)0x73,  /* [799] */
    (xdc_Char)0x20,  /* [800] */
    (xdc_Char)0x64,  /* [801] */
    (xdc_Char)0x69,  /* [802] */
    (xdc_Char)0x73,  /* [803] */
    (xdc_Char)0x61,  /* [804] */
    (xdc_Char)0x62,  /* [805] */
    (xdc_Char)0x6c,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x64,  /* [808] */
    (xdc_Char)0x2e,  /* [809] */
    (xdc_Char)0x0,  /* [810] */
    (xdc_Char)0x41,  /* [811] */
    (xdc_Char)0x5f,  /* [812] */
    (xdc_Char)0x69,  /* [813] */
    (xdc_Char)0x6e,  /* [814] */
    (xdc_Char)0x76,  /* [815] */
    (xdc_Char)0x54,  /* [816] */
    (xdc_Char)0x69,  /* [817] */
    (xdc_Char)0x6d,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x6f,  /* [820] */
    (xdc_Char)0x75,  /* [821] */
    (xdc_Char)0x74,  /* [822] */
    (xdc_Char)0x3a,  /* [823] */
    (xdc_Char)0x20,  /* [824] */
    (xdc_Char)0x43,  /* [825] */
    (xdc_Char)0x61,  /* [826] */
    (xdc_Char)0x6e,  /* [827] */
    (xdc_Char)0x27,  /* [828] */
    (xdc_Char)0x74,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x75,  /* [831] */
    (xdc_Char)0x73,  /* [832] */
    (xdc_Char)0x65,  /* [833] */
    (xdc_Char)0x20,  /* [834] */
    (xdc_Char)0x42,  /* [835] */
    (xdc_Char)0x49,  /* [836] */
    (xdc_Char)0x4f,  /* [837] */
    (xdc_Char)0x53,  /* [838] */
    (xdc_Char)0x5f,  /* [839] */
    (xdc_Char)0x45,  /* [840] */
    (xdc_Char)0x56,  /* [841] */
    (xdc_Char)0x45,  /* [842] */
    (xdc_Char)0x4e,  /* [843] */
    (xdc_Char)0x54,  /* [844] */
    (xdc_Char)0x5f,  /* [845] */
    (xdc_Char)0x41,  /* [846] */
    (xdc_Char)0x43,  /* [847] */
    (xdc_Char)0x51,  /* [848] */
    (xdc_Char)0x55,  /* [849] */
    (xdc_Char)0x49,  /* [850] */
    (xdc_Char)0x52,  /* [851] */
    (xdc_Char)0x45,  /* [852] */
    (xdc_Char)0x44,  /* [853] */
    (xdc_Char)0x20,  /* [854] */
    (xdc_Char)0x77,  /* [855] */
    (xdc_Char)0x69,  /* [856] */
    (xdc_Char)0x74,  /* [857] */
    (xdc_Char)0x68,  /* [858] */
    (xdc_Char)0x20,  /* [859] */
    (xdc_Char)0x74,  /* [860] */
    (xdc_Char)0x68,  /* [861] */
    (xdc_Char)0x69,  /* [862] */
    (xdc_Char)0x73,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x53,  /* [865] */
    (xdc_Char)0x65,  /* [866] */
    (xdc_Char)0x6d,  /* [867] */
    (xdc_Char)0x61,  /* [868] */
    (xdc_Char)0x70,  /* [869] */
    (xdc_Char)0x68,  /* [870] */
    (xdc_Char)0x6f,  /* [871] */
    (xdc_Char)0x72,  /* [872] */
    (xdc_Char)0x65,  /* [873] */
    (xdc_Char)0x2e,  /* [874] */
    (xdc_Char)0x0,  /* [875] */
    (xdc_Char)0x41,  /* [876] */
    (xdc_Char)0x5f,  /* [877] */
    (xdc_Char)0x6f,  /* [878] */
    (xdc_Char)0x76,  /* [879] */
    (xdc_Char)0x65,  /* [880] */
    (xdc_Char)0x72,  /* [881] */
    (xdc_Char)0x66,  /* [882] */
    (xdc_Char)0x6c,  /* [883] */
    (xdc_Char)0x6f,  /* [884] */
    (xdc_Char)0x77,  /* [885] */
    (xdc_Char)0x3a,  /* [886] */
    (xdc_Char)0x20,  /* [887] */
    (xdc_Char)0x43,  /* [888] */
    (xdc_Char)0x6f,  /* [889] */
    (xdc_Char)0x75,  /* [890] */
    (xdc_Char)0x6e,  /* [891] */
    (xdc_Char)0x74,  /* [892] */
    (xdc_Char)0x20,  /* [893] */
    (xdc_Char)0x68,  /* [894] */
    (xdc_Char)0x61,  /* [895] */
    (xdc_Char)0x73,  /* [896] */
    (xdc_Char)0x20,  /* [897] */
    (xdc_Char)0x65,  /* [898] */
    (xdc_Char)0x78,  /* [899] */
    (xdc_Char)0x63,  /* [900] */
    (xdc_Char)0x65,  /* [901] */
    (xdc_Char)0x65,  /* [902] */
    (xdc_Char)0x64,  /* [903] */
    (xdc_Char)0x65,  /* [904] */
    (xdc_Char)0x64,  /* [905] */
    (xdc_Char)0x20,  /* [906] */
    (xdc_Char)0x36,  /* [907] */
    (xdc_Char)0x35,  /* [908] */
    (xdc_Char)0x35,  /* [909] */
    (xdc_Char)0x33,  /* [910] */
    (xdc_Char)0x35,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x61,  /* [913] */
    (xdc_Char)0x6e,  /* [914] */
    (xdc_Char)0x64,  /* [915] */
    (xdc_Char)0x20,  /* [916] */
    (xdc_Char)0x72,  /* [917] */
    (xdc_Char)0x6f,  /* [918] */
    (xdc_Char)0x6c,  /* [919] */
    (xdc_Char)0x6c,  /* [920] */
    (xdc_Char)0x65,  /* [921] */
    (xdc_Char)0x64,  /* [922] */
    (xdc_Char)0x20,  /* [923] */
    (xdc_Char)0x6f,  /* [924] */
    (xdc_Char)0x76,  /* [925] */
    (xdc_Char)0x65,  /* [926] */
    (xdc_Char)0x72,  /* [927] */
    (xdc_Char)0x2e,  /* [928] */
    (xdc_Char)0x0,  /* [929] */
    (xdc_Char)0x41,  /* [930] */
    (xdc_Char)0x5f,  /* [931] */
    (xdc_Char)0x73,  /* [932] */
    (xdc_Char)0x77,  /* [933] */
    (xdc_Char)0x69,  /* [934] */
    (xdc_Char)0x44,  /* [935] */
    (xdc_Char)0x69,  /* [936] */
    (xdc_Char)0x73,  /* [937] */
    (xdc_Char)0x61,  /* [938] */
    (xdc_Char)0x62,  /* [939] */
    (xdc_Char)0x6c,  /* [940] */
    (xdc_Char)0x65,  /* [941] */
    (xdc_Char)0x64,  /* [942] */
    (xdc_Char)0x3a,  /* [943] */
    (xdc_Char)0x20,  /* [944] */
    (xdc_Char)0x43,  /* [945] */
    (xdc_Char)0x61,  /* [946] */
    (xdc_Char)0x6e,  /* [947] */
    (xdc_Char)0x6e,  /* [948] */
    (xdc_Char)0x6f,  /* [949] */
    (xdc_Char)0x74,  /* [950] */
    (xdc_Char)0x20,  /* [951] */
    (xdc_Char)0x63,  /* [952] */
    (xdc_Char)0x72,  /* [953] */
    (xdc_Char)0x65,  /* [954] */
    (xdc_Char)0x61,  /* [955] */
    (xdc_Char)0x74,  /* [956] */
    (xdc_Char)0x65,  /* [957] */
    (xdc_Char)0x20,  /* [958] */
    (xdc_Char)0x61,  /* [959] */
    (xdc_Char)0x20,  /* [960] */
    (xdc_Char)0x53,  /* [961] */
    (xdc_Char)0x77,  /* [962] */
    (xdc_Char)0x69,  /* [963] */
    (xdc_Char)0x20,  /* [964] */
    (xdc_Char)0x77,  /* [965] */
    (xdc_Char)0x68,  /* [966] */
    (xdc_Char)0x65,  /* [967] */
    (xdc_Char)0x6e,  /* [968] */
    (xdc_Char)0x20,  /* [969] */
    (xdc_Char)0x53,  /* [970] */
    (xdc_Char)0x77,  /* [971] */
    (xdc_Char)0x69,  /* [972] */
    (xdc_Char)0x20,  /* [973] */
    (xdc_Char)0x69,  /* [974] */
    (xdc_Char)0x73,  /* [975] */
    (xdc_Char)0x20,  /* [976] */
    (xdc_Char)0x64,  /* [977] */
    (xdc_Char)0x69,  /* [978] */
    (xdc_Char)0x73,  /* [979] */
    (xdc_Char)0x61,  /* [980] */
    (xdc_Char)0x62,  /* [981] */
    (xdc_Char)0x6c,  /* [982] */
    (xdc_Char)0x65,  /* [983] */
    (xdc_Char)0x64,  /* [984] */
    (xdc_Char)0x2e,  /* [985] */
    (xdc_Char)0x0,  /* [986] */
    (xdc_Char)0x41,  /* [987] */
    (xdc_Char)0x5f,  /* [988] */
    (xdc_Char)0x62,  /* [989] */
    (xdc_Char)0x61,  /* [990] */
    (xdc_Char)0x64,  /* [991] */
    (xdc_Char)0x50,  /* [992] */
    (xdc_Char)0x72,  /* [993] */
    (xdc_Char)0x69,  /* [994] */
    (xdc_Char)0x6f,  /* [995] */
    (xdc_Char)0x72,  /* [996] */
    (xdc_Char)0x69,  /* [997] */
    (xdc_Char)0x74,  /* [998] */
    (xdc_Char)0x79,  /* [999] */
    (xdc_Char)0x3a,  /* [1000] */
    (xdc_Char)0x20,  /* [1001] */
    (xdc_Char)0x41,  /* [1002] */
    (xdc_Char)0x6e,  /* [1003] */
    (xdc_Char)0x20,  /* [1004] */
    (xdc_Char)0x69,  /* [1005] */
    (xdc_Char)0x6e,  /* [1006] */
    (xdc_Char)0x76,  /* [1007] */
    (xdc_Char)0x61,  /* [1008] */
    (xdc_Char)0x6c,  /* [1009] */
    (xdc_Char)0x69,  /* [1010] */
    (xdc_Char)0x64,  /* [1011] */
    (xdc_Char)0x20,  /* [1012] */
    (xdc_Char)0x53,  /* [1013] */
    (xdc_Char)0x77,  /* [1014] */
    (xdc_Char)0x69,  /* [1015] */
    (xdc_Char)0x20,  /* [1016] */
    (xdc_Char)0x70,  /* [1017] */
    (xdc_Char)0x72,  /* [1018] */
    (xdc_Char)0x69,  /* [1019] */
    (xdc_Char)0x6f,  /* [1020] */
    (xdc_Char)0x72,  /* [1021] */
    (xdc_Char)0x69,  /* [1022] */
    (xdc_Char)0x74,  /* [1023] */
    (xdc_Char)0x79,  /* [1024] */
    (xdc_Char)0x20,  /* [1025] */
    (xdc_Char)0x77,  /* [1026] */
    (xdc_Char)0x61,  /* [1027] */
    (xdc_Char)0x73,  /* [1028] */
    (xdc_Char)0x20,  /* [1029] */
    (xdc_Char)0x75,  /* [1030] */
    (xdc_Char)0x73,  /* [1031] */
    (xdc_Char)0x65,  /* [1032] */
    (xdc_Char)0x64,  /* [1033] */
    (xdc_Char)0x2e,  /* [1034] */
    (xdc_Char)0x0,  /* [1035] */
    (xdc_Char)0x41,  /* [1036] */
    (xdc_Char)0x5f,  /* [1037] */
    (xdc_Char)0x62,  /* [1038] */
    (xdc_Char)0x61,  /* [1039] */
    (xdc_Char)0x64,  /* [1040] */
    (xdc_Char)0x54,  /* [1041] */
    (xdc_Char)0x68,  /* [1042] */
    (xdc_Char)0x72,  /* [1043] */
    (xdc_Char)0x65,  /* [1044] */
    (xdc_Char)0x61,  /* [1045] */
    (xdc_Char)0x64,  /* [1046] */
    (xdc_Char)0x54,  /* [1047] */
    (xdc_Char)0x79,  /* [1048] */
    (xdc_Char)0x70,  /* [1049] */
    (xdc_Char)0x65,  /* [1050] */
    (xdc_Char)0x3a,  /* [1051] */
    (xdc_Char)0x20,  /* [1052] */
    (xdc_Char)0x43,  /* [1053] */
    (xdc_Char)0x61,  /* [1054] */
    (xdc_Char)0x6e,  /* [1055] */
    (xdc_Char)0x6e,  /* [1056] */
    (xdc_Char)0x6f,  /* [1057] */
    (xdc_Char)0x74,  /* [1058] */
    (xdc_Char)0x20,  /* [1059] */
    (xdc_Char)0x63,  /* [1060] */
    (xdc_Char)0x72,  /* [1061] */
    (xdc_Char)0x65,  /* [1062] */
    (xdc_Char)0x61,  /* [1063] */
    (xdc_Char)0x74,  /* [1064] */
    (xdc_Char)0x65,  /* [1065] */
    (xdc_Char)0x2f,  /* [1066] */
    (xdc_Char)0x64,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x6c,  /* [1069] */
    (xdc_Char)0x65,  /* [1070] */
    (xdc_Char)0x74,  /* [1071] */
    (xdc_Char)0x65,  /* [1072] */
    (xdc_Char)0x20,  /* [1073] */
    (xdc_Char)0x61,  /* [1074] */
    (xdc_Char)0x20,  /* [1075] */
    (xdc_Char)0x74,  /* [1076] */
    (xdc_Char)0x61,  /* [1077] */
    (xdc_Char)0x73,  /* [1078] */
    (xdc_Char)0x6b,  /* [1079] */
    (xdc_Char)0x20,  /* [1080] */
    (xdc_Char)0x66,  /* [1081] */
    (xdc_Char)0x72,  /* [1082] */
    (xdc_Char)0x6f,  /* [1083] */
    (xdc_Char)0x6d,  /* [1084] */
    (xdc_Char)0x20,  /* [1085] */
    (xdc_Char)0x48,  /* [1086] */
    (xdc_Char)0x77,  /* [1087] */
    (xdc_Char)0x69,  /* [1088] */
    (xdc_Char)0x20,  /* [1089] */
    (xdc_Char)0x6f,  /* [1090] */
    (xdc_Char)0x72,  /* [1091] */
    (xdc_Char)0x20,  /* [1092] */
    (xdc_Char)0x53,  /* [1093] */
    (xdc_Char)0x77,  /* [1094] */
    (xdc_Char)0x69,  /* [1095] */
    (xdc_Char)0x20,  /* [1096] */
    (xdc_Char)0x74,  /* [1097] */
    (xdc_Char)0x68,  /* [1098] */
    (xdc_Char)0x72,  /* [1099] */
    (xdc_Char)0x65,  /* [1100] */
    (xdc_Char)0x61,  /* [1101] */
    (xdc_Char)0x64,  /* [1102] */
    (xdc_Char)0x2e,  /* [1103] */
    (xdc_Char)0x0,  /* [1104] */
    (xdc_Char)0x41,  /* [1105] */
    (xdc_Char)0x5f,  /* [1106] */
    (xdc_Char)0x62,  /* [1107] */
    (xdc_Char)0x61,  /* [1108] */
    (xdc_Char)0x64,  /* [1109] */
    (xdc_Char)0x54,  /* [1110] */
    (xdc_Char)0x61,  /* [1111] */
    (xdc_Char)0x73,  /* [1112] */
    (xdc_Char)0x6b,  /* [1113] */
    (xdc_Char)0x53,  /* [1114] */
    (xdc_Char)0x74,  /* [1115] */
    (xdc_Char)0x61,  /* [1116] */
    (xdc_Char)0x74,  /* [1117] */
    (xdc_Char)0x65,  /* [1118] */
    (xdc_Char)0x3a,  /* [1119] */
    (xdc_Char)0x20,  /* [1120] */
    (xdc_Char)0x43,  /* [1121] */
    (xdc_Char)0x61,  /* [1122] */
    (xdc_Char)0x6e,  /* [1123] */
    (xdc_Char)0x27,  /* [1124] */
    (xdc_Char)0x74,  /* [1125] */
    (xdc_Char)0x20,  /* [1126] */
    (xdc_Char)0x64,  /* [1127] */
    (xdc_Char)0x65,  /* [1128] */
    (xdc_Char)0x6c,  /* [1129] */
    (xdc_Char)0x65,  /* [1130] */
    (xdc_Char)0x74,  /* [1131] */
    (xdc_Char)0x65,  /* [1132] */
    (xdc_Char)0x20,  /* [1133] */
    (xdc_Char)0x61,  /* [1134] */
    (xdc_Char)0x20,  /* [1135] */
    (xdc_Char)0x74,  /* [1136] */
    (xdc_Char)0x61,  /* [1137] */
    (xdc_Char)0x73,  /* [1138] */
    (xdc_Char)0x6b,  /* [1139] */
    (xdc_Char)0x20,  /* [1140] */
    (xdc_Char)0x69,  /* [1141] */
    (xdc_Char)0x6e,  /* [1142] */
    (xdc_Char)0x20,  /* [1143] */
    (xdc_Char)0x52,  /* [1144] */
    (xdc_Char)0x55,  /* [1145] */
    (xdc_Char)0x4e,  /* [1146] */
    (xdc_Char)0x4e,  /* [1147] */
    (xdc_Char)0x49,  /* [1148] */
    (xdc_Char)0x4e,  /* [1149] */
    (xdc_Char)0x47,  /* [1150] */
    (xdc_Char)0x20,  /* [1151] */
    (xdc_Char)0x73,  /* [1152] */
    (xdc_Char)0x74,  /* [1153] */
    (xdc_Char)0x61,  /* [1154] */
    (xdc_Char)0x74,  /* [1155] */
    (xdc_Char)0x65,  /* [1156] */
    (xdc_Char)0x2e,  /* [1157] */
    (xdc_Char)0x0,  /* [1158] */
    (xdc_Char)0x41,  /* [1159] */
    (xdc_Char)0x5f,  /* [1160] */
    (xdc_Char)0x6e,  /* [1161] */
    (xdc_Char)0x6f,  /* [1162] */
    (xdc_Char)0x50,  /* [1163] */
    (xdc_Char)0x65,  /* [1164] */
    (xdc_Char)0x6e,  /* [1165] */
    (xdc_Char)0x64,  /* [1166] */
    (xdc_Char)0x45,  /* [1167] */
    (xdc_Char)0x6c,  /* [1168] */
    (xdc_Char)0x65,  /* [1169] */
    (xdc_Char)0x6d,  /* [1170] */
    (xdc_Char)0x3a,  /* [1171] */
    (xdc_Char)0x20,  /* [1172] */
    (xdc_Char)0x4e,  /* [1173] */
    (xdc_Char)0x6f,  /* [1174] */
    (xdc_Char)0x74,  /* [1175] */
    (xdc_Char)0x20,  /* [1176] */
    (xdc_Char)0x65,  /* [1177] */
    (xdc_Char)0x6e,  /* [1178] */
    (xdc_Char)0x6f,  /* [1179] */
    (xdc_Char)0x75,  /* [1180] */
    (xdc_Char)0x67,  /* [1181] */
    (xdc_Char)0x68,  /* [1182] */
    (xdc_Char)0x20,  /* [1183] */
    (xdc_Char)0x69,  /* [1184] */
    (xdc_Char)0x6e,  /* [1185] */
    (xdc_Char)0x66,  /* [1186] */
    (xdc_Char)0x6f,  /* [1187] */
    (xdc_Char)0x20,  /* [1188] */
    (xdc_Char)0x74,  /* [1189] */
    (xdc_Char)0x6f,  /* [1190] */
    (xdc_Char)0x20,  /* [1191] */
    (xdc_Char)0x64,  /* [1192] */
    (xdc_Char)0x65,  /* [1193] */
    (xdc_Char)0x6c,  /* [1194] */
    (xdc_Char)0x65,  /* [1195] */
    (xdc_Char)0x74,  /* [1196] */
    (xdc_Char)0x65,  /* [1197] */
    (xdc_Char)0x20,  /* [1198] */
    (xdc_Char)0x42,  /* [1199] */
    (xdc_Char)0x4c,  /* [1200] */
    (xdc_Char)0x4f,  /* [1201] */
    (xdc_Char)0x43,  /* [1202] */
    (xdc_Char)0x4b,  /* [1203] */
    (xdc_Char)0x45,  /* [1204] */
    (xdc_Char)0x44,  /* [1205] */
    (xdc_Char)0x20,  /* [1206] */
    (xdc_Char)0x74,  /* [1207] */
    (xdc_Char)0x61,  /* [1208] */
    (xdc_Char)0x73,  /* [1209] */
    (xdc_Char)0x6b,  /* [1210] */
    (xdc_Char)0x2e,  /* [1211] */
    (xdc_Char)0x0,  /* [1212] */
    (xdc_Char)0x41,  /* [1213] */
    (xdc_Char)0x5f,  /* [1214] */
    (xdc_Char)0x74,  /* [1215] */
    (xdc_Char)0x61,  /* [1216] */
    (xdc_Char)0x73,  /* [1217] */
    (xdc_Char)0x6b,  /* [1218] */
    (xdc_Char)0x44,  /* [1219] */
    (xdc_Char)0x69,  /* [1220] */
    (xdc_Char)0x73,  /* [1221] */
    (xdc_Char)0x61,  /* [1222] */
    (xdc_Char)0x62,  /* [1223] */
    (xdc_Char)0x6c,  /* [1224] */
    (xdc_Char)0x65,  /* [1225] */
    (xdc_Char)0x64,  /* [1226] */
    (xdc_Char)0x3a,  /* [1227] */
    (xdc_Char)0x20,  /* [1228] */
    (xdc_Char)0x43,  /* [1229] */
    (xdc_Char)0x61,  /* [1230] */
    (xdc_Char)0x6e,  /* [1231] */
    (xdc_Char)0x6e,  /* [1232] */
    (xdc_Char)0x6f,  /* [1233] */
    (xdc_Char)0x74,  /* [1234] */
    (xdc_Char)0x20,  /* [1235] */
    (xdc_Char)0x63,  /* [1236] */
    (xdc_Char)0x72,  /* [1237] */
    (xdc_Char)0x65,  /* [1238] */
    (xdc_Char)0x61,  /* [1239] */
    (xdc_Char)0x74,  /* [1240] */
    (xdc_Char)0x65,  /* [1241] */
    (xdc_Char)0x20,  /* [1242] */
    (xdc_Char)0x61,  /* [1243] */
    (xdc_Char)0x20,  /* [1244] */
    (xdc_Char)0x74,  /* [1245] */
    (xdc_Char)0x61,  /* [1246] */
    (xdc_Char)0x73,  /* [1247] */
    (xdc_Char)0x6b,  /* [1248] */
    (xdc_Char)0x20,  /* [1249] */
    (xdc_Char)0x77,  /* [1250] */
    (xdc_Char)0x68,  /* [1251] */
    (xdc_Char)0x65,  /* [1252] */
    (xdc_Char)0x6e,  /* [1253] */
    (xdc_Char)0x20,  /* [1254] */
    (xdc_Char)0x74,  /* [1255] */
    (xdc_Char)0x61,  /* [1256] */
    (xdc_Char)0x73,  /* [1257] */
    (xdc_Char)0x6b,  /* [1258] */
    (xdc_Char)0x69,  /* [1259] */
    (xdc_Char)0x6e,  /* [1260] */
    (xdc_Char)0x67,  /* [1261] */
    (xdc_Char)0x20,  /* [1262] */
    (xdc_Char)0x69,  /* [1263] */
    (xdc_Char)0x73,  /* [1264] */
    (xdc_Char)0x20,  /* [1265] */
    (xdc_Char)0x64,  /* [1266] */
    (xdc_Char)0x69,  /* [1267] */
    (xdc_Char)0x73,  /* [1268] */
    (xdc_Char)0x61,  /* [1269] */
    (xdc_Char)0x62,  /* [1270] */
    (xdc_Char)0x6c,  /* [1271] */
    (xdc_Char)0x65,  /* [1272] */
    (xdc_Char)0x64,  /* [1273] */
    (xdc_Char)0x2e,  /* [1274] */
    (xdc_Char)0x0,  /* [1275] */
    (xdc_Char)0x41,  /* [1276] */
    (xdc_Char)0x5f,  /* [1277] */
    (xdc_Char)0x62,  /* [1278] */
    (xdc_Char)0x61,  /* [1279] */
    (xdc_Char)0x64,  /* [1280] */
    (xdc_Char)0x50,  /* [1281] */
    (xdc_Char)0x72,  /* [1282] */
    (xdc_Char)0x69,  /* [1283] */
    (xdc_Char)0x6f,  /* [1284] */
    (xdc_Char)0x72,  /* [1285] */
    (xdc_Char)0x69,  /* [1286] */
    (xdc_Char)0x74,  /* [1287] */
    (xdc_Char)0x79,  /* [1288] */
    (xdc_Char)0x3a,  /* [1289] */
    (xdc_Char)0x20,  /* [1290] */
    (xdc_Char)0x41,  /* [1291] */
    (xdc_Char)0x6e,  /* [1292] */
    (xdc_Char)0x20,  /* [1293] */
    (xdc_Char)0x69,  /* [1294] */
    (xdc_Char)0x6e,  /* [1295] */
    (xdc_Char)0x76,  /* [1296] */
    (xdc_Char)0x61,  /* [1297] */
    (xdc_Char)0x6c,  /* [1298] */
    (xdc_Char)0x69,  /* [1299] */
    (xdc_Char)0x64,  /* [1300] */
    (xdc_Char)0x20,  /* [1301] */
    (xdc_Char)0x74,  /* [1302] */
    (xdc_Char)0x61,  /* [1303] */
    (xdc_Char)0x73,  /* [1304] */
    (xdc_Char)0x6b,  /* [1305] */
    (xdc_Char)0x20,  /* [1306] */
    (xdc_Char)0x70,  /* [1307] */
    (xdc_Char)0x72,  /* [1308] */
    (xdc_Char)0x69,  /* [1309] */
    (xdc_Char)0x6f,  /* [1310] */
    (xdc_Char)0x72,  /* [1311] */
    (xdc_Char)0x69,  /* [1312] */
    (xdc_Char)0x74,  /* [1313] */
    (xdc_Char)0x79,  /* [1314] */
    (xdc_Char)0x20,  /* [1315] */
    (xdc_Char)0x77,  /* [1316] */
    (xdc_Char)0x61,  /* [1317] */
    (xdc_Char)0x73,  /* [1318] */
    (xdc_Char)0x20,  /* [1319] */
    (xdc_Char)0x75,  /* [1320] */
    (xdc_Char)0x73,  /* [1321] */
    (xdc_Char)0x65,  /* [1322] */
    (xdc_Char)0x64,  /* [1323] */
    (xdc_Char)0x2e,  /* [1324] */
    (xdc_Char)0x0,  /* [1325] */
    (xdc_Char)0x41,  /* [1326] */
    (xdc_Char)0x5f,  /* [1327] */
    (xdc_Char)0x62,  /* [1328] */
    (xdc_Char)0x61,  /* [1329] */
    (xdc_Char)0x64,  /* [1330] */
    (xdc_Char)0x54,  /* [1331] */
    (xdc_Char)0x69,  /* [1332] */
    (xdc_Char)0x6d,  /* [1333] */
    (xdc_Char)0x65,  /* [1334] */
    (xdc_Char)0x6f,  /* [1335] */
    (xdc_Char)0x75,  /* [1336] */
    (xdc_Char)0x74,  /* [1337] */
    (xdc_Char)0x3a,  /* [1338] */
    (xdc_Char)0x20,  /* [1339] */
    (xdc_Char)0x43,  /* [1340] */
    (xdc_Char)0x61,  /* [1341] */
    (xdc_Char)0x6e,  /* [1342] */
    (xdc_Char)0x27,  /* [1343] */
    (xdc_Char)0x74,  /* [1344] */
    (xdc_Char)0x20,  /* [1345] */
    (xdc_Char)0x73,  /* [1346] */
    (xdc_Char)0x6c,  /* [1347] */
    (xdc_Char)0x65,  /* [1348] */
    (xdc_Char)0x65,  /* [1349] */
    (xdc_Char)0x70,  /* [1350] */
    (xdc_Char)0x20,  /* [1351] */
    (xdc_Char)0x46,  /* [1352] */
    (xdc_Char)0x4f,  /* [1353] */
    (xdc_Char)0x52,  /* [1354] */
    (xdc_Char)0x45,  /* [1355] */
    (xdc_Char)0x56,  /* [1356] */
    (xdc_Char)0x45,  /* [1357] */
    (xdc_Char)0x52,  /* [1358] */
    (xdc_Char)0x2e,  /* [1359] */
    (xdc_Char)0x0,  /* [1360] */
    (xdc_Char)0x41,  /* [1361] */
    (xdc_Char)0x5f,  /* [1362] */
    (xdc_Char)0x62,  /* [1363] */
    (xdc_Char)0x61,  /* [1364] */
    (xdc_Char)0x64,  /* [1365] */
    (xdc_Char)0x41,  /* [1366] */
    (xdc_Char)0x66,  /* [1367] */
    (xdc_Char)0x66,  /* [1368] */
    (xdc_Char)0x69,  /* [1369] */
    (xdc_Char)0x6e,  /* [1370] */
    (xdc_Char)0x69,  /* [1371] */
    (xdc_Char)0x74,  /* [1372] */
    (xdc_Char)0x79,  /* [1373] */
    (xdc_Char)0x3a,  /* [1374] */
    (xdc_Char)0x20,  /* [1375] */
    (xdc_Char)0x49,  /* [1376] */
    (xdc_Char)0x6e,  /* [1377] */
    (xdc_Char)0x76,  /* [1378] */
    (xdc_Char)0x61,  /* [1379] */
    (xdc_Char)0x6c,  /* [1380] */
    (xdc_Char)0x69,  /* [1381] */
    (xdc_Char)0x64,  /* [1382] */
    (xdc_Char)0x20,  /* [1383] */
    (xdc_Char)0x61,  /* [1384] */
    (xdc_Char)0x66,  /* [1385] */
    (xdc_Char)0x66,  /* [1386] */
    (xdc_Char)0x69,  /* [1387] */
    (xdc_Char)0x6e,  /* [1388] */
    (xdc_Char)0x69,  /* [1389] */
    (xdc_Char)0x74,  /* [1390] */
    (xdc_Char)0x79,  /* [1391] */
    (xdc_Char)0x2e,  /* [1392] */
    (xdc_Char)0x0,  /* [1393] */
    (xdc_Char)0x41,  /* [1394] */
    (xdc_Char)0x5f,  /* [1395] */
    (xdc_Char)0x62,  /* [1396] */
    (xdc_Char)0x61,  /* [1397] */
    (xdc_Char)0x64,  /* [1398] */
    (xdc_Char)0x42,  /* [1399] */
    (xdc_Char)0x6c,  /* [1400] */
    (xdc_Char)0x6f,  /* [1401] */
    (xdc_Char)0x63,  /* [1402] */
    (xdc_Char)0x6b,  /* [1403] */
    (xdc_Char)0x4c,  /* [1404] */
    (xdc_Char)0x65,  /* [1405] */
    (xdc_Char)0x6e,  /* [1406] */
    (xdc_Char)0x67,  /* [1407] */
    (xdc_Char)0x74,  /* [1408] */
    (xdc_Char)0x68,  /* [1409] */
    (xdc_Char)0x3a,  /* [1410] */
    (xdc_Char)0x20,  /* [1411] */
    (xdc_Char)0x42,  /* [1412] */
    (xdc_Char)0x6c,  /* [1413] */
    (xdc_Char)0x6f,  /* [1414] */
    (xdc_Char)0x63,  /* [1415] */
    (xdc_Char)0x6b,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x6c,  /* [1418] */
    (xdc_Char)0x65,  /* [1419] */
    (xdc_Char)0x6e,  /* [1420] */
    (xdc_Char)0x67,  /* [1421] */
    (xdc_Char)0x74,  /* [1422] */
    (xdc_Char)0x68,  /* [1423] */
    (xdc_Char)0x20,  /* [1424] */
    (xdc_Char)0x74,  /* [1425] */
    (xdc_Char)0x6f,  /* [1426] */
    (xdc_Char)0x6f,  /* [1427] */
    (xdc_Char)0x20,  /* [1428] */
    (xdc_Char)0x6c,  /* [1429] */
    (xdc_Char)0x61,  /* [1430] */
    (xdc_Char)0x72,  /* [1431] */
    (xdc_Char)0x67,  /* [1432] */
    (xdc_Char)0x65,  /* [1433] */
    (xdc_Char)0x2e,  /* [1434] */
    (xdc_Char)0x20,  /* [1435] */
    (xdc_Char)0x4d,  /* [1436] */
    (xdc_Char)0x75,  /* [1437] */
    (xdc_Char)0x73,  /* [1438] */
    (xdc_Char)0x74,  /* [1439] */
    (xdc_Char)0x20,  /* [1440] */
    (xdc_Char)0x62,  /* [1441] */
    (xdc_Char)0x65,  /* [1442] */
    (xdc_Char)0x20,  /* [1443] */
    (xdc_Char)0x3c,  /* [1444] */
    (xdc_Char)0x3d,  /* [1445] */
    (xdc_Char)0x20,  /* [1446] */
    (xdc_Char)0x4c,  /* [1447] */
    (xdc_Char)0x32,  /* [1448] */
    (xdc_Char)0x20,  /* [1449] */
    (xdc_Char)0x77,  /* [1450] */
    (xdc_Char)0x61,  /* [1451] */
    (xdc_Char)0x79,  /* [1452] */
    (xdc_Char)0x20,  /* [1453] */
    (xdc_Char)0x73,  /* [1454] */
    (xdc_Char)0x69,  /* [1455] */
    (xdc_Char)0x7a,  /* [1456] */
    (xdc_Char)0x65,  /* [1457] */
    (xdc_Char)0x2e,  /* [1458] */
    (xdc_Char)0x0,  /* [1459] */
    (xdc_Char)0x41,  /* [1460] */
    (xdc_Char)0x5f,  /* [1461] */
    (xdc_Char)0x62,  /* [1462] */
    (xdc_Char)0x6c,  /* [1463] */
    (xdc_Char)0x6f,  /* [1464] */
    (xdc_Char)0x63,  /* [1465] */
    (xdc_Char)0x6b,  /* [1466] */
    (xdc_Char)0x43,  /* [1467] */
    (xdc_Char)0x72,  /* [1468] */
    (xdc_Char)0x6f,  /* [1469] */
    (xdc_Char)0x73,  /* [1470] */
    (xdc_Char)0x73,  /* [1471] */
    (xdc_Char)0x65,  /* [1472] */
    (xdc_Char)0x73,  /* [1473] */
    (xdc_Char)0x50,  /* [1474] */
    (xdc_Char)0x61,  /* [1475] */
    (xdc_Char)0x67,  /* [1476] */
    (xdc_Char)0x65,  /* [1477] */
    (xdc_Char)0x3a,  /* [1478] */
    (xdc_Char)0x20,  /* [1479] */
    (xdc_Char)0x4d,  /* [1480] */
    (xdc_Char)0x65,  /* [1481] */
    (xdc_Char)0x6d,  /* [1482] */
    (xdc_Char)0x6f,  /* [1483] */
    (xdc_Char)0x72,  /* [1484] */
    (xdc_Char)0x79,  /* [1485] */
    (xdc_Char)0x20,  /* [1486] */
    (xdc_Char)0x62,  /* [1487] */
    (xdc_Char)0x6c,  /* [1488] */
    (xdc_Char)0x6f,  /* [1489] */
    (xdc_Char)0x63,  /* [1490] */
    (xdc_Char)0x6b,  /* [1491] */
    (xdc_Char)0x20,  /* [1492] */
    (xdc_Char)0x63,  /* [1493] */
    (xdc_Char)0x72,  /* [1494] */
    (xdc_Char)0x6f,  /* [1495] */
    (xdc_Char)0x73,  /* [1496] */
    (xdc_Char)0x73,  /* [1497] */
    (xdc_Char)0x65,  /* [1498] */
    (xdc_Char)0x73,  /* [1499] */
    (xdc_Char)0x20,  /* [1500] */
    (xdc_Char)0x4c,  /* [1501] */
    (xdc_Char)0x32,  /* [1502] */
    (xdc_Char)0x20,  /* [1503] */
    (xdc_Char)0x77,  /* [1504] */
    (xdc_Char)0x61,  /* [1505] */
    (xdc_Char)0x79,  /* [1506] */
    (xdc_Char)0x20,  /* [1507] */
    (xdc_Char)0x70,  /* [1508] */
    (xdc_Char)0x61,  /* [1509] */
    (xdc_Char)0x67,  /* [1510] */
    (xdc_Char)0x65,  /* [1511] */
    (xdc_Char)0x20,  /* [1512] */
    (xdc_Char)0x62,  /* [1513] */
    (xdc_Char)0x6f,  /* [1514] */
    (xdc_Char)0x75,  /* [1515] */
    (xdc_Char)0x6e,  /* [1516] */
    (xdc_Char)0x64,  /* [1517] */
    (xdc_Char)0x61,  /* [1518] */
    (xdc_Char)0x72,  /* [1519] */
    (xdc_Char)0x79,  /* [1520] */
    (xdc_Char)0x2e,  /* [1521] */
    (xdc_Char)0x0,  /* [1522] */
    (xdc_Char)0x41,  /* [1523] */
    (xdc_Char)0x5f,  /* [1524] */
    (xdc_Char)0x6e,  /* [1525] */
    (xdc_Char)0x75,  /* [1526] */
    (xdc_Char)0x6c,  /* [1527] */
    (xdc_Char)0x6c,  /* [1528] */
    (xdc_Char)0x50,  /* [1529] */
    (xdc_Char)0x6f,  /* [1530] */
    (xdc_Char)0x69,  /* [1531] */
    (xdc_Char)0x6e,  /* [1532] */
    (xdc_Char)0x74,  /* [1533] */
    (xdc_Char)0x65,  /* [1534] */
    (xdc_Char)0x72,  /* [1535] */
    (xdc_Char)0x3a,  /* [1536] */
    (xdc_Char)0x20,  /* [1537] */
    (xdc_Char)0x50,  /* [1538] */
    (xdc_Char)0x6f,  /* [1539] */
    (xdc_Char)0x69,  /* [1540] */
    (xdc_Char)0x6e,  /* [1541] */
    (xdc_Char)0x74,  /* [1542] */
    (xdc_Char)0x65,  /* [1543] */
    (xdc_Char)0x72,  /* [1544] */
    (xdc_Char)0x20,  /* [1545] */
    (xdc_Char)0x69,  /* [1546] */
    (xdc_Char)0x73,  /* [1547] */
    (xdc_Char)0x20,  /* [1548] */
    (xdc_Char)0x6e,  /* [1549] */
    (xdc_Char)0x75,  /* [1550] */
    (xdc_Char)0x6c,  /* [1551] */
    (xdc_Char)0x6c,  /* [1552] */
    (xdc_Char)0x0,  /* [1553] */
    (xdc_Char)0x41,  /* [1554] */
    (xdc_Char)0x5f,  /* [1555] */
    (xdc_Char)0x75,  /* [1556] */
    (xdc_Char)0x6e,  /* [1557] */
    (xdc_Char)0x6b,  /* [1558] */
    (xdc_Char)0x6e,  /* [1559] */
    (xdc_Char)0x6f,  /* [1560] */
    (xdc_Char)0x77,  /* [1561] */
    (xdc_Char)0x6e,  /* [1562] */
    (xdc_Char)0x44,  /* [1563] */
    (xdc_Char)0x65,  /* [1564] */
    (xdc_Char)0x73,  /* [1565] */
    (xdc_Char)0x63,  /* [1566] */
    (xdc_Char)0x54,  /* [1567] */
    (xdc_Char)0x79,  /* [1568] */
    (xdc_Char)0x70,  /* [1569] */
    (xdc_Char)0x65,  /* [1570] */
    (xdc_Char)0x3a,  /* [1571] */
    (xdc_Char)0x20,  /* [1572] */
    (xdc_Char)0x44,  /* [1573] */
    (xdc_Char)0x65,  /* [1574] */
    (xdc_Char)0x73,  /* [1575] */
    (xdc_Char)0x63,  /* [1576] */
    (xdc_Char)0x72,  /* [1577] */
    (xdc_Char)0x69,  /* [1578] */
    (xdc_Char)0x70,  /* [1579] */
    (xdc_Char)0x74,  /* [1580] */
    (xdc_Char)0x6f,  /* [1581] */
    (xdc_Char)0x72,  /* [1582] */
    (xdc_Char)0x20,  /* [1583] */
    (xdc_Char)0x74,  /* [1584] */
    (xdc_Char)0x79,  /* [1585] */
    (xdc_Char)0x70,  /* [1586] */
    (xdc_Char)0x65,  /* [1587] */
    (xdc_Char)0x20,  /* [1588] */
    (xdc_Char)0x69,  /* [1589] */
    (xdc_Char)0x73,  /* [1590] */
    (xdc_Char)0x20,  /* [1591] */
    (xdc_Char)0x6e,  /* [1592] */
    (xdc_Char)0x6f,  /* [1593] */
    (xdc_Char)0x74,  /* [1594] */
    (xdc_Char)0x20,  /* [1595] */
    (xdc_Char)0x72,  /* [1596] */
    (xdc_Char)0x65,  /* [1597] */
    (xdc_Char)0x63,  /* [1598] */
    (xdc_Char)0x6f,  /* [1599] */
    (xdc_Char)0x67,  /* [1600] */
    (xdc_Char)0x6e,  /* [1601] */
    (xdc_Char)0x69,  /* [1602] */
    (xdc_Char)0x7a,  /* [1603] */
    (xdc_Char)0x65,  /* [1604] */
    (xdc_Char)0x64,  /* [1605] */
    (xdc_Char)0x0,  /* [1606] */
    (xdc_Char)0x41,  /* [1607] */
    (xdc_Char)0x5f,  /* [1608] */
    (xdc_Char)0x7a,  /* [1609] */
    (xdc_Char)0x65,  /* [1610] */
    (xdc_Char)0x72,  /* [1611] */
    (xdc_Char)0x6f,  /* [1612] */
    (xdc_Char)0x54,  /* [1613] */
    (xdc_Char)0x69,  /* [1614] */
    (xdc_Char)0x6d,  /* [1615] */
    (xdc_Char)0x65,  /* [1616] */
    (xdc_Char)0x6f,  /* [1617] */
    (xdc_Char)0x75,  /* [1618] */
    (xdc_Char)0x74,  /* [1619] */
    (xdc_Char)0x3a,  /* [1620] */
    (xdc_Char)0x20,  /* [1621] */
    (xdc_Char)0x54,  /* [1622] */
    (xdc_Char)0x69,  /* [1623] */
    (xdc_Char)0x6d,  /* [1624] */
    (xdc_Char)0x65,  /* [1625] */
    (xdc_Char)0x6f,  /* [1626] */
    (xdc_Char)0x75,  /* [1627] */
    (xdc_Char)0x74,  /* [1628] */
    (xdc_Char)0x20,  /* [1629] */
    (xdc_Char)0x76,  /* [1630] */
    (xdc_Char)0x61,  /* [1631] */
    (xdc_Char)0x6c,  /* [1632] */
    (xdc_Char)0x75,  /* [1633] */
    (xdc_Char)0x65,  /* [1634] */
    (xdc_Char)0x20,  /* [1635] */
    (xdc_Char)0x61,  /* [1636] */
    (xdc_Char)0x6e,  /* [1637] */
    (xdc_Char)0x6e,  /* [1638] */
    (xdc_Char)0x6f,  /* [1639] */
    (xdc_Char)0x74,  /* [1640] */
    (xdc_Char)0x20,  /* [1641] */
    (xdc_Char)0x62,  /* [1642] */
    (xdc_Char)0x65,  /* [1643] */
    (xdc_Char)0x20,  /* [1644] */
    (xdc_Char)0x7a,  /* [1645] */
    (xdc_Char)0x65,  /* [1646] */
    (xdc_Char)0x72,  /* [1647] */
    (xdc_Char)0x6f,  /* [1648] */
    (xdc_Char)0x0,  /* [1649] */
    (xdc_Char)0x41,  /* [1650] */
    (xdc_Char)0x5f,  /* [1651] */
    (xdc_Char)0x69,  /* [1652] */
    (xdc_Char)0x6e,  /* [1653] */
    (xdc_Char)0x76,  /* [1654] */
    (xdc_Char)0x61,  /* [1655] */
    (xdc_Char)0x6c,  /* [1656] */
    (xdc_Char)0x69,  /* [1657] */
    (xdc_Char)0x64,  /* [1658] */
    (xdc_Char)0x4b,  /* [1659] */
    (xdc_Char)0x65,  /* [1660] */
    (xdc_Char)0x79,  /* [1661] */
    (xdc_Char)0x3a,  /* [1662] */
    (xdc_Char)0x20,  /* [1663] */
    (xdc_Char)0x74,  /* [1664] */
    (xdc_Char)0x68,  /* [1665] */
    (xdc_Char)0x65,  /* [1666] */
    (xdc_Char)0x20,  /* [1667] */
    (xdc_Char)0x6b,  /* [1668] */
    (xdc_Char)0x65,  /* [1669] */
    (xdc_Char)0x79,  /* [1670] */
    (xdc_Char)0x20,  /* [1671] */
    (xdc_Char)0x6d,  /* [1672] */
    (xdc_Char)0x75,  /* [1673] */
    (xdc_Char)0x73,  /* [1674] */
    (xdc_Char)0x74,  /* [1675] */
    (xdc_Char)0x20,  /* [1676] */
    (xdc_Char)0x62,  /* [1677] */
    (xdc_Char)0x65,  /* [1678] */
    (xdc_Char)0x20,  /* [1679] */
    (xdc_Char)0x73,  /* [1680] */
    (xdc_Char)0x65,  /* [1681] */
    (xdc_Char)0x74,  /* [1682] */
    (xdc_Char)0x20,  /* [1683] */
    (xdc_Char)0x74,  /* [1684] */
    (xdc_Char)0x6f,  /* [1685] */
    (xdc_Char)0x20,  /* [1686] */
    (xdc_Char)0x61,  /* [1687] */
    (xdc_Char)0x20,  /* [1688] */
    (xdc_Char)0x6e,  /* [1689] */
    (xdc_Char)0x6f,  /* [1690] */
    (xdc_Char)0x6e,  /* [1691] */
    (xdc_Char)0x2d,  /* [1692] */
    (xdc_Char)0x64,  /* [1693] */
    (xdc_Char)0x65,  /* [1694] */
    (xdc_Char)0x66,  /* [1695] */
    (xdc_Char)0x61,  /* [1696] */
    (xdc_Char)0x75,  /* [1697] */
    (xdc_Char)0x6c,  /* [1698] */
    (xdc_Char)0x74,  /* [1699] */
    (xdc_Char)0x20,  /* [1700] */
    (xdc_Char)0x76,  /* [1701] */
    (xdc_Char)0x61,  /* [1702] */
    (xdc_Char)0x6c,  /* [1703] */
    (xdc_Char)0x75,  /* [1704] */
    (xdc_Char)0x65,  /* [1705] */
    (xdc_Char)0x0,  /* [1706] */
    (xdc_Char)0x41,  /* [1707] */
    (xdc_Char)0x5f,  /* [1708] */
    (xdc_Char)0x62,  /* [1709] */
    (xdc_Char)0x61,  /* [1710] */
    (xdc_Char)0x64,  /* [1711] */
    (xdc_Char)0x43,  /* [1712] */
    (xdc_Char)0x6f,  /* [1713] */
    (xdc_Char)0x6e,  /* [1714] */
    (xdc_Char)0x74,  /* [1715] */
    (xdc_Char)0x65,  /* [1716] */
    (xdc_Char)0x78,  /* [1717] */
    (xdc_Char)0x74,  /* [1718] */
    (xdc_Char)0x3a,  /* [1719] */
    (xdc_Char)0x20,  /* [1720] */
    (xdc_Char)0x62,  /* [1721] */
    (xdc_Char)0x61,  /* [1722] */
    (xdc_Char)0x64,  /* [1723] */
    (xdc_Char)0x20,  /* [1724] */
    (xdc_Char)0x63,  /* [1725] */
    (xdc_Char)0x61,  /* [1726] */
    (xdc_Char)0x6c,  /* [1727] */
    (xdc_Char)0x6c,  /* [1728] */
    (xdc_Char)0x69,  /* [1729] */
    (xdc_Char)0x6e,  /* [1730] */
    (xdc_Char)0x67,  /* [1731] */
    (xdc_Char)0x20,  /* [1732] */
    (xdc_Char)0x63,  /* [1733] */
    (xdc_Char)0x6f,  /* [1734] */
    (xdc_Char)0x6e,  /* [1735] */
    (xdc_Char)0x74,  /* [1736] */
    (xdc_Char)0x65,  /* [1737] */
    (xdc_Char)0x78,  /* [1738] */
    (xdc_Char)0x74,  /* [1739] */
    (xdc_Char)0x2e,  /* [1740] */
    (xdc_Char)0x20,  /* [1741] */
    (xdc_Char)0x4d,  /* [1742] */
    (xdc_Char)0x61,  /* [1743] */
    (xdc_Char)0x79,  /* [1744] */
    (xdc_Char)0x20,  /* [1745] */
    (xdc_Char)0x6e,  /* [1746] */
    (xdc_Char)0x6f,  /* [1747] */
    (xdc_Char)0x74,  /* [1748] */
    (xdc_Char)0x20,  /* [1749] */
    (xdc_Char)0x62,  /* [1750] */
    (xdc_Char)0x65,  /* [1751] */
    (xdc_Char)0x20,  /* [1752] */
    (xdc_Char)0x65,  /* [1753] */
    (xdc_Char)0x6e,  /* [1754] */
    (xdc_Char)0x74,  /* [1755] */
    (xdc_Char)0x65,  /* [1756] */
    (xdc_Char)0x72,  /* [1757] */
    (xdc_Char)0x65,  /* [1758] */
    (xdc_Char)0x64,  /* [1759] */
    (xdc_Char)0x20,  /* [1760] */
    (xdc_Char)0x66,  /* [1761] */
    (xdc_Char)0x72,  /* [1762] */
    (xdc_Char)0x6f,  /* [1763] */
    (xdc_Char)0x6d,  /* [1764] */
    (xdc_Char)0x20,  /* [1765] */
    (xdc_Char)0x61,  /* [1766] */
    (xdc_Char)0x20,  /* [1767] */
    (xdc_Char)0x68,  /* [1768] */
    (xdc_Char)0x61,  /* [1769] */
    (xdc_Char)0x72,  /* [1770] */
    (xdc_Char)0x64,  /* [1771] */
    (xdc_Char)0x77,  /* [1772] */
    (xdc_Char)0x61,  /* [1773] */
    (xdc_Char)0x72,  /* [1774] */
    (xdc_Char)0x65,  /* [1775] */
    (xdc_Char)0x20,  /* [1776] */
    (xdc_Char)0x69,  /* [1777] */
    (xdc_Char)0x6e,  /* [1778] */
    (xdc_Char)0x74,  /* [1779] */
    (xdc_Char)0x65,  /* [1780] */
    (xdc_Char)0x72,  /* [1781] */
    (xdc_Char)0x72,  /* [1782] */
    (xdc_Char)0x75,  /* [1783] */
    (xdc_Char)0x70,  /* [1784] */
    (xdc_Char)0x74,  /* [1785] */
    (xdc_Char)0x20,  /* [1786] */
    (xdc_Char)0x74,  /* [1787] */
    (xdc_Char)0x68,  /* [1788] */
    (xdc_Char)0x72,  /* [1789] */
    (xdc_Char)0x65,  /* [1790] */
    (xdc_Char)0x61,  /* [1791] */
    (xdc_Char)0x64,  /* [1792] */
    (xdc_Char)0x2e,  /* [1793] */
    (xdc_Char)0x0,  /* [1794] */
    (xdc_Char)0x41,  /* [1795] */
    (xdc_Char)0x5f,  /* [1796] */
    (xdc_Char)0x62,  /* [1797] */
    (xdc_Char)0x61,  /* [1798] */
    (xdc_Char)0x64,  /* [1799] */
    (xdc_Char)0x43,  /* [1800] */
    (xdc_Char)0x6f,  /* [1801] */
    (xdc_Char)0x6e,  /* [1802] */
    (xdc_Char)0x74,  /* [1803] */
    (xdc_Char)0x65,  /* [1804] */
    (xdc_Char)0x78,  /* [1805] */
    (xdc_Char)0x74,  /* [1806] */
    (xdc_Char)0x3a,  /* [1807] */
    (xdc_Char)0x20,  /* [1808] */
    (xdc_Char)0x62,  /* [1809] */
    (xdc_Char)0x61,  /* [1810] */
    (xdc_Char)0x64,  /* [1811] */
    (xdc_Char)0x20,  /* [1812] */
    (xdc_Char)0x63,  /* [1813] */
    (xdc_Char)0x61,  /* [1814] */
    (xdc_Char)0x6c,  /* [1815] */
    (xdc_Char)0x6c,  /* [1816] */
    (xdc_Char)0x69,  /* [1817] */
    (xdc_Char)0x6e,  /* [1818] */
    (xdc_Char)0x67,  /* [1819] */
    (xdc_Char)0x20,  /* [1820] */
    (xdc_Char)0x63,  /* [1821] */
    (xdc_Char)0x6f,  /* [1822] */
    (xdc_Char)0x6e,  /* [1823] */
    (xdc_Char)0x74,  /* [1824] */
    (xdc_Char)0x65,  /* [1825] */
    (xdc_Char)0x78,  /* [1826] */
    (xdc_Char)0x74,  /* [1827] */
    (xdc_Char)0x2e,  /* [1828] */
    (xdc_Char)0x20,  /* [1829] */
    (xdc_Char)0x4d,  /* [1830] */
    (xdc_Char)0x61,  /* [1831] */
    (xdc_Char)0x79,  /* [1832] */
    (xdc_Char)0x20,  /* [1833] */
    (xdc_Char)0x6e,  /* [1834] */
    (xdc_Char)0x6f,  /* [1835] */
    (xdc_Char)0x74,  /* [1836] */
    (xdc_Char)0x20,  /* [1837] */
    (xdc_Char)0x62,  /* [1838] */
    (xdc_Char)0x65,  /* [1839] */
    (xdc_Char)0x20,  /* [1840] */
    (xdc_Char)0x65,  /* [1841] */
    (xdc_Char)0x6e,  /* [1842] */
    (xdc_Char)0x74,  /* [1843] */
    (xdc_Char)0x65,  /* [1844] */
    (xdc_Char)0x72,  /* [1845] */
    (xdc_Char)0x65,  /* [1846] */
    (xdc_Char)0x64,  /* [1847] */
    (xdc_Char)0x20,  /* [1848] */
    (xdc_Char)0x66,  /* [1849] */
    (xdc_Char)0x72,  /* [1850] */
    (xdc_Char)0x6f,  /* [1851] */
    (xdc_Char)0x6d,  /* [1852] */
    (xdc_Char)0x20,  /* [1853] */
    (xdc_Char)0x61,  /* [1854] */
    (xdc_Char)0x20,  /* [1855] */
    (xdc_Char)0x73,  /* [1856] */
    (xdc_Char)0x6f,  /* [1857] */
    (xdc_Char)0x66,  /* [1858] */
    (xdc_Char)0x74,  /* [1859] */
    (xdc_Char)0x77,  /* [1860] */
    (xdc_Char)0x61,  /* [1861] */
    (xdc_Char)0x72,  /* [1862] */
    (xdc_Char)0x65,  /* [1863] */
    (xdc_Char)0x20,  /* [1864] */
    (xdc_Char)0x6f,  /* [1865] */
    (xdc_Char)0x72,  /* [1866] */
    (xdc_Char)0x20,  /* [1867] */
    (xdc_Char)0x68,  /* [1868] */
    (xdc_Char)0x61,  /* [1869] */
    (xdc_Char)0x72,  /* [1870] */
    (xdc_Char)0x64,  /* [1871] */
    (xdc_Char)0x77,  /* [1872] */
    (xdc_Char)0x61,  /* [1873] */
    (xdc_Char)0x72,  /* [1874] */
    (xdc_Char)0x65,  /* [1875] */
    (xdc_Char)0x20,  /* [1876] */
    (xdc_Char)0x69,  /* [1877] */
    (xdc_Char)0x6e,  /* [1878] */
    (xdc_Char)0x74,  /* [1879] */
    (xdc_Char)0x65,  /* [1880] */
    (xdc_Char)0x72,  /* [1881] */
    (xdc_Char)0x72,  /* [1882] */
    (xdc_Char)0x75,  /* [1883] */
    (xdc_Char)0x70,  /* [1884] */
    (xdc_Char)0x74,  /* [1885] */
    (xdc_Char)0x20,  /* [1886] */
    (xdc_Char)0x74,  /* [1887] */
    (xdc_Char)0x68,  /* [1888] */
    (xdc_Char)0x72,  /* [1889] */
    (xdc_Char)0x65,  /* [1890] */
    (xdc_Char)0x61,  /* [1891] */
    (xdc_Char)0x64,  /* [1892] */
    (xdc_Char)0x2e,  /* [1893] */
    (xdc_Char)0x0,  /* [1894] */
    (xdc_Char)0x41,  /* [1895] */
    (xdc_Char)0x5f,  /* [1896] */
    (xdc_Char)0x62,  /* [1897] */
    (xdc_Char)0x61,  /* [1898] */
    (xdc_Char)0x64,  /* [1899] */
    (xdc_Char)0x43,  /* [1900] */
    (xdc_Char)0x6f,  /* [1901] */
    (xdc_Char)0x6e,  /* [1902] */
    (xdc_Char)0x74,  /* [1903] */
    (xdc_Char)0x65,  /* [1904] */
    (xdc_Char)0x78,  /* [1905] */
    (xdc_Char)0x74,  /* [1906] */
    (xdc_Char)0x3a,  /* [1907] */
    (xdc_Char)0x20,  /* [1908] */
    (xdc_Char)0x62,  /* [1909] */
    (xdc_Char)0x61,  /* [1910] */
    (xdc_Char)0x64,  /* [1911] */
    (xdc_Char)0x20,  /* [1912] */
    (xdc_Char)0x63,  /* [1913] */
    (xdc_Char)0x61,  /* [1914] */
    (xdc_Char)0x6c,  /* [1915] */
    (xdc_Char)0x6c,  /* [1916] */
    (xdc_Char)0x69,  /* [1917] */
    (xdc_Char)0x6e,  /* [1918] */
    (xdc_Char)0x67,  /* [1919] */
    (xdc_Char)0x20,  /* [1920] */
    (xdc_Char)0x63,  /* [1921] */
    (xdc_Char)0x6f,  /* [1922] */
    (xdc_Char)0x6e,  /* [1923] */
    (xdc_Char)0x74,  /* [1924] */
    (xdc_Char)0x65,  /* [1925] */
    (xdc_Char)0x78,  /* [1926] */
    (xdc_Char)0x74,  /* [1927] */
    (xdc_Char)0x2e,  /* [1928] */
    (xdc_Char)0x20,  /* [1929] */
    (xdc_Char)0x53,  /* [1930] */
    (xdc_Char)0x65,  /* [1931] */
    (xdc_Char)0x65,  /* [1932] */
    (xdc_Char)0x20,  /* [1933] */
    (xdc_Char)0x47,  /* [1934] */
    (xdc_Char)0x61,  /* [1935] */
    (xdc_Char)0x74,  /* [1936] */
    (xdc_Char)0x65,  /* [1937] */
    (xdc_Char)0x4d,  /* [1938] */
    (xdc_Char)0x75,  /* [1939] */
    (xdc_Char)0x74,  /* [1940] */
    (xdc_Char)0x65,  /* [1941] */
    (xdc_Char)0x78,  /* [1942] */
    (xdc_Char)0x50,  /* [1943] */
    (xdc_Char)0x72,  /* [1944] */
    (xdc_Char)0x69,  /* [1945] */
    (xdc_Char)0x20,  /* [1946] */
    (xdc_Char)0x41,  /* [1947] */
    (xdc_Char)0x50,  /* [1948] */
    (xdc_Char)0x49,  /* [1949] */
    (xdc_Char)0x20,  /* [1950] */
    (xdc_Char)0x64,  /* [1951] */
    (xdc_Char)0x6f,  /* [1952] */
    (xdc_Char)0x63,  /* [1953] */
    (xdc_Char)0x20,  /* [1954] */
    (xdc_Char)0x66,  /* [1955] */
    (xdc_Char)0x6f,  /* [1956] */
    (xdc_Char)0x72,  /* [1957] */
    (xdc_Char)0x20,  /* [1958] */
    (xdc_Char)0x64,  /* [1959] */
    (xdc_Char)0x65,  /* [1960] */
    (xdc_Char)0x74,  /* [1961] */
    (xdc_Char)0x61,  /* [1962] */
    (xdc_Char)0x69,  /* [1963] */
    (xdc_Char)0x6c,  /* [1964] */
    (xdc_Char)0x73,  /* [1965] */
    (xdc_Char)0x2e,  /* [1966] */
    (xdc_Char)0x0,  /* [1967] */
    (xdc_Char)0x41,  /* [1968] */
    (xdc_Char)0x5f,  /* [1969] */
    (xdc_Char)0x62,  /* [1970] */
    (xdc_Char)0x61,  /* [1971] */
    (xdc_Char)0x64,  /* [1972] */
    (xdc_Char)0x43,  /* [1973] */
    (xdc_Char)0x6f,  /* [1974] */
    (xdc_Char)0x6e,  /* [1975] */
    (xdc_Char)0x74,  /* [1976] */
    (xdc_Char)0x65,  /* [1977] */
    (xdc_Char)0x78,  /* [1978] */
    (xdc_Char)0x74,  /* [1979] */
    (xdc_Char)0x3a,  /* [1980] */
    (xdc_Char)0x20,  /* [1981] */
    (xdc_Char)0x62,  /* [1982] */
    (xdc_Char)0x61,  /* [1983] */
    (xdc_Char)0x64,  /* [1984] */
    (xdc_Char)0x20,  /* [1985] */
    (xdc_Char)0x63,  /* [1986] */
    (xdc_Char)0x61,  /* [1987] */
    (xdc_Char)0x6c,  /* [1988] */
    (xdc_Char)0x6c,  /* [1989] */
    (xdc_Char)0x69,  /* [1990] */
    (xdc_Char)0x6e,  /* [1991] */
    (xdc_Char)0x67,  /* [1992] */
    (xdc_Char)0x20,  /* [1993] */
    (xdc_Char)0x63,  /* [1994] */
    (xdc_Char)0x6f,  /* [1995] */
    (xdc_Char)0x6e,  /* [1996] */
    (xdc_Char)0x74,  /* [1997] */
    (xdc_Char)0x65,  /* [1998] */
    (xdc_Char)0x78,  /* [1999] */
    (xdc_Char)0x74,  /* [2000] */
    (xdc_Char)0x2e,  /* [2001] */
    (xdc_Char)0x20,  /* [2002] */
    (xdc_Char)0x53,  /* [2003] */
    (xdc_Char)0x65,  /* [2004] */
    (xdc_Char)0x65,  /* [2005] */
    (xdc_Char)0x20,  /* [2006] */
    (xdc_Char)0x47,  /* [2007] */
    (xdc_Char)0x61,  /* [2008] */
    (xdc_Char)0x74,  /* [2009] */
    (xdc_Char)0x65,  /* [2010] */
    (xdc_Char)0x4d,  /* [2011] */
    (xdc_Char)0x75,  /* [2012] */
    (xdc_Char)0x74,  /* [2013] */
    (xdc_Char)0x65,  /* [2014] */
    (xdc_Char)0x78,  /* [2015] */
    (xdc_Char)0x20,  /* [2016] */
    (xdc_Char)0x41,  /* [2017] */
    (xdc_Char)0x50,  /* [2018] */
    (xdc_Char)0x49,  /* [2019] */
    (xdc_Char)0x20,  /* [2020] */
    (xdc_Char)0x64,  /* [2021] */
    (xdc_Char)0x6f,  /* [2022] */
    (xdc_Char)0x63,  /* [2023] */
    (xdc_Char)0x20,  /* [2024] */
    (xdc_Char)0x66,  /* [2025] */
    (xdc_Char)0x6f,  /* [2026] */
    (xdc_Char)0x72,  /* [2027] */
    (xdc_Char)0x20,  /* [2028] */
    (xdc_Char)0x64,  /* [2029] */
    (xdc_Char)0x65,  /* [2030] */
    (xdc_Char)0x74,  /* [2031] */
    (xdc_Char)0x61,  /* [2032] */
    (xdc_Char)0x69,  /* [2033] */
    (xdc_Char)0x6c,  /* [2034] */
    (xdc_Char)0x73,  /* [2035] */
    (xdc_Char)0x2e,  /* [2036] */
    (xdc_Char)0x0,  /* [2037] */
    (xdc_Char)0x41,  /* [2038] */
    (xdc_Char)0x5f,  /* [2039] */
    (xdc_Char)0x6e,  /* [2040] */
    (xdc_Char)0x6f,  /* [2041] */
    (xdc_Char)0x74,  /* [2042] */
    (xdc_Char)0x41,  /* [2043] */
    (xdc_Char)0x76,  /* [2044] */
    (xdc_Char)0x61,  /* [2045] */
    (xdc_Char)0x69,  /* [2046] */
    (xdc_Char)0x6c,  /* [2047] */
    (xdc_Char)0x61,  /* [2048] */
    (xdc_Char)0x62,  /* [2049] */
    (xdc_Char)0x6c,  /* [2050] */
    (xdc_Char)0x65,  /* [2051] */
    (xdc_Char)0x3a,  /* [2052] */
    (xdc_Char)0x20,  /* [2053] */
    (xdc_Char)0x73,  /* [2054] */
    (xdc_Char)0x74,  /* [2055] */
    (xdc_Char)0x61,  /* [2056] */
    (xdc_Char)0x74,  /* [2057] */
    (xdc_Char)0x69,  /* [2058] */
    (xdc_Char)0x63,  /* [2059] */
    (xdc_Char)0x61,  /* [2060] */
    (xdc_Char)0x6c,  /* [2061] */
    (xdc_Char)0x6c,  /* [2062] */
    (xdc_Char)0x79,  /* [2063] */
    (xdc_Char)0x20,  /* [2064] */
    (xdc_Char)0x63,  /* [2065] */
    (xdc_Char)0x72,  /* [2066] */
    (xdc_Char)0x65,  /* [2067] */
    (xdc_Char)0x61,  /* [2068] */
    (xdc_Char)0x74,  /* [2069] */
    (xdc_Char)0x65,  /* [2070] */
    (xdc_Char)0x64,  /* [2071] */
    (xdc_Char)0x20,  /* [2072] */
    (xdc_Char)0x74,  /* [2073] */
    (xdc_Char)0x69,  /* [2074] */
    (xdc_Char)0x6d,  /* [2075] */
    (xdc_Char)0x65,  /* [2076] */
    (xdc_Char)0x72,  /* [2077] */
    (xdc_Char)0x20,  /* [2078] */
    (xdc_Char)0x6e,  /* [2079] */
    (xdc_Char)0x6f,  /* [2080] */
    (xdc_Char)0x74,  /* [2081] */
    (xdc_Char)0x20,  /* [2082] */
    (xdc_Char)0x61,  /* [2083] */
    (xdc_Char)0x76,  /* [2084] */
    (xdc_Char)0x61,  /* [2085] */
    (xdc_Char)0x69,  /* [2086] */
    (xdc_Char)0x6c,  /* [2087] */
    (xdc_Char)0x61,  /* [2088] */
    (xdc_Char)0x62,  /* [2089] */
    (xdc_Char)0x6c,  /* [2090] */
    (xdc_Char)0x65,  /* [2091] */
    (xdc_Char)0x0,  /* [2092] */
    (xdc_Char)0x41,  /* [2093] */
    (xdc_Char)0x5f,  /* [2094] */
    (xdc_Char)0x62,  /* [2095] */
    (xdc_Char)0x61,  /* [2096] */
    (xdc_Char)0x64,  /* [2097] */
    (xdc_Char)0x45,  /* [2098] */
    (xdc_Char)0x76,  /* [2099] */
    (xdc_Char)0x65,  /* [2100] */
    (xdc_Char)0x58,  /* [2101] */
    (xdc_Char)0x62,  /* [2102] */
    (xdc_Char)0x61,  /* [2103] */
    (xdc_Char)0x72,  /* [2104] */
    (xdc_Char)0x49,  /* [2105] */
    (xdc_Char)0x6e,  /* [2106] */
    (xdc_Char)0x73,  /* [2107] */
    (xdc_Char)0x74,  /* [2108] */
    (xdc_Char)0x61,  /* [2109] */
    (xdc_Char)0x6e,  /* [2110] */
    (xdc_Char)0x63,  /* [2111] */
    (xdc_Char)0x65,  /* [2112] */
    (xdc_Char)0x4e,  /* [2113] */
    (xdc_Char)0x75,  /* [2114] */
    (xdc_Char)0x6d,  /* [2115] */
    (xdc_Char)0x3a,  /* [2116] */
    (xdc_Char)0x20,  /* [2117] */
    (xdc_Char)0x78,  /* [2118] */
    (xdc_Char)0x62,  /* [2119] */
    (xdc_Char)0x61,  /* [2120] */
    (xdc_Char)0x72,  /* [2121] */
    (xdc_Char)0x49,  /* [2122] */
    (xdc_Char)0x6e,  /* [2123] */
    (xdc_Char)0x73,  /* [2124] */
    (xdc_Char)0x74,  /* [2125] */
    (xdc_Char)0x61,  /* [2126] */
    (xdc_Char)0x6e,  /* [2127] */
    (xdc_Char)0x63,  /* [2128] */
    (xdc_Char)0x65,  /* [2129] */
    (xdc_Char)0x20,  /* [2130] */
    (xdc_Char)0x6d,  /* [2131] */
    (xdc_Char)0x75,  /* [2132] */
    (xdc_Char)0x73,  /* [2133] */
    (xdc_Char)0x74,  /* [2134] */
    (xdc_Char)0x20,  /* [2135] */
    (xdc_Char)0x62,  /* [2136] */
    (xdc_Char)0x65,  /* [2137] */
    (xdc_Char)0x20,  /* [2138] */
    (xdc_Char)0x3e,  /* [2139] */
    (xdc_Char)0x3d,  /* [2140] */
    (xdc_Char)0x20,  /* [2141] */
    (xdc_Char)0x31,  /* [2142] */
    (xdc_Char)0x20,  /* [2143] */
    (xdc_Char)0x61,  /* [2144] */
    (xdc_Char)0x6e,  /* [2145] */
    (xdc_Char)0x64,  /* [2146] */
    (xdc_Char)0x20,  /* [2147] */
    (xdc_Char)0x3c,  /* [2148] */
    (xdc_Char)0x3d,  /* [2149] */
    (xdc_Char)0x20,  /* [2150] */
    (xdc_Char)0x38,  /* [2151] */
    (xdc_Char)0x0,  /* [2152] */
    (xdc_Char)0x41,  /* [2153] */
    (xdc_Char)0x5f,  /* [2154] */
    (xdc_Char)0x62,  /* [2155] */
    (xdc_Char)0x61,  /* [2156] */
    (xdc_Char)0x64,  /* [2157] */
    (xdc_Char)0x44,  /* [2158] */
    (xdc_Char)0x73,  /* [2159] */
    (xdc_Char)0x70,  /* [2160] */
    (xdc_Char)0x58,  /* [2161] */
    (xdc_Char)0x62,  /* [2162] */
    (xdc_Char)0x61,  /* [2163] */
    (xdc_Char)0x72,  /* [2164] */
    (xdc_Char)0x49,  /* [2165] */
    (xdc_Char)0x6e,  /* [2166] */
    (xdc_Char)0x73,  /* [2167] */
    (xdc_Char)0x74,  /* [2168] */
    (xdc_Char)0x61,  /* [2169] */
    (xdc_Char)0x6e,  /* [2170] */
    (xdc_Char)0x63,  /* [2171] */
    (xdc_Char)0x65,  /* [2172] */
    (xdc_Char)0x4e,  /* [2173] */
    (xdc_Char)0x75,  /* [2174] */
    (xdc_Char)0x6d,  /* [2175] */
    (xdc_Char)0x3a,  /* [2176] */
    (xdc_Char)0x20,  /* [2177] */
    (xdc_Char)0x78,  /* [2178] */
    (xdc_Char)0x62,  /* [2179] */
    (xdc_Char)0x61,  /* [2180] */
    (xdc_Char)0x72,  /* [2181] */
    (xdc_Char)0x49,  /* [2182] */
    (xdc_Char)0x6e,  /* [2183] */
    (xdc_Char)0x73,  /* [2184] */
    (xdc_Char)0x74,  /* [2185] */
    (xdc_Char)0x61,  /* [2186] */
    (xdc_Char)0x6e,  /* [2187] */
    (xdc_Char)0x63,  /* [2188] */
    (xdc_Char)0x65,  /* [2189] */
    (xdc_Char)0x20,  /* [2190] */
    (xdc_Char)0x6d,  /* [2191] */
    (xdc_Char)0x75,  /* [2192] */
    (xdc_Char)0x73,  /* [2193] */
    (xdc_Char)0x74,  /* [2194] */
    (xdc_Char)0x20,  /* [2195] */
    (xdc_Char)0x62,  /* [2196] */
    (xdc_Char)0x65,  /* [2197] */
    (xdc_Char)0x20,  /* [2198] */
    (xdc_Char)0x3e,  /* [2199] */
    (xdc_Char)0x3d,  /* [2200] */
    (xdc_Char)0x20,  /* [2201] */
    (xdc_Char)0x31,  /* [2202] */
    (xdc_Char)0x20,  /* [2203] */
    (xdc_Char)0x61,  /* [2204] */
    (xdc_Char)0x6e,  /* [2205] */
    (xdc_Char)0x64,  /* [2206] */
    (xdc_Char)0x20,  /* [2207] */
    (xdc_Char)0x3c,  /* [2208] */
    (xdc_Char)0x3d,  /* [2209] */
    (xdc_Char)0x20,  /* [2210] */
    (xdc_Char)0x36,  /* [2211] */
    (xdc_Char)0x34,  /* [2212] */
    (xdc_Char)0x0,  /* [2213] */
    (xdc_Char)0x41,  /* [2214] */
    (xdc_Char)0x5f,  /* [2215] */
    (xdc_Char)0x62,  /* [2216] */
    (xdc_Char)0x61,  /* [2217] */
    (xdc_Char)0x64,  /* [2218] */
    (xdc_Char)0x42,  /* [2219] */
    (xdc_Char)0x65,  /* [2220] */
    (xdc_Char)0x6e,  /* [2221] */
    (xdc_Char)0x65,  /* [2222] */
    (xdc_Char)0x6c,  /* [2223] */
    (xdc_Char)0x6c,  /* [2224] */
    (xdc_Char)0x69,  /* [2225] */
    (xdc_Char)0x58,  /* [2226] */
    (xdc_Char)0x62,  /* [2227] */
    (xdc_Char)0x61,  /* [2228] */
    (xdc_Char)0x72,  /* [2229] */
    (xdc_Char)0x49,  /* [2230] */
    (xdc_Char)0x6e,  /* [2231] */
    (xdc_Char)0x73,  /* [2232] */
    (xdc_Char)0x74,  /* [2233] */
    (xdc_Char)0x61,  /* [2234] */
    (xdc_Char)0x6e,  /* [2235] */
    (xdc_Char)0x63,  /* [2236] */
    (xdc_Char)0x65,  /* [2237] */
    (xdc_Char)0x4e,  /* [2238] */
    (xdc_Char)0x75,  /* [2239] */
    (xdc_Char)0x6d,  /* [2240] */
    (xdc_Char)0x3a,  /* [2241] */
    (xdc_Char)0x20,  /* [2242] */
    (xdc_Char)0x78,  /* [2243] */
    (xdc_Char)0x62,  /* [2244] */
    (xdc_Char)0x61,  /* [2245] */
    (xdc_Char)0x72,  /* [2246] */
    (xdc_Char)0x49,  /* [2247] */
    (xdc_Char)0x6e,  /* [2248] */
    (xdc_Char)0x73,  /* [2249] */
    (xdc_Char)0x74,  /* [2250] */
    (xdc_Char)0x61,  /* [2251] */
    (xdc_Char)0x6e,  /* [2252] */
    (xdc_Char)0x63,  /* [2253] */
    (xdc_Char)0x65,  /* [2254] */
    (xdc_Char)0x20,  /* [2255] */
    (xdc_Char)0x6d,  /* [2256] */
    (xdc_Char)0x75,  /* [2257] */
    (xdc_Char)0x73,  /* [2258] */
    (xdc_Char)0x74,  /* [2259] */
    (xdc_Char)0x20,  /* [2260] */
    (xdc_Char)0x62,  /* [2261] */
    (xdc_Char)0x65,  /* [2262] */
    (xdc_Char)0x20,  /* [2263] */
    (xdc_Char)0x3e,  /* [2264] */
    (xdc_Char)0x3d,  /* [2265] */
    (xdc_Char)0x20,  /* [2266] */
    (xdc_Char)0x31,  /* [2267] */
    (xdc_Char)0x20,  /* [2268] */
    (xdc_Char)0x61,  /* [2269] */
    (xdc_Char)0x6e,  /* [2270] */
    (xdc_Char)0x64,  /* [2271] */
    (xdc_Char)0x20,  /* [2272] */
    (xdc_Char)0x3c,  /* [2273] */
    (xdc_Char)0x3d,  /* [2274] */
    (xdc_Char)0x20,  /* [2275] */
    (xdc_Char)0x35,  /* [2276] */
    (xdc_Char)0x37,  /* [2277] */
    (xdc_Char)0x0,  /* [2278] */
    (xdc_Char)0x41,  /* [2279] */
    (xdc_Char)0x5f,  /* [2280] */
    (xdc_Char)0x62,  /* [2281] */
    (xdc_Char)0x61,  /* [2282] */
    (xdc_Char)0x64,  /* [2283] */
    (xdc_Char)0x41,  /* [2284] */
    (xdc_Char)0x31,  /* [2285] */
    (xdc_Char)0x35,  /* [2286] */
    (xdc_Char)0x58,  /* [2287] */
    (xdc_Char)0x62,  /* [2288] */
    (xdc_Char)0x61,  /* [2289] */
    (xdc_Char)0x72,  /* [2290] */
    (xdc_Char)0x49,  /* [2291] */
    (xdc_Char)0x6e,  /* [2292] */
    (xdc_Char)0x73,  /* [2293] */
    (xdc_Char)0x74,  /* [2294] */
    (xdc_Char)0x61,  /* [2295] */
    (xdc_Char)0x6e,  /* [2296] */
    (xdc_Char)0x63,  /* [2297] */
    (xdc_Char)0x65,  /* [2298] */
    (xdc_Char)0x4e,  /* [2299] */
    (xdc_Char)0x75,  /* [2300] */
    (xdc_Char)0x6d,  /* [2301] */
    (xdc_Char)0x3a,  /* [2302] */
    (xdc_Char)0x20,  /* [2303] */
    (xdc_Char)0x78,  /* [2304] */
    (xdc_Char)0x62,  /* [2305] */
    (xdc_Char)0x61,  /* [2306] */
    (xdc_Char)0x72,  /* [2307] */
    (xdc_Char)0x49,  /* [2308] */
    (xdc_Char)0x6e,  /* [2309] */
    (xdc_Char)0x73,  /* [2310] */
    (xdc_Char)0x74,  /* [2311] */
    (xdc_Char)0x61,  /* [2312] */
    (xdc_Char)0x6e,  /* [2313] */
    (xdc_Char)0x63,  /* [2314] */
    (xdc_Char)0x65,  /* [2315] */
    (xdc_Char)0x20,  /* [2316] */
    (xdc_Char)0x6d,  /* [2317] */
    (xdc_Char)0x75,  /* [2318] */
    (xdc_Char)0x73,  /* [2319] */
    (xdc_Char)0x74,  /* [2320] */
    (xdc_Char)0x20,  /* [2321] */
    (xdc_Char)0x62,  /* [2322] */
    (xdc_Char)0x65,  /* [2323] */
    (xdc_Char)0x20,  /* [2324] */
    (xdc_Char)0x3e,  /* [2325] */
    (xdc_Char)0x3d,  /* [2326] */
    (xdc_Char)0x20,  /* [2327] */
    (xdc_Char)0x31,  /* [2328] */
    (xdc_Char)0x20,  /* [2329] */
    (xdc_Char)0x61,  /* [2330] */
    (xdc_Char)0x6e,  /* [2331] */
    (xdc_Char)0x64,  /* [2332] */
    (xdc_Char)0x20,  /* [2333] */
    (xdc_Char)0x3c,  /* [2334] */
    (xdc_Char)0x3d,  /* [2335] */
    (xdc_Char)0x20,  /* [2336] */
    (xdc_Char)0x31,  /* [2337] */
    (xdc_Char)0x35,  /* [2338] */
    (xdc_Char)0x32,  /* [2339] */
    (xdc_Char)0x0,  /* [2340] */
    (xdc_Char)0x41,  /* [2341] */
    (xdc_Char)0x5f,  /* [2342] */
    (xdc_Char)0x62,  /* [2343] */
    (xdc_Char)0x61,  /* [2344] */
    (xdc_Char)0x64,  /* [2345] */
    (xdc_Char)0x49,  /* [2346] */
    (xdc_Char)0x6e,  /* [2347] */
    (xdc_Char)0x74,  /* [2348] */
    (xdc_Char)0x53,  /* [2349] */
    (xdc_Char)0x6f,  /* [2350] */
    (xdc_Char)0x75,  /* [2351] */
    (xdc_Char)0x72,  /* [2352] */
    (xdc_Char)0x63,  /* [2353] */
    (xdc_Char)0x65,  /* [2354] */
    (xdc_Char)0x49,  /* [2355] */
    (xdc_Char)0x64,  /* [2356] */
    (xdc_Char)0x78,  /* [2357] */
    (xdc_Char)0x3a,  /* [2358] */
    (xdc_Char)0x20,  /* [2359] */
    (xdc_Char)0x69,  /* [2360] */
    (xdc_Char)0x6e,  /* [2361] */
    (xdc_Char)0x74,  /* [2362] */
    (xdc_Char)0x53,  /* [2363] */
    (xdc_Char)0x6f,  /* [2364] */
    (xdc_Char)0x75,  /* [2365] */
    (xdc_Char)0x72,  /* [2366] */
    (xdc_Char)0x63,  /* [2367] */
    (xdc_Char)0x65,  /* [2368] */
    (xdc_Char)0x20,  /* [2369] */
    (xdc_Char)0x6d,  /* [2370] */
    (xdc_Char)0x75,  /* [2371] */
    (xdc_Char)0x73,  /* [2372] */
    (xdc_Char)0x74,  /* [2373] */
    (xdc_Char)0x20,  /* [2374] */
    (xdc_Char)0x62,  /* [2375] */
    (xdc_Char)0x65,  /* [2376] */
    (xdc_Char)0x20,  /* [2377] */
    (xdc_Char)0x3c,  /* [2378] */
    (xdc_Char)0x3d,  /* [2379] */
    (xdc_Char)0x20,  /* [2380] */
    (xdc_Char)0x33,  /* [2381] */
    (xdc_Char)0x39,  /* [2382] */
    (xdc_Char)0x31,  /* [2383] */
    (xdc_Char)0x0,  /* [2384] */
    (xdc_Char)0x62,  /* [2385] */
    (xdc_Char)0x75,  /* [2386] */
    (xdc_Char)0x66,  /* [2387] */
    (xdc_Char)0x20,  /* [2388] */
    (xdc_Char)0x70,  /* [2389] */
    (xdc_Char)0x61,  /* [2390] */
    (xdc_Char)0x72,  /* [2391] */
    (xdc_Char)0x61,  /* [2392] */
    (xdc_Char)0x6d,  /* [2393] */
    (xdc_Char)0x65,  /* [2394] */
    (xdc_Char)0x74,  /* [2395] */
    (xdc_Char)0x65,  /* [2396] */
    (xdc_Char)0x72,  /* [2397] */
    (xdc_Char)0x20,  /* [2398] */
    (xdc_Char)0x63,  /* [2399] */
    (xdc_Char)0x61,  /* [2400] */
    (xdc_Char)0x6e,  /* [2401] */
    (xdc_Char)0x6e,  /* [2402] */
    (xdc_Char)0x6f,  /* [2403] */
    (xdc_Char)0x74,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x62,  /* [2406] */
    (xdc_Char)0x65,  /* [2407] */
    (xdc_Char)0x20,  /* [2408] */
    (xdc_Char)0x6e,  /* [2409] */
    (xdc_Char)0x75,  /* [2410] */
    (xdc_Char)0x6c,  /* [2411] */
    (xdc_Char)0x6c,  /* [2412] */
    (xdc_Char)0x0,  /* [2413] */
    (xdc_Char)0x62,  /* [2414] */
    (xdc_Char)0x75,  /* [2415] */
    (xdc_Char)0x66,  /* [2416] */
    (xdc_Char)0x20,  /* [2417] */
    (xdc_Char)0x6e,  /* [2418] */
    (xdc_Char)0x6f,  /* [2419] */
    (xdc_Char)0x74,  /* [2420] */
    (xdc_Char)0x20,  /* [2421] */
    (xdc_Char)0x70,  /* [2422] */
    (xdc_Char)0x72,  /* [2423] */
    (xdc_Char)0x6f,  /* [2424] */
    (xdc_Char)0x70,  /* [2425] */
    (xdc_Char)0x65,  /* [2426] */
    (xdc_Char)0x72,  /* [2427] */
    (xdc_Char)0x6c,  /* [2428] */
    (xdc_Char)0x79,  /* [2429] */
    (xdc_Char)0x20,  /* [2430] */
    (xdc_Char)0x61,  /* [2431] */
    (xdc_Char)0x6c,  /* [2432] */
    (xdc_Char)0x69,  /* [2433] */
    (xdc_Char)0x67,  /* [2434] */
    (xdc_Char)0x6e,  /* [2435] */
    (xdc_Char)0x65,  /* [2436] */
    (xdc_Char)0x64,  /* [2437] */
    (xdc_Char)0x0,  /* [2438] */
    (xdc_Char)0x61,  /* [2439] */
    (xdc_Char)0x6c,  /* [2440] */
    (xdc_Char)0x69,  /* [2441] */
    (xdc_Char)0x67,  /* [2442] */
    (xdc_Char)0x6e,  /* [2443] */
    (xdc_Char)0x20,  /* [2444] */
    (xdc_Char)0x70,  /* [2445] */
    (xdc_Char)0x61,  /* [2446] */
    (xdc_Char)0x72,  /* [2447] */
    (xdc_Char)0x61,  /* [2448] */
    (xdc_Char)0x6d,  /* [2449] */
    (xdc_Char)0x65,  /* [2450] */
    (xdc_Char)0x74,  /* [2451] */
    (xdc_Char)0x65,  /* [2452] */
    (xdc_Char)0x72,  /* [2453] */
    (xdc_Char)0x20,  /* [2454] */
    (xdc_Char)0x6d,  /* [2455] */
    (xdc_Char)0x75,  /* [2456] */
    (xdc_Char)0x73,  /* [2457] */
    (xdc_Char)0x74,  /* [2458] */
    (xdc_Char)0x20,  /* [2459] */
    (xdc_Char)0x62,  /* [2460] */
    (xdc_Char)0x65,  /* [2461] */
    (xdc_Char)0x20,  /* [2462] */
    (xdc_Char)0x30,  /* [2463] */
    (xdc_Char)0x20,  /* [2464] */
    (xdc_Char)0x6f,  /* [2465] */
    (xdc_Char)0x72,  /* [2466] */
    (xdc_Char)0x20,  /* [2467] */
    (xdc_Char)0x61,  /* [2468] */
    (xdc_Char)0x20,  /* [2469] */
    (xdc_Char)0x70,  /* [2470] */
    (xdc_Char)0x6f,  /* [2471] */
    (xdc_Char)0x77,  /* [2472] */
    (xdc_Char)0x65,  /* [2473] */
    (xdc_Char)0x72,  /* [2474] */
    (xdc_Char)0x20,  /* [2475] */
    (xdc_Char)0x6f,  /* [2476] */
    (xdc_Char)0x66,  /* [2477] */
    (xdc_Char)0x20,  /* [2478] */
    (xdc_Char)0x32,  /* [2479] */
    (xdc_Char)0x20,  /* [2480] */
    (xdc_Char)0x3e,  /* [2481] */
    (xdc_Char)0x3d,  /* [2482] */
    (xdc_Char)0x20,  /* [2483] */
    (xdc_Char)0x74,  /* [2484] */
    (xdc_Char)0x68,  /* [2485] */
    (xdc_Char)0x65,  /* [2486] */
    (xdc_Char)0x20,  /* [2487] */
    (xdc_Char)0x76,  /* [2488] */
    (xdc_Char)0x61,  /* [2489] */
    (xdc_Char)0x6c,  /* [2490] */
    (xdc_Char)0x75,  /* [2491] */
    (xdc_Char)0x65,  /* [2492] */
    (xdc_Char)0x20,  /* [2493] */
    (xdc_Char)0x6f,  /* [2494] */
    (xdc_Char)0x66,  /* [2495] */
    (xdc_Char)0x20,  /* [2496] */
    (xdc_Char)0x4d,  /* [2497] */
    (xdc_Char)0x65,  /* [2498] */
    (xdc_Char)0x6d,  /* [2499] */
    (xdc_Char)0x6f,  /* [2500] */
    (xdc_Char)0x72,  /* [2501] */
    (xdc_Char)0x79,  /* [2502] */
    (xdc_Char)0x5f,  /* [2503] */
    (xdc_Char)0x67,  /* [2504] */
    (xdc_Char)0x65,  /* [2505] */
    (xdc_Char)0x74,  /* [2506] */
    (xdc_Char)0x4d,  /* [2507] */
    (xdc_Char)0x61,  /* [2508] */
    (xdc_Char)0x78,  /* [2509] */
    (xdc_Char)0x44,  /* [2510] */
    (xdc_Char)0x65,  /* [2511] */
    (xdc_Char)0x66,  /* [2512] */
    (xdc_Char)0x61,  /* [2513] */
    (xdc_Char)0x75,  /* [2514] */
    (xdc_Char)0x6c,  /* [2515] */
    (xdc_Char)0x74,  /* [2516] */
    (xdc_Char)0x54,  /* [2517] */
    (xdc_Char)0x79,  /* [2518] */
    (xdc_Char)0x70,  /* [2519] */
    (xdc_Char)0x65,  /* [2520] */
    (xdc_Char)0x41,  /* [2521] */
    (xdc_Char)0x6c,  /* [2522] */
    (xdc_Char)0x69,  /* [2523] */
    (xdc_Char)0x67,  /* [2524] */
    (xdc_Char)0x6e,  /* [2525] */
    (xdc_Char)0x28,  /* [2526] */
    (xdc_Char)0x29,  /* [2527] */
    (xdc_Char)0x0,  /* [2528] */
    (xdc_Char)0x61,  /* [2529] */
    (xdc_Char)0x6c,  /* [2530] */
    (xdc_Char)0x69,  /* [2531] */
    (xdc_Char)0x67,  /* [2532] */
    (xdc_Char)0x6e,  /* [2533] */
    (xdc_Char)0x20,  /* [2534] */
    (xdc_Char)0x70,  /* [2535] */
    (xdc_Char)0x61,  /* [2536] */
    (xdc_Char)0x72,  /* [2537] */
    (xdc_Char)0x61,  /* [2538] */
    (xdc_Char)0x6d,  /* [2539] */
    (xdc_Char)0x65,  /* [2540] */
    (xdc_Char)0x74,  /* [2541] */
    (xdc_Char)0x65,  /* [2542] */
    (xdc_Char)0x72,  /* [2543] */
    (xdc_Char)0x20,  /* [2544] */
    (xdc_Char)0x31,  /* [2545] */
    (xdc_Char)0x29,  /* [2546] */
    (xdc_Char)0x20,  /* [2547] */
    (xdc_Char)0x6d,  /* [2548] */
    (xdc_Char)0x75,  /* [2549] */
    (xdc_Char)0x73,  /* [2550] */
    (xdc_Char)0x74,  /* [2551] */
    (xdc_Char)0x20,  /* [2552] */
    (xdc_Char)0x62,  /* [2553] */
    (xdc_Char)0x65,  /* [2554] */
    (xdc_Char)0x20,  /* [2555] */
    (xdc_Char)0x30,  /* [2556] */
    (xdc_Char)0x20,  /* [2557] */
    (xdc_Char)0x6f,  /* [2558] */
    (xdc_Char)0x72,  /* [2559] */
    (xdc_Char)0x20,  /* [2560] */
    (xdc_Char)0x61,  /* [2561] */
    (xdc_Char)0x20,  /* [2562] */
    (xdc_Char)0x70,  /* [2563] */
    (xdc_Char)0x6f,  /* [2564] */
    (xdc_Char)0x77,  /* [2565] */
    (xdc_Char)0x65,  /* [2566] */
    (xdc_Char)0x72,  /* [2567] */
    (xdc_Char)0x20,  /* [2568] */
    (xdc_Char)0x6f,  /* [2569] */
    (xdc_Char)0x66,  /* [2570] */
    (xdc_Char)0x20,  /* [2571] */
    (xdc_Char)0x32,  /* [2572] */
    (xdc_Char)0x20,  /* [2573] */
    (xdc_Char)0x61,  /* [2574] */
    (xdc_Char)0x6e,  /* [2575] */
    (xdc_Char)0x64,  /* [2576] */
    (xdc_Char)0x20,  /* [2577] */
    (xdc_Char)0x32,  /* [2578] */
    (xdc_Char)0x29,  /* [2579] */
    (xdc_Char)0x20,  /* [2580] */
    (xdc_Char)0x6e,  /* [2581] */
    (xdc_Char)0x6f,  /* [2582] */
    (xdc_Char)0x74,  /* [2583] */
    (xdc_Char)0x20,  /* [2584] */
    (xdc_Char)0x67,  /* [2585] */
    (xdc_Char)0x72,  /* [2586] */
    (xdc_Char)0x65,  /* [2587] */
    (xdc_Char)0x61,  /* [2588] */
    (xdc_Char)0x74,  /* [2589] */
    (xdc_Char)0x65,  /* [2590] */
    (xdc_Char)0x72,  /* [2591] */
    (xdc_Char)0x20,  /* [2592] */
    (xdc_Char)0x74,  /* [2593] */
    (xdc_Char)0x68,  /* [2594] */
    (xdc_Char)0x61,  /* [2595] */
    (xdc_Char)0x6e,  /* [2596] */
    (xdc_Char)0x20,  /* [2597] */
    (xdc_Char)0x74,  /* [2598] */
    (xdc_Char)0x68,  /* [2599] */
    (xdc_Char)0x65,  /* [2600] */
    (xdc_Char)0x20,  /* [2601] */
    (xdc_Char)0x68,  /* [2602] */
    (xdc_Char)0x65,  /* [2603] */
    (xdc_Char)0x61,  /* [2604] */
    (xdc_Char)0x70,  /* [2605] */
    (xdc_Char)0x73,  /* [2606] */
    (xdc_Char)0x20,  /* [2607] */
    (xdc_Char)0x61,  /* [2608] */
    (xdc_Char)0x6c,  /* [2609] */
    (xdc_Char)0x69,  /* [2610] */
    (xdc_Char)0x67,  /* [2611] */
    (xdc_Char)0x6e,  /* [2612] */
    (xdc_Char)0x6d,  /* [2613] */
    (xdc_Char)0x65,  /* [2614] */
    (xdc_Char)0x6e,  /* [2615] */
    (xdc_Char)0x74,  /* [2616] */
    (xdc_Char)0x0,  /* [2617] */
    (xdc_Char)0x62,  /* [2618] */
    (xdc_Char)0x6c,  /* [2619] */
    (xdc_Char)0x6f,  /* [2620] */
    (xdc_Char)0x63,  /* [2621] */
    (xdc_Char)0x6b,  /* [2622] */
    (xdc_Char)0x53,  /* [2623] */
    (xdc_Char)0x69,  /* [2624] */
    (xdc_Char)0x7a,  /* [2625] */
    (xdc_Char)0x65,  /* [2626] */
    (xdc_Char)0x20,  /* [2627] */
    (xdc_Char)0x63,  /* [2628] */
    (xdc_Char)0x61,  /* [2629] */
    (xdc_Char)0x6e,  /* [2630] */
    (xdc_Char)0x6e,  /* [2631] */
    (xdc_Char)0x6f,  /* [2632] */
    (xdc_Char)0x74,  /* [2633] */
    (xdc_Char)0x20,  /* [2634] */
    (xdc_Char)0x62,  /* [2635] */
    (xdc_Char)0x65,  /* [2636] */
    (xdc_Char)0x20,  /* [2637] */
    (xdc_Char)0x7a,  /* [2638] */
    (xdc_Char)0x65,  /* [2639] */
    (xdc_Char)0x72,  /* [2640] */
    (xdc_Char)0x6f,  /* [2641] */
    (xdc_Char)0x0,  /* [2642] */
    (xdc_Char)0x6e,  /* [2643] */
    (xdc_Char)0x75,  /* [2644] */
    (xdc_Char)0x6d,  /* [2645] */
    (xdc_Char)0x42,  /* [2646] */
    (xdc_Char)0x6c,  /* [2647] */
    (xdc_Char)0x6f,  /* [2648] */
    (xdc_Char)0x63,  /* [2649] */
    (xdc_Char)0x6b,  /* [2650] */
    (xdc_Char)0x73,  /* [2651] */
    (xdc_Char)0x20,  /* [2652] */
    (xdc_Char)0x63,  /* [2653] */
    (xdc_Char)0x61,  /* [2654] */
    (xdc_Char)0x6e,  /* [2655] */
    (xdc_Char)0x6e,  /* [2656] */
    (xdc_Char)0x6f,  /* [2657] */
    (xdc_Char)0x74,  /* [2658] */
    (xdc_Char)0x20,  /* [2659] */
    (xdc_Char)0x62,  /* [2660] */
    (xdc_Char)0x65,  /* [2661] */
    (xdc_Char)0x20,  /* [2662] */
    (xdc_Char)0x7a,  /* [2663] */
    (xdc_Char)0x65,  /* [2664] */
    (xdc_Char)0x72,  /* [2665] */
    (xdc_Char)0x6f,  /* [2666] */
    (xdc_Char)0x0,  /* [2667] */
    (xdc_Char)0x62,  /* [2668] */
    (xdc_Char)0x75,  /* [2669] */
    (xdc_Char)0x66,  /* [2670] */
    (xdc_Char)0x53,  /* [2671] */
    (xdc_Char)0x69,  /* [2672] */
    (xdc_Char)0x7a,  /* [2673] */
    (xdc_Char)0x65,  /* [2674] */
    (xdc_Char)0x20,  /* [2675] */
    (xdc_Char)0x63,  /* [2676] */
    (xdc_Char)0x61,  /* [2677] */
    (xdc_Char)0x6e,  /* [2678] */
    (xdc_Char)0x6e,  /* [2679] */
    (xdc_Char)0x6f,  /* [2680] */
    (xdc_Char)0x74,  /* [2681] */
    (xdc_Char)0x20,  /* [2682] */
    (xdc_Char)0x62,  /* [2683] */
    (xdc_Char)0x65,  /* [2684] */
    (xdc_Char)0x20,  /* [2685] */
    (xdc_Char)0x7a,  /* [2686] */
    (xdc_Char)0x65,  /* [2687] */
    (xdc_Char)0x72,  /* [2688] */
    (xdc_Char)0x6f,  /* [2689] */
    (xdc_Char)0x0,  /* [2690] */
    (xdc_Char)0x48,  /* [2691] */
    (xdc_Char)0x65,  /* [2692] */
    (xdc_Char)0x61,  /* [2693] */
    (xdc_Char)0x70,  /* [2694] */
    (xdc_Char)0x42,  /* [2695] */
    (xdc_Char)0x75,  /* [2696] */
    (xdc_Char)0x66,  /* [2697] */
    (xdc_Char)0x5f,  /* [2698] */
    (xdc_Char)0x63,  /* [2699] */
    (xdc_Char)0x72,  /* [2700] */
    (xdc_Char)0x65,  /* [2701] */
    (xdc_Char)0x61,  /* [2702] */
    (xdc_Char)0x74,  /* [2703] */
    (xdc_Char)0x65,  /* [2704] */
    (xdc_Char)0x27,  /* [2705] */
    (xdc_Char)0x73,  /* [2706] */
    (xdc_Char)0x20,  /* [2707] */
    (xdc_Char)0x62,  /* [2708] */
    (xdc_Char)0x75,  /* [2709] */
    (xdc_Char)0x66,  /* [2710] */
    (xdc_Char)0x53,  /* [2711] */
    (xdc_Char)0x69,  /* [2712] */
    (xdc_Char)0x7a,  /* [2713] */
    (xdc_Char)0x65,  /* [2714] */
    (xdc_Char)0x20,  /* [2715] */
    (xdc_Char)0x70,  /* [2716] */
    (xdc_Char)0x61,  /* [2717] */
    (xdc_Char)0x72,  /* [2718] */
    (xdc_Char)0x61,  /* [2719] */
    (xdc_Char)0x6d,  /* [2720] */
    (xdc_Char)0x65,  /* [2721] */
    (xdc_Char)0x74,  /* [2722] */
    (xdc_Char)0x65,  /* [2723] */
    (xdc_Char)0x72,  /* [2724] */
    (xdc_Char)0x20,  /* [2725] */
    (xdc_Char)0x69,  /* [2726] */
    (xdc_Char)0x73,  /* [2727] */
    (xdc_Char)0x20,  /* [2728] */
    (xdc_Char)0x69,  /* [2729] */
    (xdc_Char)0x6e,  /* [2730] */
    (xdc_Char)0x76,  /* [2731] */
    (xdc_Char)0x61,  /* [2732] */
    (xdc_Char)0x6c,  /* [2733] */
    (xdc_Char)0x69,  /* [2734] */
    (xdc_Char)0x64,  /* [2735] */
    (xdc_Char)0x20,  /* [2736] */
    (xdc_Char)0x28,  /* [2737] */
    (xdc_Char)0x74,  /* [2738] */
    (xdc_Char)0x6f,  /* [2739] */
    (xdc_Char)0x6f,  /* [2740] */
    (xdc_Char)0x20,  /* [2741] */
    (xdc_Char)0x73,  /* [2742] */
    (xdc_Char)0x6d,  /* [2743] */
    (xdc_Char)0x61,  /* [2744] */
    (xdc_Char)0x6c,  /* [2745] */
    (xdc_Char)0x6c,  /* [2746] */
    (xdc_Char)0x29,  /* [2747] */
    (xdc_Char)0x0,  /* [2748] */
    (xdc_Char)0x43,  /* [2749] */
    (xdc_Char)0x61,  /* [2750] */
    (xdc_Char)0x6e,  /* [2751] */
    (xdc_Char)0x6e,  /* [2752] */
    (xdc_Char)0x6f,  /* [2753] */
    (xdc_Char)0x74,  /* [2754] */
    (xdc_Char)0x20,  /* [2755] */
    (xdc_Char)0x63,  /* [2756] */
    (xdc_Char)0x61,  /* [2757] */
    (xdc_Char)0x6c,  /* [2758] */
    (xdc_Char)0x6c,  /* [2759] */
    (xdc_Char)0x20,  /* [2760] */
    (xdc_Char)0x48,  /* [2761] */
    (xdc_Char)0x65,  /* [2762] */
    (xdc_Char)0x61,  /* [2763] */
    (xdc_Char)0x70,  /* [2764] */
    (xdc_Char)0x42,  /* [2765] */
    (xdc_Char)0x75,  /* [2766] */
    (xdc_Char)0x66,  /* [2767] */
    (xdc_Char)0x5f,  /* [2768] */
    (xdc_Char)0x66,  /* [2769] */
    (xdc_Char)0x72,  /* [2770] */
    (xdc_Char)0x65,  /* [2771] */
    (xdc_Char)0x65,  /* [2772] */
    (xdc_Char)0x20,  /* [2773] */
    (xdc_Char)0x77,  /* [2774] */
    (xdc_Char)0x68,  /* [2775] */
    (xdc_Char)0x65,  /* [2776] */
    (xdc_Char)0x6e,  /* [2777] */
    (xdc_Char)0x20,  /* [2778] */
    (xdc_Char)0x6e,  /* [2779] */
    (xdc_Char)0x6f,  /* [2780] */
    (xdc_Char)0x20,  /* [2781] */
    (xdc_Char)0x62,  /* [2782] */
    (xdc_Char)0x6c,  /* [2783] */
    (xdc_Char)0x6f,  /* [2784] */
    (xdc_Char)0x63,  /* [2785] */
    (xdc_Char)0x6b,  /* [2786] */
    (xdc_Char)0x73,  /* [2787] */
    (xdc_Char)0x20,  /* [2788] */
    (xdc_Char)0x68,  /* [2789] */
    (xdc_Char)0x61,  /* [2790] */
    (xdc_Char)0x76,  /* [2791] */
    (xdc_Char)0x65,  /* [2792] */
    (xdc_Char)0x20,  /* [2793] */
    (xdc_Char)0x62,  /* [2794] */
    (xdc_Char)0x65,  /* [2795] */
    (xdc_Char)0x65,  /* [2796] */
    (xdc_Char)0x6e,  /* [2797] */
    (xdc_Char)0x20,  /* [2798] */
    (xdc_Char)0x61,  /* [2799] */
    (xdc_Char)0x6c,  /* [2800] */
    (xdc_Char)0x6c,  /* [2801] */
    (xdc_Char)0x6f,  /* [2802] */
    (xdc_Char)0x63,  /* [2803] */
    (xdc_Char)0x61,  /* [2804] */
    (xdc_Char)0x74,  /* [2805] */
    (xdc_Char)0x65,  /* [2806] */
    (xdc_Char)0x64,  /* [2807] */
    (xdc_Char)0x0,  /* [2808] */
    (xdc_Char)0x41,  /* [2809] */
    (xdc_Char)0x5f,  /* [2810] */
    (xdc_Char)0x69,  /* [2811] */
    (xdc_Char)0x6e,  /* [2812] */
    (xdc_Char)0x76,  /* [2813] */
    (xdc_Char)0x61,  /* [2814] */
    (xdc_Char)0x6c,  /* [2815] */
    (xdc_Char)0x69,  /* [2816] */
    (xdc_Char)0x64,  /* [2817] */
    (xdc_Char)0x46,  /* [2818] */
    (xdc_Char)0x72,  /* [2819] */
    (xdc_Char)0x65,  /* [2820] */
    (xdc_Char)0x65,  /* [2821] */
    (xdc_Char)0x3a,  /* [2822] */
    (xdc_Char)0x20,  /* [2823] */
    (xdc_Char)0x49,  /* [2824] */
    (xdc_Char)0x6e,  /* [2825] */
    (xdc_Char)0x76,  /* [2826] */
    (xdc_Char)0x61,  /* [2827] */
    (xdc_Char)0x6c,  /* [2828] */
    (xdc_Char)0x69,  /* [2829] */
    (xdc_Char)0x64,  /* [2830] */
    (xdc_Char)0x20,  /* [2831] */
    (xdc_Char)0x66,  /* [2832] */
    (xdc_Char)0x72,  /* [2833] */
    (xdc_Char)0x65,  /* [2834] */
    (xdc_Char)0x65,  /* [2835] */
    (xdc_Char)0x0,  /* [2836] */
    (xdc_Char)0x41,  /* [2837] */
    (xdc_Char)0x5f,  /* [2838] */
    (xdc_Char)0x7a,  /* [2839] */
    (xdc_Char)0x65,  /* [2840] */
    (xdc_Char)0x72,  /* [2841] */
    (xdc_Char)0x6f,  /* [2842] */
    (xdc_Char)0x42,  /* [2843] */
    (xdc_Char)0x6c,  /* [2844] */
    (xdc_Char)0x6f,  /* [2845] */
    (xdc_Char)0x63,  /* [2846] */
    (xdc_Char)0x6b,  /* [2847] */
    (xdc_Char)0x3a,  /* [2848] */
    (xdc_Char)0x20,  /* [2849] */
    (xdc_Char)0x43,  /* [2850] */
    (xdc_Char)0x61,  /* [2851] */
    (xdc_Char)0x6e,  /* [2852] */
    (xdc_Char)0x6e,  /* [2853] */
    (xdc_Char)0x6f,  /* [2854] */
    (xdc_Char)0x74,  /* [2855] */
    (xdc_Char)0x20,  /* [2856] */
    (xdc_Char)0x61,  /* [2857] */
    (xdc_Char)0x6c,  /* [2858] */
    (xdc_Char)0x6c,  /* [2859] */
    (xdc_Char)0x6f,  /* [2860] */
    (xdc_Char)0x63,  /* [2861] */
    (xdc_Char)0x61,  /* [2862] */
    (xdc_Char)0x74,  /* [2863] */
    (xdc_Char)0x65,  /* [2864] */
    (xdc_Char)0x20,  /* [2865] */
    (xdc_Char)0x73,  /* [2866] */
    (xdc_Char)0x69,  /* [2867] */
    (xdc_Char)0x7a,  /* [2868] */
    (xdc_Char)0x65,  /* [2869] */
    (xdc_Char)0x20,  /* [2870] */
    (xdc_Char)0x30,  /* [2871] */
    (xdc_Char)0x0,  /* [2872] */
    (xdc_Char)0x41,  /* [2873] */
    (xdc_Char)0x5f,  /* [2874] */
    (xdc_Char)0x68,  /* [2875] */
    (xdc_Char)0x65,  /* [2876] */
    (xdc_Char)0x61,  /* [2877] */
    (xdc_Char)0x70,  /* [2878] */
    (xdc_Char)0x53,  /* [2879] */
    (xdc_Char)0x69,  /* [2880] */
    (xdc_Char)0x7a,  /* [2881] */
    (xdc_Char)0x65,  /* [2882] */
    (xdc_Char)0x3a,  /* [2883] */
    (xdc_Char)0x20,  /* [2884] */
    (xdc_Char)0x52,  /* [2885] */
    (xdc_Char)0x65,  /* [2886] */
    (xdc_Char)0x71,  /* [2887] */
    (xdc_Char)0x75,  /* [2888] */
    (xdc_Char)0x65,  /* [2889] */
    (xdc_Char)0x73,  /* [2890] */
    (xdc_Char)0x74,  /* [2891] */
    (xdc_Char)0x65,  /* [2892] */
    (xdc_Char)0x64,  /* [2893] */
    (xdc_Char)0x20,  /* [2894] */
    (xdc_Char)0x68,  /* [2895] */
    (xdc_Char)0x65,  /* [2896] */
    (xdc_Char)0x61,  /* [2897] */
    (xdc_Char)0x70,  /* [2898] */
    (xdc_Char)0x20,  /* [2899] */
    (xdc_Char)0x73,  /* [2900] */
    (xdc_Char)0x69,  /* [2901] */
    (xdc_Char)0x7a,  /* [2902] */
    (xdc_Char)0x65,  /* [2903] */
    (xdc_Char)0x20,  /* [2904] */
    (xdc_Char)0x69,  /* [2905] */
    (xdc_Char)0x73,  /* [2906] */
    (xdc_Char)0x20,  /* [2907] */
    (xdc_Char)0x74,  /* [2908] */
    (xdc_Char)0x6f,  /* [2909] */
    (xdc_Char)0x6f,  /* [2910] */
    (xdc_Char)0x20,  /* [2911] */
    (xdc_Char)0x73,  /* [2912] */
    (xdc_Char)0x6d,  /* [2913] */
    (xdc_Char)0x61,  /* [2914] */
    (xdc_Char)0x6c,  /* [2915] */
    (xdc_Char)0x6c,  /* [2916] */
    (xdc_Char)0x0,  /* [2917] */
    (xdc_Char)0x41,  /* [2918] */
    (xdc_Char)0x5f,  /* [2919] */
    (xdc_Char)0x61,  /* [2920] */
    (xdc_Char)0x6c,  /* [2921] */
    (xdc_Char)0x69,  /* [2922] */
    (xdc_Char)0x67,  /* [2923] */
    (xdc_Char)0x6e,  /* [2924] */
    (xdc_Char)0x3a,  /* [2925] */
    (xdc_Char)0x20,  /* [2926] */
    (xdc_Char)0x52,  /* [2927] */
    (xdc_Char)0x65,  /* [2928] */
    (xdc_Char)0x71,  /* [2929] */
    (xdc_Char)0x75,  /* [2930] */
    (xdc_Char)0x65,  /* [2931] */
    (xdc_Char)0x73,  /* [2932] */
    (xdc_Char)0x74,  /* [2933] */
    (xdc_Char)0x65,  /* [2934] */
    (xdc_Char)0x64,  /* [2935] */
    (xdc_Char)0x20,  /* [2936] */
    (xdc_Char)0x61,  /* [2937] */
    (xdc_Char)0x6c,  /* [2938] */
    (xdc_Char)0x69,  /* [2939] */
    (xdc_Char)0x67,  /* [2940] */
    (xdc_Char)0x6e,  /* [2941] */
    (xdc_Char)0x20,  /* [2942] */
    (xdc_Char)0x69,  /* [2943] */
    (xdc_Char)0x73,  /* [2944] */
    (xdc_Char)0x20,  /* [2945] */
    (xdc_Char)0x6e,  /* [2946] */
    (xdc_Char)0x6f,  /* [2947] */
    (xdc_Char)0x74,  /* [2948] */
    (xdc_Char)0x20,  /* [2949] */
    (xdc_Char)0x61,  /* [2950] */
    (xdc_Char)0x20,  /* [2951] */
    (xdc_Char)0x70,  /* [2952] */
    (xdc_Char)0x6f,  /* [2953] */
    (xdc_Char)0x77,  /* [2954] */
    (xdc_Char)0x65,  /* [2955] */
    (xdc_Char)0x72,  /* [2956] */
    (xdc_Char)0x20,  /* [2957] */
    (xdc_Char)0x6f,  /* [2958] */
    (xdc_Char)0x66,  /* [2959] */
    (xdc_Char)0x20,  /* [2960] */
    (xdc_Char)0x32,  /* [2961] */
    (xdc_Char)0x0,  /* [2962] */
    (xdc_Char)0x49,  /* [2963] */
    (xdc_Char)0x6e,  /* [2964] */
    (xdc_Char)0x76,  /* [2965] */
    (xdc_Char)0x61,  /* [2966] */
    (xdc_Char)0x6c,  /* [2967] */
    (xdc_Char)0x69,  /* [2968] */
    (xdc_Char)0x64,  /* [2969] */
    (xdc_Char)0x20,  /* [2970] */
    (xdc_Char)0x62,  /* [2971] */
    (xdc_Char)0x6c,  /* [2972] */
    (xdc_Char)0x6f,  /* [2973] */
    (xdc_Char)0x63,  /* [2974] */
    (xdc_Char)0x6b,  /* [2975] */
    (xdc_Char)0x20,  /* [2976] */
    (xdc_Char)0x61,  /* [2977] */
    (xdc_Char)0x64,  /* [2978] */
    (xdc_Char)0x64,  /* [2979] */
    (xdc_Char)0x72,  /* [2980] */
    (xdc_Char)0x65,  /* [2981] */
    (xdc_Char)0x73,  /* [2982] */
    (xdc_Char)0x73,  /* [2983] */
    (xdc_Char)0x20,  /* [2984] */
    (xdc_Char)0x6f,  /* [2985] */
    (xdc_Char)0x6e,  /* [2986] */
    (xdc_Char)0x20,  /* [2987] */
    (xdc_Char)0x74,  /* [2988] */
    (xdc_Char)0x68,  /* [2989] */
    (xdc_Char)0x65,  /* [2990] */
    (xdc_Char)0x20,  /* [2991] */
    (xdc_Char)0x66,  /* [2992] */
    (xdc_Char)0x72,  /* [2993] */
    (xdc_Char)0x65,  /* [2994] */
    (xdc_Char)0x65,  /* [2995] */
    (xdc_Char)0x2e,  /* [2996] */
    (xdc_Char)0x20,  /* [2997] */
    (xdc_Char)0x46,  /* [2998] */
    (xdc_Char)0x61,  /* [2999] */
    (xdc_Char)0x69,  /* [3000] */
    (xdc_Char)0x6c,  /* [3001] */
    (xdc_Char)0x65,  /* [3002] */
    (xdc_Char)0x64,  /* [3003] */
    (xdc_Char)0x20,  /* [3004] */
    (xdc_Char)0x74,  /* [3005] */
    (xdc_Char)0x6f,  /* [3006] */
    (xdc_Char)0x20,  /* [3007] */
    (xdc_Char)0x66,  /* [3008] */
    (xdc_Char)0x72,  /* [3009] */
    (xdc_Char)0x65,  /* [3010] */
    (xdc_Char)0x65,  /* [3011] */
    (xdc_Char)0x20,  /* [3012] */
    (xdc_Char)0x62,  /* [3013] */
    (xdc_Char)0x6c,  /* [3014] */
    (xdc_Char)0x6f,  /* [3015] */
    (xdc_Char)0x63,  /* [3016] */
    (xdc_Char)0x6b,  /* [3017] */
    (xdc_Char)0x20,  /* [3018] */
    (xdc_Char)0x62,  /* [3019] */
    (xdc_Char)0x61,  /* [3020] */
    (xdc_Char)0x63,  /* [3021] */
    (xdc_Char)0x6b,  /* [3022] */
    (xdc_Char)0x20,  /* [3023] */
    (xdc_Char)0x74,  /* [3024] */
    (xdc_Char)0x6f,  /* [3025] */
    (xdc_Char)0x20,  /* [3026] */
    (xdc_Char)0x68,  /* [3027] */
    (xdc_Char)0x65,  /* [3028] */
    (xdc_Char)0x61,  /* [3029] */
    (xdc_Char)0x70,  /* [3030] */
    (xdc_Char)0x2e,  /* [3031] */
    (xdc_Char)0x0,  /* [3032] */
    (xdc_Char)0x41,  /* [3033] */
    (xdc_Char)0x5f,  /* [3034] */
    (xdc_Char)0x64,  /* [3035] */
    (xdc_Char)0x6f,  /* [3036] */
    (xdc_Char)0x75,  /* [3037] */
    (xdc_Char)0x62,  /* [3038] */
    (xdc_Char)0x6c,  /* [3039] */
    (xdc_Char)0x65,  /* [3040] */
    (xdc_Char)0x46,  /* [3041] */
    (xdc_Char)0x72,  /* [3042] */
    (xdc_Char)0x65,  /* [3043] */
    (xdc_Char)0x65,  /* [3044] */
    (xdc_Char)0x3a,  /* [3045] */
    (xdc_Char)0x20,  /* [3046] */
    (xdc_Char)0x48,  /* [3047] */
    (xdc_Char)0x65,  /* [3048] */
    (xdc_Char)0x61,  /* [3049] */
    (xdc_Char)0x70,  /* [3050] */
    (xdc_Char)0x20,  /* [3051] */
    (xdc_Char)0x61,  /* [3052] */
    (xdc_Char)0x6c,  /* [3053] */
    (xdc_Char)0x72,  /* [3054] */
    (xdc_Char)0x65,  /* [3055] */
    (xdc_Char)0x61,  /* [3056] */
    (xdc_Char)0x64,  /* [3057] */
    (xdc_Char)0x79,  /* [3058] */
    (xdc_Char)0x20,  /* [3059] */
    (xdc_Char)0x66,  /* [3060] */
    (xdc_Char)0x72,  /* [3061] */
    (xdc_Char)0x65,  /* [3062] */
    (xdc_Char)0x65,  /* [3063] */
    (xdc_Char)0x0,  /* [3064] */
    (xdc_Char)0x41,  /* [3065] */
    (xdc_Char)0x5f,  /* [3066] */
    (xdc_Char)0x62,  /* [3067] */
    (xdc_Char)0x75,  /* [3068] */
    (xdc_Char)0x66,  /* [3069] */
    (xdc_Char)0x4f,  /* [3070] */
    (xdc_Char)0x76,  /* [3071] */
    (xdc_Char)0x65,  /* [3072] */
    (xdc_Char)0x72,  /* [3073] */
    (xdc_Char)0x66,  /* [3074] */
    (xdc_Char)0x6c,  /* [3075] */
    (xdc_Char)0x6f,  /* [3076] */
    (xdc_Char)0x77,  /* [3077] */
    (xdc_Char)0x3a,  /* [3078] */
    (xdc_Char)0x20,  /* [3079] */
    (xdc_Char)0x42,  /* [3080] */
    (xdc_Char)0x75,  /* [3081] */
    (xdc_Char)0x66,  /* [3082] */
    (xdc_Char)0x66,  /* [3083] */
    (xdc_Char)0x65,  /* [3084] */
    (xdc_Char)0x72,  /* [3085] */
    (xdc_Char)0x20,  /* [3086] */
    (xdc_Char)0x6f,  /* [3087] */
    (xdc_Char)0x76,  /* [3088] */
    (xdc_Char)0x65,  /* [3089] */
    (xdc_Char)0x72,  /* [3090] */
    (xdc_Char)0x66,  /* [3091] */
    (xdc_Char)0x6c,  /* [3092] */
    (xdc_Char)0x6f,  /* [3093] */
    (xdc_Char)0x77,  /* [3094] */
    (xdc_Char)0x0,  /* [3095] */
    (xdc_Char)0x41,  /* [3096] */
    (xdc_Char)0x5f,  /* [3097] */
    (xdc_Char)0x6e,  /* [3098] */
    (xdc_Char)0x6f,  /* [3099] */
    (xdc_Char)0x74,  /* [3100] */
    (xdc_Char)0x45,  /* [3101] */
    (xdc_Char)0x6d,  /* [3102] */
    (xdc_Char)0x70,  /* [3103] */
    (xdc_Char)0x74,  /* [3104] */
    (xdc_Char)0x79,  /* [3105] */
    (xdc_Char)0x3a,  /* [3106] */
    (xdc_Char)0x20,  /* [3107] */
    (xdc_Char)0x48,  /* [3108] */
    (xdc_Char)0x65,  /* [3109] */
    (xdc_Char)0x61,  /* [3110] */
    (xdc_Char)0x70,  /* [3111] */
    (xdc_Char)0x20,  /* [3112] */
    (xdc_Char)0x6e,  /* [3113] */
    (xdc_Char)0x6f,  /* [3114] */
    (xdc_Char)0x74,  /* [3115] */
    (xdc_Char)0x20,  /* [3116] */
    (xdc_Char)0x65,  /* [3117] */
    (xdc_Char)0x6d,  /* [3118] */
    (xdc_Char)0x70,  /* [3119] */
    (xdc_Char)0x74,  /* [3120] */
    (xdc_Char)0x79,  /* [3121] */
    (xdc_Char)0x0,  /* [3122] */
    (xdc_Char)0x41,  /* [3123] */
    (xdc_Char)0x5f,  /* [3124] */
    (xdc_Char)0x6e,  /* [3125] */
    (xdc_Char)0x75,  /* [3126] */
    (xdc_Char)0x6c,  /* [3127] */
    (xdc_Char)0x6c,  /* [3128] */
    (xdc_Char)0x4f,  /* [3129] */
    (xdc_Char)0x62,  /* [3130] */
    (xdc_Char)0x6a,  /* [3131] */
    (xdc_Char)0x65,  /* [3132] */
    (xdc_Char)0x63,  /* [3133] */
    (xdc_Char)0x74,  /* [3134] */
    (xdc_Char)0x3a,  /* [3135] */
    (xdc_Char)0x20,  /* [3136] */
    (xdc_Char)0x48,  /* [3137] */
    (xdc_Char)0x65,  /* [3138] */
    (xdc_Char)0x61,  /* [3139] */
    (xdc_Char)0x70,  /* [3140] */
    (xdc_Char)0x54,  /* [3141] */
    (xdc_Char)0x72,  /* [3142] */
    (xdc_Char)0x61,  /* [3143] */
    (xdc_Char)0x63,  /* [3144] */
    (xdc_Char)0x6b,  /* [3145] */
    (xdc_Char)0x5f,  /* [3146] */
    (xdc_Char)0x70,  /* [3147] */
    (xdc_Char)0x72,  /* [3148] */
    (xdc_Char)0x69,  /* [3149] */
    (xdc_Char)0x6e,  /* [3150] */
    (xdc_Char)0x74,  /* [3151] */
    (xdc_Char)0x48,  /* [3152] */
    (xdc_Char)0x65,  /* [3153] */
    (xdc_Char)0x61,  /* [3154] */
    (xdc_Char)0x70,  /* [3155] */
    (xdc_Char)0x20,  /* [3156] */
    (xdc_Char)0x63,  /* [3157] */
    (xdc_Char)0x61,  /* [3158] */
    (xdc_Char)0x6c,  /* [3159] */
    (xdc_Char)0x6c,  /* [3160] */
    (xdc_Char)0x65,  /* [3161] */
    (xdc_Char)0x64,  /* [3162] */
    (xdc_Char)0x20,  /* [3163] */
    (xdc_Char)0x77,  /* [3164] */
    (xdc_Char)0x69,  /* [3165] */
    (xdc_Char)0x74,  /* [3166] */
    (xdc_Char)0x68,  /* [3167] */
    (xdc_Char)0x20,  /* [3168] */
    (xdc_Char)0x6e,  /* [3169] */
    (xdc_Char)0x75,  /* [3170] */
    (xdc_Char)0x6c,  /* [3171] */
    (xdc_Char)0x6c,  /* [3172] */
    (xdc_Char)0x20,  /* [3173] */
    (xdc_Char)0x6f,  /* [3174] */
    (xdc_Char)0x62,  /* [3175] */
    (xdc_Char)0x6a,  /* [3176] */
    (xdc_Char)0x0,  /* [3177] */
    (xdc_Char)0x61,  /* [3178] */
    (xdc_Char)0x73,  /* [3179] */
    (xdc_Char)0x73,  /* [3180] */
    (xdc_Char)0x65,  /* [3181] */
    (xdc_Char)0x72,  /* [3182] */
    (xdc_Char)0x74,  /* [3183] */
    (xdc_Char)0x69,  /* [3184] */
    (xdc_Char)0x6f,  /* [3185] */
    (xdc_Char)0x6e,  /* [3186] */
    (xdc_Char)0x20,  /* [3187] */
    (xdc_Char)0x66,  /* [3188] */
    (xdc_Char)0x61,  /* [3189] */
    (xdc_Char)0x69,  /* [3190] */
    (xdc_Char)0x6c,  /* [3191] */
    (xdc_Char)0x75,  /* [3192] */
    (xdc_Char)0x72,  /* [3193] */
    (xdc_Char)0x65,  /* [3194] */
    (xdc_Char)0x25,  /* [3195] */
    (xdc_Char)0x73,  /* [3196] */
    (xdc_Char)0x25,  /* [3197] */
    (xdc_Char)0x73,  /* [3198] */
    (xdc_Char)0x0,  /* [3199] */
    (xdc_Char)0x25,  /* [3200] */
    (xdc_Char)0x24,  /* [3201] */
    (xdc_Char)0x53,  /* [3202] */
    (xdc_Char)0x0,  /* [3203] */
    (xdc_Char)0x6f,  /* [3204] */
    (xdc_Char)0x75,  /* [3205] */
    (xdc_Char)0x74,  /* [3206] */
    (xdc_Char)0x20,  /* [3207] */
    (xdc_Char)0x6f,  /* [3208] */
    (xdc_Char)0x66,  /* [3209] */
    (xdc_Char)0x20,  /* [3210] */
    (xdc_Char)0x6d,  /* [3211] */
    (xdc_Char)0x65,  /* [3212] */
    (xdc_Char)0x6d,  /* [3213] */
    (xdc_Char)0x6f,  /* [3214] */
    (xdc_Char)0x72,  /* [3215] */
    (xdc_Char)0x79,  /* [3216] */
    (xdc_Char)0x3a,  /* [3217] */
    (xdc_Char)0x20,  /* [3218] */
    (xdc_Char)0x68,  /* [3219] */
    (xdc_Char)0x65,  /* [3220] */
    (xdc_Char)0x61,  /* [3221] */
    (xdc_Char)0x70,  /* [3222] */
    (xdc_Char)0x3d,  /* [3223] */
    (xdc_Char)0x30,  /* [3224] */
    (xdc_Char)0x78,  /* [3225] */
    (xdc_Char)0x25,  /* [3226] */
    (xdc_Char)0x78,  /* [3227] */
    (xdc_Char)0x2c,  /* [3228] */
    (xdc_Char)0x20,  /* [3229] */
    (xdc_Char)0x73,  /* [3230] */
    (xdc_Char)0x69,  /* [3231] */
    (xdc_Char)0x7a,  /* [3232] */
    (xdc_Char)0x65,  /* [3233] */
    (xdc_Char)0x3d,  /* [3234] */
    (xdc_Char)0x25,  /* [3235] */
    (xdc_Char)0x75,  /* [3236] */
    (xdc_Char)0x0,  /* [3237] */
    (xdc_Char)0x25,  /* [3238] */
    (xdc_Char)0x73,  /* [3239] */
    (xdc_Char)0x20,  /* [3240] */
    (xdc_Char)0x30,  /* [3241] */
    (xdc_Char)0x78,  /* [3242] */
    (xdc_Char)0x25,  /* [3243] */
    (xdc_Char)0x78,  /* [3244] */
    (xdc_Char)0x0,  /* [3245] */
    (xdc_Char)0x45,  /* [3246] */
    (xdc_Char)0x5f,  /* [3247] */
    (xdc_Char)0x62,  /* [3248] */
    (xdc_Char)0x61,  /* [3249] */
    (xdc_Char)0x64,  /* [3250] */
    (xdc_Char)0x4c,  /* [3251] */
    (xdc_Char)0x65,  /* [3252] */
    (xdc_Char)0x76,  /* [3253] */
    (xdc_Char)0x65,  /* [3254] */
    (xdc_Char)0x6c,  /* [3255] */
    (xdc_Char)0x3a,  /* [3256] */
    (xdc_Char)0x20,  /* [3257] */
    (xdc_Char)0x42,  /* [3258] */
    (xdc_Char)0x61,  /* [3259] */
    (xdc_Char)0x64,  /* [3260] */
    (xdc_Char)0x20,  /* [3261] */
    (xdc_Char)0x66,  /* [3262] */
    (xdc_Char)0x69,  /* [3263] */
    (xdc_Char)0x6c,  /* [3264] */
    (xdc_Char)0x74,  /* [3265] */
    (xdc_Char)0x65,  /* [3266] */
    (xdc_Char)0x72,  /* [3267] */
    (xdc_Char)0x20,  /* [3268] */
    (xdc_Char)0x6c,  /* [3269] */
    (xdc_Char)0x65,  /* [3270] */
    (xdc_Char)0x76,  /* [3271] */
    (xdc_Char)0x65,  /* [3272] */
    (xdc_Char)0x6c,  /* [3273] */
    (xdc_Char)0x20,  /* [3274] */
    (xdc_Char)0x76,  /* [3275] */
    (xdc_Char)0x61,  /* [3276] */
    (xdc_Char)0x6c,  /* [3277] */
    (xdc_Char)0x75,  /* [3278] */
    (xdc_Char)0x65,  /* [3279] */
    (xdc_Char)0x3a,  /* [3280] */
    (xdc_Char)0x20,  /* [3281] */
    (xdc_Char)0x25,  /* [3282] */
    (xdc_Char)0x64,  /* [3283] */
    (xdc_Char)0x0,  /* [3284] */
    (xdc_Char)0x66,  /* [3285] */
    (xdc_Char)0x72,  /* [3286] */
    (xdc_Char)0x65,  /* [3287] */
    (xdc_Char)0x65,  /* [3288] */
    (xdc_Char)0x28,  /* [3289] */
    (xdc_Char)0x29,  /* [3290] */
    (xdc_Char)0x20,  /* [3291] */
    (xdc_Char)0x69,  /* [3292] */
    (xdc_Char)0x6e,  /* [3293] */
    (xdc_Char)0x76,  /* [3294] */
    (xdc_Char)0x61,  /* [3295] */
    (xdc_Char)0x6c,  /* [3296] */
    (xdc_Char)0x69,  /* [3297] */
    (xdc_Char)0x64,  /* [3298] */
    (xdc_Char)0x20,  /* [3299] */
    (xdc_Char)0x69,  /* [3300] */
    (xdc_Char)0x6e,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x67,  /* [3303] */
    (xdc_Char)0x72,  /* [3304] */
    (xdc_Char)0x6f,  /* [3305] */
    (xdc_Char)0x77,  /* [3306] */
    (xdc_Char)0x74,  /* [3307] */
    (xdc_Char)0x68,  /* [3308] */
    (xdc_Char)0x2d,  /* [3309] */
    (xdc_Char)0x6f,  /* [3310] */
    (xdc_Char)0x6e,  /* [3311] */
    (xdc_Char)0x6c,  /* [3312] */
    (xdc_Char)0x79,  /* [3313] */
    (xdc_Char)0x20,  /* [3314] */
    (xdc_Char)0x48,  /* [3315] */
    (xdc_Char)0x65,  /* [3316] */
    (xdc_Char)0x61,  /* [3317] */
    (xdc_Char)0x70,  /* [3318] */
    (xdc_Char)0x4d,  /* [3319] */
    (xdc_Char)0x69,  /* [3320] */
    (xdc_Char)0x6e,  /* [3321] */
    (xdc_Char)0x0,  /* [3322] */
    (xdc_Char)0x54,  /* [3323] */
    (xdc_Char)0x68,  /* [3324] */
    (xdc_Char)0x65,  /* [3325] */
    (xdc_Char)0x20,  /* [3326] */
    (xdc_Char)0x52,  /* [3327] */
    (xdc_Char)0x54,  /* [3328] */
    (xdc_Char)0x53,  /* [3329] */
    (xdc_Char)0x20,  /* [3330] */
    (xdc_Char)0x68,  /* [3331] */
    (xdc_Char)0x65,  /* [3332] */
    (xdc_Char)0x61,  /* [3333] */
    (xdc_Char)0x70,  /* [3334] */
    (xdc_Char)0x20,  /* [3335] */
    (xdc_Char)0x69,  /* [3336] */
    (xdc_Char)0x73,  /* [3337] */
    (xdc_Char)0x20,  /* [3338] */
    (xdc_Char)0x75,  /* [3339] */
    (xdc_Char)0x73,  /* [3340] */
    (xdc_Char)0x65,  /* [3341] */
    (xdc_Char)0x64,  /* [3342] */
    (xdc_Char)0x20,  /* [3343] */
    (xdc_Char)0x75,  /* [3344] */
    (xdc_Char)0x70,  /* [3345] */
    (xdc_Char)0x2e,  /* [3346] */
    (xdc_Char)0x20,  /* [3347] */
    (xdc_Char)0x45,  /* [3348] */
    (xdc_Char)0x78,  /* [3349] */
    (xdc_Char)0x61,  /* [3350] */
    (xdc_Char)0x6d,  /* [3351] */
    (xdc_Char)0x69,  /* [3352] */
    (xdc_Char)0x6e,  /* [3353] */
    (xdc_Char)0x65,  /* [3354] */
    (xdc_Char)0x20,  /* [3355] */
    (xdc_Char)0x50,  /* [3356] */
    (xdc_Char)0x72,  /* [3357] */
    (xdc_Char)0x6f,  /* [3358] */
    (xdc_Char)0x67,  /* [3359] */
    (xdc_Char)0x72,  /* [3360] */
    (xdc_Char)0x61,  /* [3361] */
    (xdc_Char)0x6d,  /* [3362] */
    (xdc_Char)0x2e,  /* [3363] */
    (xdc_Char)0x68,  /* [3364] */
    (xdc_Char)0x65,  /* [3365] */
    (xdc_Char)0x61,  /* [3366] */
    (xdc_Char)0x70,  /* [3367] */
    (xdc_Char)0x2e,  /* [3368] */
    (xdc_Char)0x0,  /* [3369] */
    (xdc_Char)0x45,  /* [3370] */
    (xdc_Char)0x5f,  /* [3371] */
    (xdc_Char)0x62,  /* [3372] */
    (xdc_Char)0x61,  /* [3373] */
    (xdc_Char)0x64,  /* [3374] */
    (xdc_Char)0x43,  /* [3375] */
    (xdc_Char)0x6f,  /* [3376] */
    (xdc_Char)0x6d,  /* [3377] */
    (xdc_Char)0x6d,  /* [3378] */
    (xdc_Char)0x61,  /* [3379] */
    (xdc_Char)0x6e,  /* [3380] */
    (xdc_Char)0x64,  /* [3381] */
    (xdc_Char)0x3a,  /* [3382] */
    (xdc_Char)0x20,  /* [3383] */
    (xdc_Char)0x52,  /* [3384] */
    (xdc_Char)0x65,  /* [3385] */
    (xdc_Char)0x63,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x69,  /* [3388] */
    (xdc_Char)0x76,  /* [3389] */
    (xdc_Char)0x65,  /* [3390] */
    (xdc_Char)0x64,  /* [3391] */
    (xdc_Char)0x20,  /* [3392] */
    (xdc_Char)0x69,  /* [3393] */
    (xdc_Char)0x6e,  /* [3394] */
    (xdc_Char)0x76,  /* [3395] */
    (xdc_Char)0x61,  /* [3396] */
    (xdc_Char)0x6c,  /* [3397] */
    (xdc_Char)0x69,  /* [3398] */
    (xdc_Char)0x64,  /* [3399] */
    (xdc_Char)0x20,  /* [3400] */
    (xdc_Char)0x63,  /* [3401] */
    (xdc_Char)0x6f,  /* [3402] */
    (xdc_Char)0x6d,  /* [3403] */
    (xdc_Char)0x6d,  /* [3404] */
    (xdc_Char)0x61,  /* [3405] */
    (xdc_Char)0x6e,  /* [3406] */
    (xdc_Char)0x64,  /* [3407] */
    (xdc_Char)0x2c,  /* [3408] */
    (xdc_Char)0x20,  /* [3409] */
    (xdc_Char)0x69,  /* [3410] */
    (xdc_Char)0x64,  /* [3411] */
    (xdc_Char)0x3a,  /* [3412] */
    (xdc_Char)0x20,  /* [3413] */
    (xdc_Char)0x25,  /* [3414] */
    (xdc_Char)0x64,  /* [3415] */
    (xdc_Char)0x2e,  /* [3416] */
    (xdc_Char)0x0,  /* [3417] */
    (xdc_Char)0x45,  /* [3418] */
    (xdc_Char)0x5f,  /* [3419] */
    (xdc_Char)0x73,  /* [3420] */
    (xdc_Char)0x74,  /* [3421] */
    (xdc_Char)0x61,  /* [3422] */
    (xdc_Char)0x63,  /* [3423] */
    (xdc_Char)0x6b,  /* [3424] */
    (xdc_Char)0x4f,  /* [3425] */
    (xdc_Char)0x76,  /* [3426] */
    (xdc_Char)0x65,  /* [3427] */
    (xdc_Char)0x72,  /* [3428] */
    (xdc_Char)0x66,  /* [3429] */
    (xdc_Char)0x6c,  /* [3430] */
    (xdc_Char)0x6f,  /* [3431] */
    (xdc_Char)0x77,  /* [3432] */
    (xdc_Char)0x3a,  /* [3433] */
    (xdc_Char)0x20,  /* [3434] */
    (xdc_Char)0x49,  /* [3435] */
    (xdc_Char)0x53,  /* [3436] */
    (xdc_Char)0x52,  /* [3437] */
    (xdc_Char)0x20,  /* [3438] */
    (xdc_Char)0x73,  /* [3439] */
    (xdc_Char)0x74,  /* [3440] */
    (xdc_Char)0x61,  /* [3441] */
    (xdc_Char)0x63,  /* [3442] */
    (xdc_Char)0x6b,  /* [3443] */
    (xdc_Char)0x20,  /* [3444] */
    (xdc_Char)0x6f,  /* [3445] */
    (xdc_Char)0x76,  /* [3446] */
    (xdc_Char)0x65,  /* [3447] */
    (xdc_Char)0x72,  /* [3448] */
    (xdc_Char)0x66,  /* [3449] */
    (xdc_Char)0x6c,  /* [3450] */
    (xdc_Char)0x6f,  /* [3451] */
    (xdc_Char)0x77,  /* [3452] */
    (xdc_Char)0x2e,  /* [3453] */
    (xdc_Char)0x0,  /* [3454] */
    (xdc_Char)0x45,  /* [3455] */
    (xdc_Char)0x5f,  /* [3456] */
    (xdc_Char)0x73,  /* [3457] */
    (xdc_Char)0x74,  /* [3458] */
    (xdc_Char)0x61,  /* [3459] */
    (xdc_Char)0x63,  /* [3460] */
    (xdc_Char)0x6b,  /* [3461] */
    (xdc_Char)0x4f,  /* [3462] */
    (xdc_Char)0x76,  /* [3463] */
    (xdc_Char)0x65,  /* [3464] */
    (xdc_Char)0x72,  /* [3465] */
    (xdc_Char)0x66,  /* [3466] */
    (xdc_Char)0x6c,  /* [3467] */
    (xdc_Char)0x6f,  /* [3468] */
    (xdc_Char)0x77,  /* [3469] */
    (xdc_Char)0x3a,  /* [3470] */
    (xdc_Char)0x20,  /* [3471] */
    (xdc_Char)0x54,  /* [3472] */
    (xdc_Char)0x61,  /* [3473] */
    (xdc_Char)0x73,  /* [3474] */
    (xdc_Char)0x6b,  /* [3475] */
    (xdc_Char)0x20,  /* [3476] */
    (xdc_Char)0x30,  /* [3477] */
    (xdc_Char)0x78,  /* [3478] */
    (xdc_Char)0x25,  /* [3479] */
    (xdc_Char)0x78,  /* [3480] */
    (xdc_Char)0x20,  /* [3481] */
    (xdc_Char)0x73,  /* [3482] */
    (xdc_Char)0x74,  /* [3483] */
    (xdc_Char)0x61,  /* [3484] */
    (xdc_Char)0x63,  /* [3485] */
    (xdc_Char)0x6b,  /* [3486] */
    (xdc_Char)0x20,  /* [3487] */
    (xdc_Char)0x6f,  /* [3488] */
    (xdc_Char)0x76,  /* [3489] */
    (xdc_Char)0x65,  /* [3490] */
    (xdc_Char)0x72,  /* [3491] */
    (xdc_Char)0x66,  /* [3492] */
    (xdc_Char)0x6c,  /* [3493] */
    (xdc_Char)0x6f,  /* [3494] */
    (xdc_Char)0x77,  /* [3495] */
    (xdc_Char)0x2e,  /* [3496] */
    (xdc_Char)0x0,  /* [3497] */
    (xdc_Char)0x45,  /* [3498] */
    (xdc_Char)0x5f,  /* [3499] */
    (xdc_Char)0x73,  /* [3500] */
    (xdc_Char)0x70,  /* [3501] */
    (xdc_Char)0x4f,  /* [3502] */
    (xdc_Char)0x75,  /* [3503] */
    (xdc_Char)0x74,  /* [3504] */
    (xdc_Char)0x4f,  /* [3505] */
    (xdc_Char)0x66,  /* [3506] */
    (xdc_Char)0x42,  /* [3507] */
    (xdc_Char)0x6f,  /* [3508] */
    (xdc_Char)0x75,  /* [3509] */
    (xdc_Char)0x6e,  /* [3510] */
    (xdc_Char)0x64,  /* [3511] */
    (xdc_Char)0x73,  /* [3512] */
    (xdc_Char)0x3a,  /* [3513] */
    (xdc_Char)0x20,  /* [3514] */
    (xdc_Char)0x54,  /* [3515] */
    (xdc_Char)0x61,  /* [3516] */
    (xdc_Char)0x73,  /* [3517] */
    (xdc_Char)0x6b,  /* [3518] */
    (xdc_Char)0x20,  /* [3519] */
    (xdc_Char)0x30,  /* [3520] */
    (xdc_Char)0x78,  /* [3521] */
    (xdc_Char)0x25,  /* [3522] */
    (xdc_Char)0x78,  /* [3523] */
    (xdc_Char)0x20,  /* [3524] */
    (xdc_Char)0x73,  /* [3525] */
    (xdc_Char)0x74,  /* [3526] */
    (xdc_Char)0x61,  /* [3527] */
    (xdc_Char)0x63,  /* [3528] */
    (xdc_Char)0x6b,  /* [3529] */
    (xdc_Char)0x20,  /* [3530] */
    (xdc_Char)0x65,  /* [3531] */
    (xdc_Char)0x72,  /* [3532] */
    (xdc_Char)0x72,  /* [3533] */
    (xdc_Char)0x6f,  /* [3534] */
    (xdc_Char)0x72,  /* [3535] */
    (xdc_Char)0x2c,  /* [3536] */
    (xdc_Char)0x20,  /* [3537] */
    (xdc_Char)0x53,  /* [3538] */
    (xdc_Char)0x50,  /* [3539] */
    (xdc_Char)0x20,  /* [3540] */
    (xdc_Char)0x3d,  /* [3541] */
    (xdc_Char)0x20,  /* [3542] */
    (xdc_Char)0x30,  /* [3543] */
    (xdc_Char)0x78,  /* [3544] */
    (xdc_Char)0x25,  /* [3545] */
    (xdc_Char)0x78,  /* [3546] */
    (xdc_Char)0x2e,  /* [3547] */
    (xdc_Char)0x0,  /* [3548] */
    (xdc_Char)0x45,  /* [3549] */
    (xdc_Char)0x5f,  /* [3550] */
    (xdc_Char)0x64,  /* [3551] */
    (xdc_Char)0x65,  /* [3552] */
    (xdc_Char)0x6c,  /* [3553] */
    (xdc_Char)0x65,  /* [3554] */
    (xdc_Char)0x74,  /* [3555] */
    (xdc_Char)0x65,  /* [3556] */
    (xdc_Char)0x4e,  /* [3557] */
    (xdc_Char)0x6f,  /* [3558] */
    (xdc_Char)0x74,  /* [3559] */
    (xdc_Char)0x41,  /* [3560] */
    (xdc_Char)0x6c,  /* [3561] */
    (xdc_Char)0x6c,  /* [3562] */
    (xdc_Char)0x6f,  /* [3563] */
    (xdc_Char)0x77,  /* [3564] */
    (xdc_Char)0x65,  /* [3565] */
    (xdc_Char)0x64,  /* [3566] */
    (xdc_Char)0x3a,  /* [3567] */
    (xdc_Char)0x20,  /* [3568] */
    (xdc_Char)0x54,  /* [3569] */
    (xdc_Char)0x61,  /* [3570] */
    (xdc_Char)0x73,  /* [3571] */
    (xdc_Char)0x6b,  /* [3572] */
    (xdc_Char)0x20,  /* [3573] */
    (xdc_Char)0x30,  /* [3574] */
    (xdc_Char)0x78,  /* [3575] */
    (xdc_Char)0x25,  /* [3576] */
    (xdc_Char)0x78,  /* [3577] */
    (xdc_Char)0x2e,  /* [3578] */
    (xdc_Char)0x0,  /* [3579] */
    (xdc_Char)0x45,  /* [3580] */
    (xdc_Char)0x5f,  /* [3581] */
    (xdc_Char)0x61,  /* [3582] */
    (xdc_Char)0x6c,  /* [3583] */
    (xdc_Char)0x72,  /* [3584] */
    (xdc_Char)0x65,  /* [3585] */
    (xdc_Char)0x61,  /* [3586] */
    (xdc_Char)0x64,  /* [3587] */
    (xdc_Char)0x79,  /* [3588] */
    (xdc_Char)0x44,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x66,  /* [3591] */
    (xdc_Char)0x69,  /* [3592] */
    (xdc_Char)0x6e,  /* [3593] */
    (xdc_Char)0x65,  /* [3594] */
    (xdc_Char)0x64,  /* [3595] */
    (xdc_Char)0x3a,  /* [3596] */
    (xdc_Char)0x20,  /* [3597] */
    (xdc_Char)0x48,  /* [3598] */
    (xdc_Char)0x77,  /* [3599] */
    (xdc_Char)0x69,  /* [3600] */
    (xdc_Char)0x20,  /* [3601] */
    (xdc_Char)0x61,  /* [3602] */
    (xdc_Char)0x6c,  /* [3603] */
    (xdc_Char)0x72,  /* [3604] */
    (xdc_Char)0x65,  /* [3605] */
    (xdc_Char)0x61,  /* [3606] */
    (xdc_Char)0x64,  /* [3607] */
    (xdc_Char)0x79,  /* [3608] */
    (xdc_Char)0x20,  /* [3609] */
    (xdc_Char)0x64,  /* [3610] */
    (xdc_Char)0x65,  /* [3611] */
    (xdc_Char)0x66,  /* [3612] */
    (xdc_Char)0x69,  /* [3613] */
    (xdc_Char)0x6e,  /* [3614] */
    (xdc_Char)0x65,  /* [3615] */
    (xdc_Char)0x64,  /* [3616] */
    (xdc_Char)0x2c,  /* [3617] */
    (xdc_Char)0x20,  /* [3618] */
    (xdc_Char)0x69,  /* [3619] */
    (xdc_Char)0x6e,  /* [3620] */
    (xdc_Char)0x74,  /* [3621] */
    (xdc_Char)0x6e,  /* [3622] */
    (xdc_Char)0x75,  /* [3623] */
    (xdc_Char)0x6d,  /* [3624] */
    (xdc_Char)0x3a,  /* [3625] */
    (xdc_Char)0x20,  /* [3626] */
    (xdc_Char)0x25,  /* [3627] */
    (xdc_Char)0x64,  /* [3628] */
    (xdc_Char)0x0,  /* [3629] */
    (xdc_Char)0x45,  /* [3630] */
    (xdc_Char)0x5f,  /* [3631] */
    (xdc_Char)0x68,  /* [3632] */
    (xdc_Char)0x61,  /* [3633] */
    (xdc_Char)0x6e,  /* [3634] */
    (xdc_Char)0x64,  /* [3635] */
    (xdc_Char)0x6c,  /* [3636] */
    (xdc_Char)0x65,  /* [3637] */
    (xdc_Char)0x4e,  /* [3638] */
    (xdc_Char)0x6f,  /* [3639] */
    (xdc_Char)0x74,  /* [3640] */
    (xdc_Char)0x46,  /* [3641] */
    (xdc_Char)0x6f,  /* [3642] */
    (xdc_Char)0x75,  /* [3643] */
    (xdc_Char)0x6e,  /* [3644] */
    (xdc_Char)0x64,  /* [3645] */
    (xdc_Char)0x3a,  /* [3646] */
    (xdc_Char)0x20,  /* [3647] */
    (xdc_Char)0x48,  /* [3648] */
    (xdc_Char)0x77,  /* [3649] */
    (xdc_Char)0x69,  /* [3650] */
    (xdc_Char)0x20,  /* [3651] */
    (xdc_Char)0x68,  /* [3652] */
    (xdc_Char)0x61,  /* [3653] */
    (xdc_Char)0x6e,  /* [3654] */
    (xdc_Char)0x64,  /* [3655] */
    (xdc_Char)0x6c,  /* [3656] */
    (xdc_Char)0x65,  /* [3657] */
    (xdc_Char)0x20,  /* [3658] */
    (xdc_Char)0x6e,  /* [3659] */
    (xdc_Char)0x6f,  /* [3660] */
    (xdc_Char)0x74,  /* [3661] */
    (xdc_Char)0x20,  /* [3662] */
    (xdc_Char)0x66,  /* [3663] */
    (xdc_Char)0x6f,  /* [3664] */
    (xdc_Char)0x75,  /* [3665] */
    (xdc_Char)0x6e,  /* [3666] */
    (xdc_Char)0x64,  /* [3667] */
    (xdc_Char)0x3a,  /* [3668] */
    (xdc_Char)0x20,  /* [3669] */
    (xdc_Char)0x30,  /* [3670] */
    (xdc_Char)0x78,  /* [3671] */
    (xdc_Char)0x25,  /* [3672] */
    (xdc_Char)0x78,  /* [3673] */
    (xdc_Char)0x0,  /* [3674] */
    (xdc_Char)0x45,  /* [3675] */
    (xdc_Char)0x5f,  /* [3676] */
    (xdc_Char)0x75,  /* [3677] */
    (xdc_Char)0x6e,  /* [3678] */
    (xdc_Char)0x64,  /* [3679] */
    (xdc_Char)0x65,  /* [3680] */
    (xdc_Char)0x66,  /* [3681] */
    (xdc_Char)0x69,  /* [3682] */
    (xdc_Char)0x6e,  /* [3683] */
    (xdc_Char)0x65,  /* [3684] */
    (xdc_Char)0x64,  /* [3685] */
    (xdc_Char)0x3a,  /* [3686] */
    (xdc_Char)0x20,  /* [3687] */
    (xdc_Char)0x48,  /* [3688] */
    (xdc_Char)0x77,  /* [3689] */
    (xdc_Char)0x69,  /* [3690] */
    (xdc_Char)0x20,  /* [3691] */
    (xdc_Char)0x75,  /* [3692] */
    (xdc_Char)0x6e,  /* [3693] */
    (xdc_Char)0x64,  /* [3694] */
    (xdc_Char)0x65,  /* [3695] */
    (xdc_Char)0x66,  /* [3696] */
    (xdc_Char)0x69,  /* [3697] */
    (xdc_Char)0x6e,  /* [3698] */
    (xdc_Char)0x65,  /* [3699] */
    (xdc_Char)0x64,  /* [3700] */
    (xdc_Char)0x2c,  /* [3701] */
    (xdc_Char)0x20,  /* [3702] */
    (xdc_Char)0x69,  /* [3703] */
    (xdc_Char)0x6e,  /* [3704] */
    (xdc_Char)0x74,  /* [3705] */
    (xdc_Char)0x6e,  /* [3706] */
    (xdc_Char)0x75,  /* [3707] */
    (xdc_Char)0x6d,  /* [3708] */
    (xdc_Char)0x3a,  /* [3709] */
    (xdc_Char)0x20,  /* [3710] */
    (xdc_Char)0x25,  /* [3711] */
    (xdc_Char)0x64,  /* [3712] */
    (xdc_Char)0x0,  /* [3713] */
    (xdc_Char)0x45,  /* [3714] */
    (xdc_Char)0x5f,  /* [3715] */
    (xdc_Char)0x62,  /* [3716] */
    (xdc_Char)0x61,  /* [3717] */
    (xdc_Char)0x64,  /* [3718] */
    (xdc_Char)0x49,  /* [3719] */
    (xdc_Char)0x6e,  /* [3720] */
    (xdc_Char)0x74,  /* [3721] */
    (xdc_Char)0x4e,  /* [3722] */
    (xdc_Char)0x75,  /* [3723] */
    (xdc_Char)0x6d,  /* [3724] */
    (xdc_Char)0x2c,  /* [3725] */
    (xdc_Char)0x20,  /* [3726] */
    (xdc_Char)0x69,  /* [3727] */
    (xdc_Char)0x6e,  /* [3728] */
    (xdc_Char)0x74,  /* [3729] */
    (xdc_Char)0x6e,  /* [3730] */
    (xdc_Char)0x75,  /* [3731] */
    (xdc_Char)0x6d,  /* [3732] */
    (xdc_Char)0x3a,  /* [3733] */
    (xdc_Char)0x20,  /* [3734] */
    (xdc_Char)0x25,  /* [3735] */
    (xdc_Char)0x64,  /* [3736] */
    (xdc_Char)0x20,  /* [3737] */
    (xdc_Char)0x69,  /* [3738] */
    (xdc_Char)0x73,  /* [3739] */
    (xdc_Char)0x20,  /* [3740] */
    (xdc_Char)0x6f,  /* [3741] */
    (xdc_Char)0x75,  /* [3742] */
    (xdc_Char)0x74,  /* [3743] */
    (xdc_Char)0x20,  /* [3744] */
    (xdc_Char)0x6f,  /* [3745] */
    (xdc_Char)0x66,  /* [3746] */
    (xdc_Char)0x20,  /* [3747] */
    (xdc_Char)0x72,  /* [3748] */
    (xdc_Char)0x61,  /* [3749] */
    (xdc_Char)0x6e,  /* [3750] */
    (xdc_Char)0x67,  /* [3751] */
    (xdc_Char)0x65,  /* [3752] */
    (xdc_Char)0x0,  /* [3753] */
    (xdc_Char)0x45,  /* [3754] */
    (xdc_Char)0x5f,  /* [3755] */
    (xdc_Char)0x73,  /* [3756] */
    (xdc_Char)0x77,  /* [3757] */
    (xdc_Char)0x69,  /* [3758] */
    (xdc_Char)0x3a,  /* [3759] */
    (xdc_Char)0x20,  /* [3760] */
    (xdc_Char)0x70,  /* [3761] */
    (xdc_Char)0x63,  /* [3762] */
    (xdc_Char)0x20,  /* [3763] */
    (xdc_Char)0x3d,  /* [3764] */
    (xdc_Char)0x20,  /* [3765] */
    (xdc_Char)0x30,  /* [3766] */
    (xdc_Char)0x78,  /* [3767] */
    (xdc_Char)0x25,  /* [3768] */
    (xdc_Char)0x30,  /* [3769] */
    (xdc_Char)0x38,  /* [3770] */
    (xdc_Char)0x78,  /* [3771] */
    (xdc_Char)0x2c,  /* [3772] */
    (xdc_Char)0x20,  /* [3773] */
    (xdc_Char)0x6c,  /* [3774] */
    (xdc_Char)0x72,  /* [3775] */
    (xdc_Char)0x20,  /* [3776] */
    (xdc_Char)0x3d,  /* [3777] */
    (xdc_Char)0x20,  /* [3778] */
    (xdc_Char)0x30,  /* [3779] */
    (xdc_Char)0x78,  /* [3780] */
    (xdc_Char)0x25,  /* [3781] */
    (xdc_Char)0x30,  /* [3782] */
    (xdc_Char)0x38,  /* [3783] */
    (xdc_Char)0x78,  /* [3784] */
    (xdc_Char)0x2e,  /* [3785] */
    (xdc_Char)0x0,  /* [3786] */
    (xdc_Char)0x45,  /* [3787] */
    (xdc_Char)0x5f,  /* [3788] */
    (xdc_Char)0x70,  /* [3789] */
    (xdc_Char)0x72,  /* [3790] */
    (xdc_Char)0x65,  /* [3791] */
    (xdc_Char)0x66,  /* [3792] */
    (xdc_Char)0x65,  /* [3793] */
    (xdc_Char)0x74,  /* [3794] */
    (xdc_Char)0x63,  /* [3795] */
    (xdc_Char)0x68,  /* [3796] */
    (xdc_Char)0x41,  /* [3797] */
    (xdc_Char)0x62,  /* [3798] */
    (xdc_Char)0x6f,  /* [3799] */
    (xdc_Char)0x72,  /* [3800] */
    (xdc_Char)0x74,  /* [3801] */
    (xdc_Char)0x3a,  /* [3802] */
    (xdc_Char)0x20,  /* [3803] */
    (xdc_Char)0x70,  /* [3804] */
    (xdc_Char)0x63,  /* [3805] */
    (xdc_Char)0x20,  /* [3806] */
    (xdc_Char)0x3d,  /* [3807] */
    (xdc_Char)0x20,  /* [3808] */
    (xdc_Char)0x30,  /* [3809] */
    (xdc_Char)0x78,  /* [3810] */
    (xdc_Char)0x25,  /* [3811] */
    (xdc_Char)0x30,  /* [3812] */
    (xdc_Char)0x38,  /* [3813] */
    (xdc_Char)0x78,  /* [3814] */
    (xdc_Char)0x2c,  /* [3815] */
    (xdc_Char)0x20,  /* [3816] */
    (xdc_Char)0x6c,  /* [3817] */
    (xdc_Char)0x72,  /* [3818] */
    (xdc_Char)0x20,  /* [3819] */
    (xdc_Char)0x3d,  /* [3820] */
    (xdc_Char)0x20,  /* [3821] */
    (xdc_Char)0x30,  /* [3822] */
    (xdc_Char)0x78,  /* [3823] */
    (xdc_Char)0x25,  /* [3824] */
    (xdc_Char)0x30,  /* [3825] */
    (xdc_Char)0x38,  /* [3826] */
    (xdc_Char)0x78,  /* [3827] */
    (xdc_Char)0x2e,  /* [3828] */
    (xdc_Char)0x0,  /* [3829] */
    (xdc_Char)0x45,  /* [3830] */
    (xdc_Char)0x5f,  /* [3831] */
    (xdc_Char)0x64,  /* [3832] */
    (xdc_Char)0x61,  /* [3833] */
    (xdc_Char)0x74,  /* [3834] */
    (xdc_Char)0x61,  /* [3835] */
    (xdc_Char)0x41,  /* [3836] */
    (xdc_Char)0x62,  /* [3837] */
    (xdc_Char)0x6f,  /* [3838] */
    (xdc_Char)0x72,  /* [3839] */
    (xdc_Char)0x74,  /* [3840] */
    (xdc_Char)0x3a,  /* [3841] */
    (xdc_Char)0x20,  /* [3842] */
    (xdc_Char)0x70,  /* [3843] */
    (xdc_Char)0x63,  /* [3844] */
    (xdc_Char)0x20,  /* [3845] */
    (xdc_Char)0x3d,  /* [3846] */
    (xdc_Char)0x20,  /* [3847] */
    (xdc_Char)0x30,  /* [3848] */
    (xdc_Char)0x78,  /* [3849] */
    (xdc_Char)0x25,  /* [3850] */
    (xdc_Char)0x30,  /* [3851] */
    (xdc_Char)0x38,  /* [3852] */
    (xdc_Char)0x78,  /* [3853] */
    (xdc_Char)0x2c,  /* [3854] */
    (xdc_Char)0x20,  /* [3855] */
    (xdc_Char)0x6c,  /* [3856] */
    (xdc_Char)0x72,  /* [3857] */
    (xdc_Char)0x20,  /* [3858] */
    (xdc_Char)0x3d,  /* [3859] */
    (xdc_Char)0x20,  /* [3860] */
    (xdc_Char)0x30,  /* [3861] */
    (xdc_Char)0x78,  /* [3862] */
    (xdc_Char)0x25,  /* [3863] */
    (xdc_Char)0x30,  /* [3864] */
    (xdc_Char)0x38,  /* [3865] */
    (xdc_Char)0x78,  /* [3866] */
    (xdc_Char)0x2e,  /* [3867] */
    (xdc_Char)0x0,  /* [3868] */
    (xdc_Char)0x45,  /* [3869] */
    (xdc_Char)0x5f,  /* [3870] */
    (xdc_Char)0x75,  /* [3871] */
    (xdc_Char)0x6e,  /* [3872] */
    (xdc_Char)0x64,  /* [3873] */
    (xdc_Char)0x65,  /* [3874] */
    (xdc_Char)0x66,  /* [3875] */
    (xdc_Char)0x69,  /* [3876] */
    (xdc_Char)0x6e,  /* [3877] */
    (xdc_Char)0x65,  /* [3878] */
    (xdc_Char)0x64,  /* [3879] */
    (xdc_Char)0x49,  /* [3880] */
    (xdc_Char)0x6e,  /* [3881] */
    (xdc_Char)0x73,  /* [3882] */
    (xdc_Char)0x74,  /* [3883] */
    (xdc_Char)0x72,  /* [3884] */
    (xdc_Char)0x75,  /* [3885] */
    (xdc_Char)0x63,  /* [3886] */
    (xdc_Char)0x74,  /* [3887] */
    (xdc_Char)0x69,  /* [3888] */
    (xdc_Char)0x6f,  /* [3889] */
    (xdc_Char)0x6e,  /* [3890] */
    (xdc_Char)0x3a,  /* [3891] */
    (xdc_Char)0x20,  /* [3892] */
    (xdc_Char)0x70,  /* [3893] */
    (xdc_Char)0x63,  /* [3894] */
    (xdc_Char)0x20,  /* [3895] */
    (xdc_Char)0x3d,  /* [3896] */
    (xdc_Char)0x20,  /* [3897] */
    (xdc_Char)0x30,  /* [3898] */
    (xdc_Char)0x78,  /* [3899] */
    (xdc_Char)0x25,  /* [3900] */
    (xdc_Char)0x30,  /* [3901] */
    (xdc_Char)0x38,  /* [3902] */
    (xdc_Char)0x78,  /* [3903] */
    (xdc_Char)0x2c,  /* [3904] */
    (xdc_Char)0x20,  /* [3905] */
    (xdc_Char)0x6c,  /* [3906] */
    (xdc_Char)0x72,  /* [3907] */
    (xdc_Char)0x20,  /* [3908] */
    (xdc_Char)0x3d,  /* [3909] */
    (xdc_Char)0x20,  /* [3910] */
    (xdc_Char)0x30,  /* [3911] */
    (xdc_Char)0x78,  /* [3912] */
    (xdc_Char)0x25,  /* [3913] */
    (xdc_Char)0x30,  /* [3914] */
    (xdc_Char)0x38,  /* [3915] */
    (xdc_Char)0x78,  /* [3916] */
    (xdc_Char)0x2e,  /* [3917] */
    (xdc_Char)0x0,  /* [3918] */
    (xdc_Char)0x45,  /* [3919] */
    (xdc_Char)0x5f,  /* [3920] */
    (xdc_Char)0x70,  /* [3921] */
    (xdc_Char)0x72,  /* [3922] */
    (xdc_Char)0x69,  /* [3923] */
    (xdc_Char)0x6f,  /* [3924] */
    (xdc_Char)0x72,  /* [3925] */
    (xdc_Char)0x69,  /* [3926] */
    (xdc_Char)0x74,  /* [3927] */
    (xdc_Char)0x79,  /* [3928] */
    (xdc_Char)0x3a,  /* [3929] */
    (xdc_Char)0x20,  /* [3930] */
    (xdc_Char)0x54,  /* [3931] */
    (xdc_Char)0x68,  /* [3932] */
    (xdc_Char)0x72,  /* [3933] */
    (xdc_Char)0x65,  /* [3934] */
    (xdc_Char)0x61,  /* [3935] */
    (xdc_Char)0x64,  /* [3936] */
    (xdc_Char)0x20,  /* [3937] */
    (xdc_Char)0x70,  /* [3938] */
    (xdc_Char)0x72,  /* [3939] */
    (xdc_Char)0x69,  /* [3940] */
    (xdc_Char)0x6f,  /* [3941] */
    (xdc_Char)0x72,  /* [3942] */
    (xdc_Char)0x69,  /* [3943] */
    (xdc_Char)0x74,  /* [3944] */
    (xdc_Char)0x79,  /* [3945] */
    (xdc_Char)0x20,  /* [3946] */
    (xdc_Char)0x69,  /* [3947] */
    (xdc_Char)0x73,  /* [3948] */
    (xdc_Char)0x20,  /* [3949] */
    (xdc_Char)0x69,  /* [3950] */
    (xdc_Char)0x6e,  /* [3951] */
    (xdc_Char)0x76,  /* [3952] */
    (xdc_Char)0x61,  /* [3953] */
    (xdc_Char)0x6c,  /* [3954] */
    (xdc_Char)0x69,  /* [3955] */
    (xdc_Char)0x64,  /* [3956] */
    (xdc_Char)0x20,  /* [3957] */
    (xdc_Char)0x25,  /* [3958] */
    (xdc_Char)0x64,  /* [3959] */
    (xdc_Char)0x0,  /* [3960] */
    (xdc_Char)0x45,  /* [3961] */
    (xdc_Char)0x5f,  /* [3962] */
    (xdc_Char)0x69,  /* [3963] */
    (xdc_Char)0x6e,  /* [3964] */
    (xdc_Char)0x76,  /* [3965] */
    (xdc_Char)0x61,  /* [3966] */
    (xdc_Char)0x6c,  /* [3967] */
    (xdc_Char)0x69,  /* [3968] */
    (xdc_Char)0x64,  /* [3969] */
    (xdc_Char)0x54,  /* [3970] */
    (xdc_Char)0x69,  /* [3971] */
    (xdc_Char)0x6d,  /* [3972] */
    (xdc_Char)0x65,  /* [3973] */
    (xdc_Char)0x72,  /* [3974] */
    (xdc_Char)0x3a,  /* [3975] */
    (xdc_Char)0x20,  /* [3976] */
    (xdc_Char)0x49,  /* [3977] */
    (xdc_Char)0x6e,  /* [3978] */
    (xdc_Char)0x76,  /* [3979] */
    (xdc_Char)0x61,  /* [3980] */
    (xdc_Char)0x6c,  /* [3981] */
    (xdc_Char)0x69,  /* [3982] */
    (xdc_Char)0x64,  /* [3983] */
    (xdc_Char)0x20,  /* [3984] */
    (xdc_Char)0x54,  /* [3985] */
    (xdc_Char)0x69,  /* [3986] */
    (xdc_Char)0x6d,  /* [3987] */
    (xdc_Char)0x65,  /* [3988] */
    (xdc_Char)0x72,  /* [3989] */
    (xdc_Char)0x20,  /* [3990] */
    (xdc_Char)0x49,  /* [3991] */
    (xdc_Char)0x64,  /* [3992] */
    (xdc_Char)0x20,  /* [3993] */
    (xdc_Char)0x25,  /* [3994] */
    (xdc_Char)0x64,  /* [3995] */
    (xdc_Char)0x0,  /* [3996] */
    (xdc_Char)0x45,  /* [3997] */
    (xdc_Char)0x5f,  /* [3998] */
    (xdc_Char)0x6e,  /* [3999] */
    (xdc_Char)0x6f,  /* [4000] */
    (xdc_Char)0x74,  /* [4001] */
    (xdc_Char)0x41,  /* [4002] */
    (xdc_Char)0x76,  /* [4003] */
    (xdc_Char)0x61,  /* [4004] */
    (xdc_Char)0x69,  /* [4005] */
    (xdc_Char)0x6c,  /* [4006] */
    (xdc_Char)0x61,  /* [4007] */
    (xdc_Char)0x62,  /* [4008] */
    (xdc_Char)0x6c,  /* [4009] */
    (xdc_Char)0x65,  /* [4010] */
    (xdc_Char)0x3a,  /* [4011] */
    (xdc_Char)0x20,  /* [4012] */
    (xdc_Char)0x54,  /* [4013] */
    (xdc_Char)0x69,  /* [4014] */
    (xdc_Char)0x6d,  /* [4015] */
    (xdc_Char)0x65,  /* [4016] */
    (xdc_Char)0x72,  /* [4017] */
    (xdc_Char)0x20,  /* [4018] */
    (xdc_Char)0x6e,  /* [4019] */
    (xdc_Char)0x6f,  /* [4020] */
    (xdc_Char)0x74,  /* [4021] */
    (xdc_Char)0x20,  /* [4022] */
    (xdc_Char)0x61,  /* [4023] */
    (xdc_Char)0x76,  /* [4024] */
    (xdc_Char)0x61,  /* [4025] */
    (xdc_Char)0x69,  /* [4026] */
    (xdc_Char)0x6c,  /* [4027] */
    (xdc_Char)0x61,  /* [4028] */
    (xdc_Char)0x62,  /* [4029] */
    (xdc_Char)0x6c,  /* [4030] */
    (xdc_Char)0x65,  /* [4031] */
    (xdc_Char)0x20,  /* [4032] */
    (xdc_Char)0x25,  /* [4033] */
    (xdc_Char)0x64,  /* [4034] */
    (xdc_Char)0x0,  /* [4035] */
    (xdc_Char)0x45,  /* [4036] */
    (xdc_Char)0x5f,  /* [4037] */
    (xdc_Char)0x63,  /* [4038] */
    (xdc_Char)0x61,  /* [4039] */
    (xdc_Char)0x6e,  /* [4040] */
    (xdc_Char)0x6e,  /* [4041] */
    (xdc_Char)0x6f,  /* [4042] */
    (xdc_Char)0x74,  /* [4043] */
    (xdc_Char)0x53,  /* [4044] */
    (xdc_Char)0x75,  /* [4045] */
    (xdc_Char)0x70,  /* [4046] */
    (xdc_Char)0x70,  /* [4047] */
    (xdc_Char)0x6f,  /* [4048] */
    (xdc_Char)0x72,  /* [4049] */
    (xdc_Char)0x74,  /* [4050] */
    (xdc_Char)0x3a,  /* [4051] */
    (xdc_Char)0x20,  /* [4052] */
    (xdc_Char)0x54,  /* [4053] */
    (xdc_Char)0x69,  /* [4054] */
    (xdc_Char)0x6d,  /* [4055] */
    (xdc_Char)0x65,  /* [4056] */
    (xdc_Char)0x72,  /* [4057] */
    (xdc_Char)0x20,  /* [4058] */
    (xdc_Char)0x63,  /* [4059] */
    (xdc_Char)0x61,  /* [4060] */
    (xdc_Char)0x6e,  /* [4061] */
    (xdc_Char)0x6e,  /* [4062] */
    (xdc_Char)0x6f,  /* [4063] */
    (xdc_Char)0x74,  /* [4064] */
    (xdc_Char)0x20,  /* [4065] */
    (xdc_Char)0x73,  /* [4066] */
    (xdc_Char)0x75,  /* [4067] */
    (xdc_Char)0x70,  /* [4068] */
    (xdc_Char)0x70,  /* [4069] */
    (xdc_Char)0x6f,  /* [4070] */
    (xdc_Char)0x72,  /* [4071] */
    (xdc_Char)0x74,  /* [4072] */
    (xdc_Char)0x20,  /* [4073] */
    (xdc_Char)0x72,  /* [4074] */
    (xdc_Char)0x65,  /* [4075] */
    (xdc_Char)0x71,  /* [4076] */
    (xdc_Char)0x75,  /* [4077] */
    (xdc_Char)0x65,  /* [4078] */
    (xdc_Char)0x73,  /* [4079] */
    (xdc_Char)0x74,  /* [4080] */
    (xdc_Char)0x65,  /* [4081] */
    (xdc_Char)0x64,  /* [4082] */
    (xdc_Char)0x20,  /* [4083] */
    (xdc_Char)0x70,  /* [4084] */
    (xdc_Char)0x65,  /* [4085] */
    (xdc_Char)0x72,  /* [4086] */
    (xdc_Char)0x69,  /* [4087] */
    (xdc_Char)0x6f,  /* [4088] */
    (xdc_Char)0x64,  /* [4089] */
    (xdc_Char)0x20,  /* [4090] */
    (xdc_Char)0x25,  /* [4091] */
    (xdc_Char)0x64,  /* [4092] */
    (xdc_Char)0x0,  /* [4093] */
    (xdc_Char)0x45,  /* [4094] */
    (xdc_Char)0x5f,  /* [4095] */
    (xdc_Char)0x66,  /* [4096] */
    (xdc_Char)0x72,  /* [4097] */
    (xdc_Char)0x65,  /* [4098] */
    (xdc_Char)0x71,  /* [4099] */
    (xdc_Char)0x4d,  /* [4100] */
    (xdc_Char)0x69,  /* [4101] */
    (xdc_Char)0x73,  /* [4102] */
    (xdc_Char)0x6d,  /* [4103] */
    (xdc_Char)0x61,  /* [4104] */
    (xdc_Char)0x74,  /* [4105] */
    (xdc_Char)0x63,  /* [4106] */
    (xdc_Char)0x68,  /* [4107] */
    (xdc_Char)0x3a,  /* [4108] */
    (xdc_Char)0x20,  /* [4109] */
    (xdc_Char)0x46,  /* [4110] */
    (xdc_Char)0x72,  /* [4111] */
    (xdc_Char)0x65,  /* [4112] */
    (xdc_Char)0x71,  /* [4113] */
    (xdc_Char)0x75,  /* [4114] */
    (xdc_Char)0x65,  /* [4115] */
    (xdc_Char)0x6e,  /* [4116] */
    (xdc_Char)0x63,  /* [4117] */
    (xdc_Char)0x79,  /* [4118] */
    (xdc_Char)0x20,  /* [4119] */
    (xdc_Char)0x6d,  /* [4120] */
    (xdc_Char)0x69,  /* [4121] */
    (xdc_Char)0x73,  /* [4122] */
    (xdc_Char)0x6d,  /* [4123] */
    (xdc_Char)0x61,  /* [4124] */
    (xdc_Char)0x74,  /* [4125] */
    (xdc_Char)0x63,  /* [4126] */
    (xdc_Char)0x68,  /* [4127] */
    (xdc_Char)0x3a,  /* [4128] */
    (xdc_Char)0x20,  /* [4129] */
    (xdc_Char)0x45,  /* [4130] */
    (xdc_Char)0x78,  /* [4131] */
    (xdc_Char)0x70,  /* [4132] */
    (xdc_Char)0x65,  /* [4133] */
    (xdc_Char)0x63,  /* [4134] */
    (xdc_Char)0x74,  /* [4135] */
    (xdc_Char)0x65,  /* [4136] */
    (xdc_Char)0x64,  /* [4137] */
    (xdc_Char)0x20,  /* [4138] */
    (xdc_Char)0x25,  /* [4139] */
    (xdc_Char)0x64,  /* [4140] */
    (xdc_Char)0x20,  /* [4141] */
    (xdc_Char)0x48,  /* [4142] */
    (xdc_Char)0x7a,  /* [4143] */
    (xdc_Char)0x2c,  /* [4144] */
    (xdc_Char)0x20,  /* [4145] */
    (xdc_Char)0x61,  /* [4146] */
    (xdc_Char)0x63,  /* [4147] */
    (xdc_Char)0x74,  /* [4148] */
    (xdc_Char)0x75,  /* [4149] */
    (xdc_Char)0x61,  /* [4150] */
    (xdc_Char)0x6c,  /* [4151] */
    (xdc_Char)0x3a,  /* [4152] */
    (xdc_Char)0x20,  /* [4153] */
    (xdc_Char)0x25,  /* [4154] */
    (xdc_Char)0x64,  /* [4155] */
    (xdc_Char)0x20,  /* [4156] */
    (xdc_Char)0x48,  /* [4157] */
    (xdc_Char)0x7a,  /* [4158] */
    (xdc_Char)0x2e,  /* [4159] */
    (xdc_Char)0x20,  /* [4160] */
    (xdc_Char)0x20,  /* [4161] */
    (xdc_Char)0x59,  /* [4162] */
    (xdc_Char)0x6f,  /* [4163] */
    (xdc_Char)0x75,  /* [4164] */
    (xdc_Char)0x20,  /* [4165] */
    (xdc_Char)0x6e,  /* [4166] */
    (xdc_Char)0x65,  /* [4167] */
    (xdc_Char)0x65,  /* [4168] */
    (xdc_Char)0x64,  /* [4169] */
    (xdc_Char)0x20,  /* [4170] */
    (xdc_Char)0x74,  /* [4171] */
    (xdc_Char)0x6f,  /* [4172] */
    (xdc_Char)0x20,  /* [4173] */
    (xdc_Char)0x6d,  /* [4174] */
    (xdc_Char)0x6f,  /* [4175] */
    (xdc_Char)0x64,  /* [4176] */
    (xdc_Char)0x69,  /* [4177] */
    (xdc_Char)0x66,  /* [4178] */
    (xdc_Char)0x79,  /* [4179] */
    (xdc_Char)0x20,  /* [4180] */
    (xdc_Char)0x54,  /* [4181] */
    (xdc_Char)0x69,  /* [4182] */
    (xdc_Char)0x6d,  /* [4183] */
    (xdc_Char)0x65,  /* [4184] */
    (xdc_Char)0x72,  /* [4185] */
    (xdc_Char)0x2e,  /* [4186] */
    (xdc_Char)0x69,  /* [4187] */
    (xdc_Char)0x6e,  /* [4188] */
    (xdc_Char)0x74,  /* [4189] */
    (xdc_Char)0x46,  /* [4190] */
    (xdc_Char)0x72,  /* [4191] */
    (xdc_Char)0x65,  /* [4192] */
    (xdc_Char)0x71,  /* [4193] */
    (xdc_Char)0x2e,  /* [4194] */
    (xdc_Char)0x6c,  /* [4195] */
    (xdc_Char)0x6f,  /* [4196] */
    (xdc_Char)0x20,  /* [4197] */
    (xdc_Char)0x74,  /* [4198] */
    (xdc_Char)0x6f,  /* [4199] */
    (xdc_Char)0x20,  /* [4200] */
    (xdc_Char)0x6d,  /* [4201] */
    (xdc_Char)0x61,  /* [4202] */
    (xdc_Char)0x74,  /* [4203] */
    (xdc_Char)0x63,  /* [4204] */
    (xdc_Char)0x68,  /* [4205] */
    (xdc_Char)0x20,  /* [4206] */
    (xdc_Char)0x74,  /* [4207] */
    (xdc_Char)0x68,  /* [4208] */
    (xdc_Char)0x65,  /* [4209] */
    (xdc_Char)0x20,  /* [4210] */
    (xdc_Char)0x61,  /* [4211] */
    (xdc_Char)0x63,  /* [4212] */
    (xdc_Char)0x74,  /* [4213] */
    (xdc_Char)0x75,  /* [4214] */
    (xdc_Char)0x61,  /* [4215] */
    (xdc_Char)0x6c,  /* [4216] */
    (xdc_Char)0x20,  /* [4217] */
    (xdc_Char)0x66,  /* [4218] */
    (xdc_Char)0x72,  /* [4219] */
    (xdc_Char)0x65,  /* [4220] */
    (xdc_Char)0x71,  /* [4221] */
    (xdc_Char)0x75,  /* [4222] */
    (xdc_Char)0x65,  /* [4223] */
    (xdc_Char)0x6e,  /* [4224] */
    (xdc_Char)0x63,  /* [4225] */
    (xdc_Char)0x79,  /* [4226] */
    (xdc_Char)0x2e,  /* [4227] */
    (xdc_Char)0x0,  /* [4228] */
    (xdc_Char)0x72,  /* [4229] */
    (xdc_Char)0x65,  /* [4230] */
    (xdc_Char)0x71,  /* [4231] */
    (xdc_Char)0x75,  /* [4232] */
    (xdc_Char)0x65,  /* [4233] */
    (xdc_Char)0x73,  /* [4234] */
    (xdc_Char)0x74,  /* [4235] */
    (xdc_Char)0x65,  /* [4236] */
    (xdc_Char)0x64,  /* [4237] */
    (xdc_Char)0x20,  /* [4238] */
    (xdc_Char)0x73,  /* [4239] */
    (xdc_Char)0x69,  /* [4240] */
    (xdc_Char)0x7a,  /* [4241] */
    (xdc_Char)0x65,  /* [4242] */
    (xdc_Char)0x20,  /* [4243] */
    (xdc_Char)0x69,  /* [4244] */
    (xdc_Char)0x73,  /* [4245] */
    (xdc_Char)0x20,  /* [4246] */
    (xdc_Char)0x74,  /* [4247] */
    (xdc_Char)0x6f,  /* [4248] */
    (xdc_Char)0x6f,  /* [4249] */
    (xdc_Char)0x20,  /* [4250] */
    (xdc_Char)0x62,  /* [4251] */
    (xdc_Char)0x69,  /* [4252] */
    (xdc_Char)0x67,  /* [4253] */
    (xdc_Char)0x3a,  /* [4254] */
    (xdc_Char)0x20,  /* [4255] */
    (xdc_Char)0x68,  /* [4256] */
    (xdc_Char)0x61,  /* [4257] */
    (xdc_Char)0x6e,  /* [4258] */
    (xdc_Char)0x64,  /* [4259] */
    (xdc_Char)0x6c,  /* [4260] */
    (xdc_Char)0x65,  /* [4261] */
    (xdc_Char)0x3d,  /* [4262] */
    (xdc_Char)0x30,  /* [4263] */
    (xdc_Char)0x78,  /* [4264] */
    (xdc_Char)0x25,  /* [4265] */
    (xdc_Char)0x78,  /* [4266] */
    (xdc_Char)0x2c,  /* [4267] */
    (xdc_Char)0x20,  /* [4268] */
    (xdc_Char)0x73,  /* [4269] */
    (xdc_Char)0x69,  /* [4270] */
    (xdc_Char)0x7a,  /* [4271] */
    (xdc_Char)0x65,  /* [4272] */
    (xdc_Char)0x3d,  /* [4273] */
    (xdc_Char)0x25,  /* [4274] */
    (xdc_Char)0x75,  /* [4275] */
    (xdc_Char)0x0,  /* [4276] */
    (xdc_Char)0x6f,  /* [4277] */
    (xdc_Char)0x75,  /* [4278] */
    (xdc_Char)0x74,  /* [4279] */
    (xdc_Char)0x20,  /* [4280] */
    (xdc_Char)0x6f,  /* [4281] */
    (xdc_Char)0x66,  /* [4282] */
    (xdc_Char)0x20,  /* [4283] */
    (xdc_Char)0x6d,  /* [4284] */
    (xdc_Char)0x65,  /* [4285] */
    (xdc_Char)0x6d,  /* [4286] */
    (xdc_Char)0x6f,  /* [4287] */
    (xdc_Char)0x72,  /* [4288] */
    (xdc_Char)0x79,  /* [4289] */
    (xdc_Char)0x3a,  /* [4290] */
    (xdc_Char)0x20,  /* [4291] */
    (xdc_Char)0x68,  /* [4292] */
    (xdc_Char)0x61,  /* [4293] */
    (xdc_Char)0x6e,  /* [4294] */
    (xdc_Char)0x64,  /* [4295] */
    (xdc_Char)0x6c,  /* [4296] */
    (xdc_Char)0x65,  /* [4297] */
    (xdc_Char)0x3d,  /* [4298] */
    (xdc_Char)0x30,  /* [4299] */
    (xdc_Char)0x78,  /* [4300] */
    (xdc_Char)0x25,  /* [4301] */
    (xdc_Char)0x78,  /* [4302] */
    (xdc_Char)0x2c,  /* [4303] */
    (xdc_Char)0x20,  /* [4304] */
    (xdc_Char)0x73,  /* [4305] */
    (xdc_Char)0x69,  /* [4306] */
    (xdc_Char)0x7a,  /* [4307] */
    (xdc_Char)0x65,  /* [4308] */
    (xdc_Char)0x3d,  /* [4309] */
    (xdc_Char)0x25,  /* [4310] */
    (xdc_Char)0x75,  /* [4311] */
    (xdc_Char)0x0,  /* [4312] */
    (xdc_Char)0x3c,  /* [4313] */
    (xdc_Char)0x2d,  /* [4314] */
    (xdc_Char)0x2d,  /* [4315] */
    (xdc_Char)0x20,  /* [4316] */
    (xdc_Char)0x63,  /* [4317] */
    (xdc_Char)0x6f,  /* [4318] */
    (xdc_Char)0x6e,  /* [4319] */
    (xdc_Char)0x73,  /* [4320] */
    (xdc_Char)0x74,  /* [4321] */
    (xdc_Char)0x72,  /* [4322] */
    (xdc_Char)0x75,  /* [4323] */
    (xdc_Char)0x63,  /* [4324] */
    (xdc_Char)0x74,  /* [4325] */
    (xdc_Char)0x3a,  /* [4326] */
    (xdc_Char)0x20,  /* [4327] */
    (xdc_Char)0x25,  /* [4328] */
    (xdc_Char)0x70,  /* [4329] */
    (xdc_Char)0x28,  /* [4330] */
    (xdc_Char)0x27,  /* [4331] */
    (xdc_Char)0x25,  /* [4332] */
    (xdc_Char)0x73,  /* [4333] */
    (xdc_Char)0x27,  /* [4334] */
    (xdc_Char)0x29,  /* [4335] */
    (xdc_Char)0x0,  /* [4336] */
    (xdc_Char)0x3c,  /* [4337] */
    (xdc_Char)0x2d,  /* [4338] */
    (xdc_Char)0x2d,  /* [4339] */
    (xdc_Char)0x20,  /* [4340] */
    (xdc_Char)0x63,  /* [4341] */
    (xdc_Char)0x72,  /* [4342] */
    (xdc_Char)0x65,  /* [4343] */
    (xdc_Char)0x61,  /* [4344] */
    (xdc_Char)0x74,  /* [4345] */
    (xdc_Char)0x65,  /* [4346] */
    (xdc_Char)0x3a,  /* [4347] */
    (xdc_Char)0x20,  /* [4348] */
    (xdc_Char)0x25,  /* [4349] */
    (xdc_Char)0x70,  /* [4350] */
    (xdc_Char)0x28,  /* [4351] */
    (xdc_Char)0x27,  /* [4352] */
    (xdc_Char)0x25,  /* [4353] */
    (xdc_Char)0x73,  /* [4354] */
    (xdc_Char)0x27,  /* [4355] */
    (xdc_Char)0x29,  /* [4356] */
    (xdc_Char)0x0,  /* [4357] */
    (xdc_Char)0x2d,  /* [4358] */
    (xdc_Char)0x2d,  /* [4359] */
    (xdc_Char)0x3e,  /* [4360] */
    (xdc_Char)0x20,  /* [4361] */
    (xdc_Char)0x64,  /* [4362] */
    (xdc_Char)0x65,  /* [4363] */
    (xdc_Char)0x73,  /* [4364] */
    (xdc_Char)0x74,  /* [4365] */
    (xdc_Char)0x72,  /* [4366] */
    (xdc_Char)0x75,  /* [4367] */
    (xdc_Char)0x63,  /* [4368] */
    (xdc_Char)0x74,  /* [4369] */
    (xdc_Char)0x3a,  /* [4370] */
    (xdc_Char)0x20,  /* [4371] */
    (xdc_Char)0x28,  /* [4372] */
    (xdc_Char)0x25,  /* [4373] */
    (xdc_Char)0x70,  /* [4374] */
    (xdc_Char)0x29,  /* [4375] */
    (xdc_Char)0x0,  /* [4376] */
    (xdc_Char)0x2d,  /* [4377] */
    (xdc_Char)0x2d,  /* [4378] */
    (xdc_Char)0x3e,  /* [4379] */
    (xdc_Char)0x20,  /* [4380] */
    (xdc_Char)0x64,  /* [4381] */
    (xdc_Char)0x65,  /* [4382] */
    (xdc_Char)0x6c,  /* [4383] */
    (xdc_Char)0x65,  /* [4384] */
    (xdc_Char)0x74,  /* [4385] */
    (xdc_Char)0x65,  /* [4386] */
    (xdc_Char)0x3a,  /* [4387] */
    (xdc_Char)0x20,  /* [4388] */
    (xdc_Char)0x28,  /* [4389] */
    (xdc_Char)0x25,  /* [4390] */
    (xdc_Char)0x70,  /* [4391] */
    (xdc_Char)0x29,  /* [4392] */
    (xdc_Char)0x0,  /* [4393] */
    (xdc_Char)0x45,  /* [4394] */
    (xdc_Char)0x52,  /* [4395] */
    (xdc_Char)0x52,  /* [4396] */
    (xdc_Char)0x4f,  /* [4397] */
    (xdc_Char)0x52,  /* [4398] */
    (xdc_Char)0x3a,  /* [4399] */
    (xdc_Char)0x20,  /* [4400] */
    (xdc_Char)0x25,  /* [4401] */
    (xdc_Char)0x24,  /* [4402] */
    (xdc_Char)0x46,  /* [4403] */
    (xdc_Char)0x25,  /* [4404] */
    (xdc_Char)0x24,  /* [4405] */
    (xdc_Char)0x53,  /* [4406] */
    (xdc_Char)0x0,  /* [4407] */
    (xdc_Char)0x57,  /* [4408] */
    (xdc_Char)0x41,  /* [4409] */
    (xdc_Char)0x52,  /* [4410] */
    (xdc_Char)0x4e,  /* [4411] */
    (xdc_Char)0x49,  /* [4412] */
    (xdc_Char)0x4e,  /* [4413] */
    (xdc_Char)0x47,  /* [4414] */
    (xdc_Char)0x3a,  /* [4415] */
    (xdc_Char)0x20,  /* [4416] */
    (xdc_Char)0x25,  /* [4417] */
    (xdc_Char)0x24,  /* [4418] */
    (xdc_Char)0x46,  /* [4419] */
    (xdc_Char)0x25,  /* [4420] */
    (xdc_Char)0x24,  /* [4421] */
    (xdc_Char)0x53,  /* [4422] */
    (xdc_Char)0x0,  /* [4423] */
    (xdc_Char)0x25,  /* [4424] */
    (xdc_Char)0x24,  /* [4425] */
    (xdc_Char)0x46,  /* [4426] */
    (xdc_Char)0x25,  /* [4427] */
    (xdc_Char)0x24,  /* [4428] */
    (xdc_Char)0x53,  /* [4429] */
    (xdc_Char)0x0,  /* [4430] */
    (xdc_Char)0x53,  /* [4431] */
    (xdc_Char)0x74,  /* [4432] */
    (xdc_Char)0x61,  /* [4433] */
    (xdc_Char)0x72,  /* [4434] */
    (xdc_Char)0x74,  /* [4435] */
    (xdc_Char)0x3a,  /* [4436] */
    (xdc_Char)0x20,  /* [4437] */
    (xdc_Char)0x25,  /* [4438] */
    (xdc_Char)0x24,  /* [4439] */
    (xdc_Char)0x53,  /* [4440] */
    (xdc_Char)0x0,  /* [4441] */
    (xdc_Char)0x53,  /* [4442] */
    (xdc_Char)0x74,  /* [4443] */
    (xdc_Char)0x6f,  /* [4444] */
    (xdc_Char)0x70,  /* [4445] */
    (xdc_Char)0x3a,  /* [4446] */
    (xdc_Char)0x20,  /* [4447] */
    (xdc_Char)0x25,  /* [4448] */
    (xdc_Char)0x24,  /* [4449] */
    (xdc_Char)0x53,  /* [4450] */
    (xdc_Char)0x0,  /* [4451] */
    (xdc_Char)0x53,  /* [4452] */
    (xdc_Char)0x74,  /* [4453] */
    (xdc_Char)0x61,  /* [4454] */
    (xdc_Char)0x72,  /* [4455] */
    (xdc_Char)0x74,  /* [4456] */
    (xdc_Char)0x49,  /* [4457] */
    (xdc_Char)0x6e,  /* [4458] */
    (xdc_Char)0x73,  /* [4459] */
    (xdc_Char)0x74,  /* [4460] */
    (xdc_Char)0x61,  /* [4461] */
    (xdc_Char)0x6e,  /* [4462] */
    (xdc_Char)0x63,  /* [4463] */
    (xdc_Char)0x65,  /* [4464] */
    (xdc_Char)0x3a,  /* [4465] */
    (xdc_Char)0x20,  /* [4466] */
    (xdc_Char)0x25,  /* [4467] */
    (xdc_Char)0x24,  /* [4468] */
    (xdc_Char)0x53,  /* [4469] */
    (xdc_Char)0x0,  /* [4470] */
    (xdc_Char)0x53,  /* [4471] */
    (xdc_Char)0x74,  /* [4472] */
    (xdc_Char)0x6f,  /* [4473] */
    (xdc_Char)0x70,  /* [4474] */
    (xdc_Char)0x49,  /* [4475] */
    (xdc_Char)0x6e,  /* [4476] */
    (xdc_Char)0x73,  /* [4477] */
    (xdc_Char)0x74,  /* [4478] */
    (xdc_Char)0x61,  /* [4479] */
    (xdc_Char)0x6e,  /* [4480] */
    (xdc_Char)0x63,  /* [4481] */
    (xdc_Char)0x65,  /* [4482] */
    (xdc_Char)0x3a,  /* [4483] */
    (xdc_Char)0x20,  /* [4484] */
    (xdc_Char)0x25,  /* [4485] */
    (xdc_Char)0x24,  /* [4486] */
    (xdc_Char)0x53,  /* [4487] */
    (xdc_Char)0x0,  /* [4488] */
    (xdc_Char)0x4c,  /* [4489] */
    (xdc_Char)0x57,  /* [4490] */
    (xdc_Char)0x5f,  /* [4491] */
    (xdc_Char)0x64,  /* [4492] */
    (xdc_Char)0x65,  /* [4493] */
    (xdc_Char)0x6c,  /* [4494] */
    (xdc_Char)0x61,  /* [4495] */
    (xdc_Char)0x79,  /* [4496] */
    (xdc_Char)0x65,  /* [4497] */
    (xdc_Char)0x64,  /* [4498] */
    (xdc_Char)0x3a,  /* [4499] */
    (xdc_Char)0x20,  /* [4500] */
    (xdc_Char)0x64,  /* [4501] */
    (xdc_Char)0x65,  /* [4502] */
    (xdc_Char)0x6c,  /* [4503] */
    (xdc_Char)0x61,  /* [4504] */
    (xdc_Char)0x79,  /* [4505] */
    (xdc_Char)0x3a,  /* [4506] */
    (xdc_Char)0x20,  /* [4507] */
    (xdc_Char)0x25,  /* [4508] */
    (xdc_Char)0x64,  /* [4509] */
    (xdc_Char)0x0,  /* [4510] */
    (xdc_Char)0x4c,  /* [4511] */
    (xdc_Char)0x4d,  /* [4512] */
    (xdc_Char)0x5f,  /* [4513] */
    (xdc_Char)0x74,  /* [4514] */
    (xdc_Char)0x69,  /* [4515] */
    (xdc_Char)0x63,  /* [4516] */
    (xdc_Char)0x6b,  /* [4517] */
    (xdc_Char)0x3a,  /* [4518] */
    (xdc_Char)0x20,  /* [4519] */
    (xdc_Char)0x74,  /* [4520] */
    (xdc_Char)0x69,  /* [4521] */
    (xdc_Char)0x63,  /* [4522] */
    (xdc_Char)0x6b,  /* [4523] */
    (xdc_Char)0x3a,  /* [4524] */
    (xdc_Char)0x20,  /* [4525] */
    (xdc_Char)0x25,  /* [4526] */
    (xdc_Char)0x64,  /* [4527] */
    (xdc_Char)0x0,  /* [4528] */
    (xdc_Char)0x4c,  /* [4529] */
    (xdc_Char)0x4d,  /* [4530] */
    (xdc_Char)0x5f,  /* [4531] */
    (xdc_Char)0x62,  /* [4532] */
    (xdc_Char)0x65,  /* [4533] */
    (xdc_Char)0x67,  /* [4534] */
    (xdc_Char)0x69,  /* [4535] */
    (xdc_Char)0x6e,  /* [4536] */
    (xdc_Char)0x3a,  /* [4537] */
    (xdc_Char)0x20,  /* [4538] */
    (xdc_Char)0x63,  /* [4539] */
    (xdc_Char)0x6c,  /* [4540] */
    (xdc_Char)0x6b,  /* [4541] */
    (xdc_Char)0x3a,  /* [4542] */
    (xdc_Char)0x20,  /* [4543] */
    (xdc_Char)0x30,  /* [4544] */
    (xdc_Char)0x78,  /* [4545] */
    (xdc_Char)0x25,  /* [4546] */
    (xdc_Char)0x78,  /* [4547] */
    (xdc_Char)0x2c,  /* [4548] */
    (xdc_Char)0x20,  /* [4549] */
    (xdc_Char)0x66,  /* [4550] */
    (xdc_Char)0x75,  /* [4551] */
    (xdc_Char)0x6e,  /* [4552] */
    (xdc_Char)0x63,  /* [4553] */
    (xdc_Char)0x3a,  /* [4554] */
    (xdc_Char)0x20,  /* [4555] */
    (xdc_Char)0x30,  /* [4556] */
    (xdc_Char)0x78,  /* [4557] */
    (xdc_Char)0x25,  /* [4558] */
    (xdc_Char)0x78,  /* [4559] */
    (xdc_Char)0x0,  /* [4560] */
    (xdc_Char)0x4c,  /* [4561] */
    (xdc_Char)0x4d,  /* [4562] */
    (xdc_Char)0x5f,  /* [4563] */
    (xdc_Char)0x70,  /* [4564] */
    (xdc_Char)0x6f,  /* [4565] */
    (xdc_Char)0x73,  /* [4566] */
    (xdc_Char)0x74,  /* [4567] */
    (xdc_Char)0x3a,  /* [4568] */
    (xdc_Char)0x20,  /* [4569] */
    (xdc_Char)0x73,  /* [4570] */
    (xdc_Char)0x65,  /* [4571] */
    (xdc_Char)0x6d,  /* [4572] */
    (xdc_Char)0x3a,  /* [4573] */
    (xdc_Char)0x20,  /* [4574] */
    (xdc_Char)0x30,  /* [4575] */
    (xdc_Char)0x78,  /* [4576] */
    (xdc_Char)0x25,  /* [4577] */
    (xdc_Char)0x78,  /* [4578] */
    (xdc_Char)0x2c,  /* [4579] */
    (xdc_Char)0x20,  /* [4580] */
    (xdc_Char)0x63,  /* [4581] */
    (xdc_Char)0x6f,  /* [4582] */
    (xdc_Char)0x75,  /* [4583] */
    (xdc_Char)0x6e,  /* [4584] */
    (xdc_Char)0x74,  /* [4585] */
    (xdc_Char)0x3a,  /* [4586] */
    (xdc_Char)0x20,  /* [4587] */
    (xdc_Char)0x25,  /* [4588] */
    (xdc_Char)0x64,  /* [4589] */
    (xdc_Char)0x0,  /* [4590] */
    (xdc_Char)0x4c,  /* [4591] */
    (xdc_Char)0x4d,  /* [4592] */
    (xdc_Char)0x5f,  /* [4593] */
    (xdc_Char)0x70,  /* [4594] */
    (xdc_Char)0x65,  /* [4595] */
    (xdc_Char)0x6e,  /* [4596] */
    (xdc_Char)0x64,  /* [4597] */
    (xdc_Char)0x3a,  /* [4598] */
    (xdc_Char)0x20,  /* [4599] */
    (xdc_Char)0x73,  /* [4600] */
    (xdc_Char)0x65,  /* [4601] */
    (xdc_Char)0x6d,  /* [4602] */
    (xdc_Char)0x3a,  /* [4603] */
    (xdc_Char)0x20,  /* [4604] */
    (xdc_Char)0x30,  /* [4605] */
    (xdc_Char)0x78,  /* [4606] */
    (xdc_Char)0x25,  /* [4607] */
    (xdc_Char)0x78,  /* [4608] */
    (xdc_Char)0x2c,  /* [4609] */
    (xdc_Char)0x20,  /* [4610] */
    (xdc_Char)0x63,  /* [4611] */
    (xdc_Char)0x6f,  /* [4612] */
    (xdc_Char)0x75,  /* [4613] */
    (xdc_Char)0x6e,  /* [4614] */
    (xdc_Char)0x74,  /* [4615] */
    (xdc_Char)0x3a,  /* [4616] */
    (xdc_Char)0x20,  /* [4617] */
    (xdc_Char)0x25,  /* [4618] */
    (xdc_Char)0x64,  /* [4619] */
    (xdc_Char)0x2c,  /* [4620] */
    (xdc_Char)0x20,  /* [4621] */
    (xdc_Char)0x74,  /* [4622] */
    (xdc_Char)0x69,  /* [4623] */
    (xdc_Char)0x6d,  /* [4624] */
    (xdc_Char)0x65,  /* [4625] */
    (xdc_Char)0x6f,  /* [4626] */
    (xdc_Char)0x75,  /* [4627] */
    (xdc_Char)0x74,  /* [4628] */
    (xdc_Char)0x3a,  /* [4629] */
    (xdc_Char)0x20,  /* [4630] */
    (xdc_Char)0x25,  /* [4631] */
    (xdc_Char)0x64,  /* [4632] */
    (xdc_Char)0x0,  /* [4633] */
    (xdc_Char)0x4c,  /* [4634] */
    (xdc_Char)0x4d,  /* [4635] */
    (xdc_Char)0x5f,  /* [4636] */
    (xdc_Char)0x62,  /* [4637] */
    (xdc_Char)0x65,  /* [4638] */
    (xdc_Char)0x67,  /* [4639] */
    (xdc_Char)0x69,  /* [4640] */
    (xdc_Char)0x6e,  /* [4641] */
    (xdc_Char)0x3a,  /* [4642] */
    (xdc_Char)0x20,  /* [4643] */
    (xdc_Char)0x73,  /* [4644] */
    (xdc_Char)0x77,  /* [4645] */
    (xdc_Char)0x69,  /* [4646] */
    (xdc_Char)0x3a,  /* [4647] */
    (xdc_Char)0x20,  /* [4648] */
    (xdc_Char)0x30,  /* [4649] */
    (xdc_Char)0x78,  /* [4650] */
    (xdc_Char)0x25,  /* [4651] */
    (xdc_Char)0x78,  /* [4652] */
    (xdc_Char)0x2c,  /* [4653] */
    (xdc_Char)0x20,  /* [4654] */
    (xdc_Char)0x66,  /* [4655] */
    (xdc_Char)0x75,  /* [4656] */
    (xdc_Char)0x6e,  /* [4657] */
    (xdc_Char)0x63,  /* [4658] */
    (xdc_Char)0x3a,  /* [4659] */
    (xdc_Char)0x20,  /* [4660] */
    (xdc_Char)0x30,  /* [4661] */
    (xdc_Char)0x78,  /* [4662] */
    (xdc_Char)0x25,  /* [4663] */
    (xdc_Char)0x78,  /* [4664] */
    (xdc_Char)0x2c,  /* [4665] */
    (xdc_Char)0x20,  /* [4666] */
    (xdc_Char)0x70,  /* [4667] */
    (xdc_Char)0x72,  /* [4668] */
    (xdc_Char)0x65,  /* [4669] */
    (xdc_Char)0x54,  /* [4670] */
    (xdc_Char)0x68,  /* [4671] */
    (xdc_Char)0x72,  /* [4672] */
    (xdc_Char)0x65,  /* [4673] */
    (xdc_Char)0x61,  /* [4674] */
    (xdc_Char)0x64,  /* [4675] */
    (xdc_Char)0x3a,  /* [4676] */
    (xdc_Char)0x20,  /* [4677] */
    (xdc_Char)0x25,  /* [4678] */
    (xdc_Char)0x64,  /* [4679] */
    (xdc_Char)0x0,  /* [4680] */
    (xdc_Char)0x4c,  /* [4681] */
    (xdc_Char)0x44,  /* [4682] */
    (xdc_Char)0x5f,  /* [4683] */
    (xdc_Char)0x65,  /* [4684] */
    (xdc_Char)0x6e,  /* [4685] */
    (xdc_Char)0x64,  /* [4686] */
    (xdc_Char)0x3a,  /* [4687] */
    (xdc_Char)0x20,  /* [4688] */
    (xdc_Char)0x73,  /* [4689] */
    (xdc_Char)0x77,  /* [4690] */
    (xdc_Char)0x69,  /* [4691] */
    (xdc_Char)0x3a,  /* [4692] */
    (xdc_Char)0x20,  /* [4693] */
    (xdc_Char)0x30,  /* [4694] */
    (xdc_Char)0x78,  /* [4695] */
    (xdc_Char)0x25,  /* [4696] */
    (xdc_Char)0x78,  /* [4697] */
    (xdc_Char)0x0,  /* [4698] */
    (xdc_Char)0x4c,  /* [4699] */
    (xdc_Char)0x4d,  /* [4700] */
    (xdc_Char)0x5f,  /* [4701] */
    (xdc_Char)0x70,  /* [4702] */
    (xdc_Char)0x6f,  /* [4703] */
    (xdc_Char)0x73,  /* [4704] */
    (xdc_Char)0x74,  /* [4705] */
    (xdc_Char)0x3a,  /* [4706] */
    (xdc_Char)0x20,  /* [4707] */
    (xdc_Char)0x73,  /* [4708] */
    (xdc_Char)0x77,  /* [4709] */
    (xdc_Char)0x69,  /* [4710] */
    (xdc_Char)0x3a,  /* [4711] */
    (xdc_Char)0x20,  /* [4712] */
    (xdc_Char)0x30,  /* [4713] */
    (xdc_Char)0x78,  /* [4714] */
    (xdc_Char)0x25,  /* [4715] */
    (xdc_Char)0x78,  /* [4716] */
    (xdc_Char)0x2c,  /* [4717] */
    (xdc_Char)0x20,  /* [4718] */
    (xdc_Char)0x66,  /* [4719] */
    (xdc_Char)0x75,  /* [4720] */
    (xdc_Char)0x6e,  /* [4721] */
    (xdc_Char)0x63,  /* [4722] */
    (xdc_Char)0x3a,  /* [4723] */
    (xdc_Char)0x20,  /* [4724] */
    (xdc_Char)0x30,  /* [4725] */
    (xdc_Char)0x78,  /* [4726] */
    (xdc_Char)0x25,  /* [4727] */
    (xdc_Char)0x78,  /* [4728] */
    (xdc_Char)0x2c,  /* [4729] */
    (xdc_Char)0x20,  /* [4730] */
    (xdc_Char)0x70,  /* [4731] */
    (xdc_Char)0x72,  /* [4732] */
    (xdc_Char)0x69,  /* [4733] */
    (xdc_Char)0x3a,  /* [4734] */
    (xdc_Char)0x20,  /* [4735] */
    (xdc_Char)0x25,  /* [4736] */
    (xdc_Char)0x64,  /* [4737] */
    (xdc_Char)0x0,  /* [4738] */
    (xdc_Char)0x4c,  /* [4739] */
    (xdc_Char)0x4d,  /* [4740] */
    (xdc_Char)0x5f,  /* [4741] */
    (xdc_Char)0x73,  /* [4742] */
    (xdc_Char)0x77,  /* [4743] */
    (xdc_Char)0x69,  /* [4744] */
    (xdc_Char)0x74,  /* [4745] */
    (xdc_Char)0x63,  /* [4746] */
    (xdc_Char)0x68,  /* [4747] */
    (xdc_Char)0x3a,  /* [4748] */
    (xdc_Char)0x20,  /* [4749] */
    (xdc_Char)0x6f,  /* [4750] */
    (xdc_Char)0x6c,  /* [4751] */
    (xdc_Char)0x64,  /* [4752] */
    (xdc_Char)0x74,  /* [4753] */
    (xdc_Char)0x73,  /* [4754] */
    (xdc_Char)0x6b,  /* [4755] */
    (xdc_Char)0x3a,  /* [4756] */
    (xdc_Char)0x20,  /* [4757] */
    (xdc_Char)0x30,  /* [4758] */
    (xdc_Char)0x78,  /* [4759] */
    (xdc_Char)0x25,  /* [4760] */
    (xdc_Char)0x78,  /* [4761] */
    (xdc_Char)0x2c,  /* [4762] */
    (xdc_Char)0x20,  /* [4763] */
    (xdc_Char)0x6f,  /* [4764] */
    (xdc_Char)0x6c,  /* [4765] */
    (xdc_Char)0x64,  /* [4766] */
    (xdc_Char)0x66,  /* [4767] */
    (xdc_Char)0x75,  /* [4768] */
    (xdc_Char)0x6e,  /* [4769] */
    (xdc_Char)0x63,  /* [4770] */
    (xdc_Char)0x3a,  /* [4771] */
    (xdc_Char)0x20,  /* [4772] */
    (xdc_Char)0x30,  /* [4773] */
    (xdc_Char)0x78,  /* [4774] */
    (xdc_Char)0x25,  /* [4775] */
    (xdc_Char)0x78,  /* [4776] */
    (xdc_Char)0x2c,  /* [4777] */
    (xdc_Char)0x20,  /* [4778] */
    (xdc_Char)0x6e,  /* [4779] */
    (xdc_Char)0x65,  /* [4780] */
    (xdc_Char)0x77,  /* [4781] */
    (xdc_Char)0x74,  /* [4782] */
    (xdc_Char)0x73,  /* [4783] */
    (xdc_Char)0x6b,  /* [4784] */
    (xdc_Char)0x3a,  /* [4785] */
    (xdc_Char)0x20,  /* [4786] */
    (xdc_Char)0x30,  /* [4787] */
    (xdc_Char)0x78,  /* [4788] */
    (xdc_Char)0x25,  /* [4789] */
    (xdc_Char)0x78,  /* [4790] */
    (xdc_Char)0x2c,  /* [4791] */
    (xdc_Char)0x20,  /* [4792] */
    (xdc_Char)0x6e,  /* [4793] */
    (xdc_Char)0x65,  /* [4794] */
    (xdc_Char)0x77,  /* [4795] */
    (xdc_Char)0x66,  /* [4796] */
    (xdc_Char)0x75,  /* [4797] */
    (xdc_Char)0x6e,  /* [4798] */
    (xdc_Char)0x63,  /* [4799] */
    (xdc_Char)0x3a,  /* [4800] */
    (xdc_Char)0x20,  /* [4801] */
    (xdc_Char)0x30,  /* [4802] */
    (xdc_Char)0x78,  /* [4803] */
    (xdc_Char)0x25,  /* [4804] */
    (xdc_Char)0x78,  /* [4805] */
    (xdc_Char)0x0,  /* [4806] */
    (xdc_Char)0x4c,  /* [4807] */
    (xdc_Char)0x4d,  /* [4808] */
    (xdc_Char)0x5f,  /* [4809] */
    (xdc_Char)0x73,  /* [4810] */
    (xdc_Char)0x6c,  /* [4811] */
    (xdc_Char)0x65,  /* [4812] */
    (xdc_Char)0x65,  /* [4813] */
    (xdc_Char)0x70,  /* [4814] */
    (xdc_Char)0x3a,  /* [4815] */
    (xdc_Char)0x20,  /* [4816] */
    (xdc_Char)0x74,  /* [4817] */
    (xdc_Char)0x73,  /* [4818] */
    (xdc_Char)0x6b,  /* [4819] */
    (xdc_Char)0x3a,  /* [4820] */
    (xdc_Char)0x20,  /* [4821] */
    (xdc_Char)0x30,  /* [4822] */
    (xdc_Char)0x78,  /* [4823] */
    (xdc_Char)0x25,  /* [4824] */
    (xdc_Char)0x78,  /* [4825] */
    (xdc_Char)0x2c,  /* [4826] */
    (xdc_Char)0x20,  /* [4827] */
    (xdc_Char)0x66,  /* [4828] */
    (xdc_Char)0x75,  /* [4829] */
    (xdc_Char)0x6e,  /* [4830] */
    (xdc_Char)0x63,  /* [4831] */
    (xdc_Char)0x3a,  /* [4832] */
    (xdc_Char)0x20,  /* [4833] */
    (xdc_Char)0x30,  /* [4834] */
    (xdc_Char)0x78,  /* [4835] */
    (xdc_Char)0x25,  /* [4836] */
    (xdc_Char)0x78,  /* [4837] */
    (xdc_Char)0x2c,  /* [4838] */
    (xdc_Char)0x20,  /* [4839] */
    (xdc_Char)0x74,  /* [4840] */
    (xdc_Char)0x69,  /* [4841] */
    (xdc_Char)0x6d,  /* [4842] */
    (xdc_Char)0x65,  /* [4843] */
    (xdc_Char)0x6f,  /* [4844] */
    (xdc_Char)0x75,  /* [4845] */
    (xdc_Char)0x74,  /* [4846] */
    (xdc_Char)0x3a,  /* [4847] */
    (xdc_Char)0x20,  /* [4848] */
    (xdc_Char)0x25,  /* [4849] */
    (xdc_Char)0x64,  /* [4850] */
    (xdc_Char)0x0,  /* [4851] */
    (xdc_Char)0x4c,  /* [4852] */
    (xdc_Char)0x44,  /* [4853] */
    (xdc_Char)0x5f,  /* [4854] */
    (xdc_Char)0x72,  /* [4855] */
    (xdc_Char)0x65,  /* [4856] */
    (xdc_Char)0x61,  /* [4857] */
    (xdc_Char)0x64,  /* [4858] */
    (xdc_Char)0x79,  /* [4859] */
    (xdc_Char)0x3a,  /* [4860] */
    (xdc_Char)0x20,  /* [4861] */
    (xdc_Char)0x74,  /* [4862] */
    (xdc_Char)0x73,  /* [4863] */
    (xdc_Char)0x6b,  /* [4864] */
    (xdc_Char)0x3a,  /* [4865] */
    (xdc_Char)0x20,  /* [4866] */
    (xdc_Char)0x30,  /* [4867] */
    (xdc_Char)0x78,  /* [4868] */
    (xdc_Char)0x25,  /* [4869] */
    (xdc_Char)0x78,  /* [4870] */
    (xdc_Char)0x2c,  /* [4871] */
    (xdc_Char)0x20,  /* [4872] */
    (xdc_Char)0x66,  /* [4873] */
    (xdc_Char)0x75,  /* [4874] */
    (xdc_Char)0x6e,  /* [4875] */
    (xdc_Char)0x63,  /* [4876] */
    (xdc_Char)0x3a,  /* [4877] */
    (xdc_Char)0x20,  /* [4878] */
    (xdc_Char)0x30,  /* [4879] */
    (xdc_Char)0x78,  /* [4880] */
    (xdc_Char)0x25,  /* [4881] */
    (xdc_Char)0x78,  /* [4882] */
    (xdc_Char)0x2c,  /* [4883] */
    (xdc_Char)0x20,  /* [4884] */
    (xdc_Char)0x70,  /* [4885] */
    (xdc_Char)0x72,  /* [4886] */
    (xdc_Char)0x69,  /* [4887] */
    (xdc_Char)0x3a,  /* [4888] */
    (xdc_Char)0x20,  /* [4889] */
    (xdc_Char)0x25,  /* [4890] */
    (xdc_Char)0x64,  /* [4891] */
    (xdc_Char)0x0,  /* [4892] */
    (xdc_Char)0x4c,  /* [4893] */
    (xdc_Char)0x44,  /* [4894] */
    (xdc_Char)0x5f,  /* [4895] */
    (xdc_Char)0x62,  /* [4896] */
    (xdc_Char)0x6c,  /* [4897] */
    (xdc_Char)0x6f,  /* [4898] */
    (xdc_Char)0x63,  /* [4899] */
    (xdc_Char)0x6b,  /* [4900] */
    (xdc_Char)0x3a,  /* [4901] */
    (xdc_Char)0x20,  /* [4902] */
    (xdc_Char)0x74,  /* [4903] */
    (xdc_Char)0x73,  /* [4904] */
    (xdc_Char)0x6b,  /* [4905] */
    (xdc_Char)0x3a,  /* [4906] */
    (xdc_Char)0x20,  /* [4907] */
    (xdc_Char)0x30,  /* [4908] */
    (xdc_Char)0x78,  /* [4909] */
    (xdc_Char)0x25,  /* [4910] */
    (xdc_Char)0x78,  /* [4911] */
    (xdc_Char)0x2c,  /* [4912] */
    (xdc_Char)0x20,  /* [4913] */
    (xdc_Char)0x66,  /* [4914] */
    (xdc_Char)0x75,  /* [4915] */
    (xdc_Char)0x6e,  /* [4916] */
    (xdc_Char)0x63,  /* [4917] */
    (xdc_Char)0x3a,  /* [4918] */
    (xdc_Char)0x20,  /* [4919] */
    (xdc_Char)0x30,  /* [4920] */
    (xdc_Char)0x78,  /* [4921] */
    (xdc_Char)0x25,  /* [4922] */
    (xdc_Char)0x78,  /* [4923] */
    (xdc_Char)0x0,  /* [4924] */
    (xdc_Char)0x4c,  /* [4925] */
    (xdc_Char)0x4d,  /* [4926] */
    (xdc_Char)0x5f,  /* [4927] */
    (xdc_Char)0x79,  /* [4928] */
    (xdc_Char)0x69,  /* [4929] */
    (xdc_Char)0x65,  /* [4930] */
    (xdc_Char)0x6c,  /* [4931] */
    (xdc_Char)0x64,  /* [4932] */
    (xdc_Char)0x3a,  /* [4933] */
    (xdc_Char)0x20,  /* [4934] */
    (xdc_Char)0x74,  /* [4935] */
    (xdc_Char)0x73,  /* [4936] */
    (xdc_Char)0x6b,  /* [4937] */
    (xdc_Char)0x3a,  /* [4938] */
    (xdc_Char)0x20,  /* [4939] */
    (xdc_Char)0x30,  /* [4940] */
    (xdc_Char)0x78,  /* [4941] */
    (xdc_Char)0x25,  /* [4942] */
    (xdc_Char)0x78,  /* [4943] */
    (xdc_Char)0x2c,  /* [4944] */
    (xdc_Char)0x20,  /* [4945] */
    (xdc_Char)0x66,  /* [4946] */
    (xdc_Char)0x75,  /* [4947] */
    (xdc_Char)0x6e,  /* [4948] */
    (xdc_Char)0x63,  /* [4949] */
    (xdc_Char)0x3a,  /* [4950] */
    (xdc_Char)0x20,  /* [4951] */
    (xdc_Char)0x30,  /* [4952] */
    (xdc_Char)0x78,  /* [4953] */
    (xdc_Char)0x25,  /* [4954] */
    (xdc_Char)0x78,  /* [4955] */
    (xdc_Char)0x2c,  /* [4956] */
    (xdc_Char)0x20,  /* [4957] */
    (xdc_Char)0x63,  /* [4958] */
    (xdc_Char)0x75,  /* [4959] */
    (xdc_Char)0x72,  /* [4960] */
    (xdc_Char)0x72,  /* [4961] */
    (xdc_Char)0x54,  /* [4962] */
    (xdc_Char)0x68,  /* [4963] */
    (xdc_Char)0x72,  /* [4964] */
    (xdc_Char)0x65,  /* [4965] */
    (xdc_Char)0x61,  /* [4966] */
    (xdc_Char)0x64,  /* [4967] */
    (xdc_Char)0x3a,  /* [4968] */
    (xdc_Char)0x20,  /* [4969] */
    (xdc_Char)0x25,  /* [4970] */
    (xdc_Char)0x64,  /* [4971] */
    (xdc_Char)0x0,  /* [4972] */
    (xdc_Char)0x4c,  /* [4973] */
    (xdc_Char)0x4d,  /* [4974] */
    (xdc_Char)0x5f,  /* [4975] */
    (xdc_Char)0x73,  /* [4976] */
    (xdc_Char)0x65,  /* [4977] */
    (xdc_Char)0x74,  /* [4978] */
    (xdc_Char)0x50,  /* [4979] */
    (xdc_Char)0x72,  /* [4980] */
    (xdc_Char)0x69,  /* [4981] */
    (xdc_Char)0x3a,  /* [4982] */
    (xdc_Char)0x20,  /* [4983] */
    (xdc_Char)0x74,  /* [4984] */
    (xdc_Char)0x73,  /* [4985] */
    (xdc_Char)0x6b,  /* [4986] */
    (xdc_Char)0x3a,  /* [4987] */
    (xdc_Char)0x20,  /* [4988] */
    (xdc_Char)0x30,  /* [4989] */
    (xdc_Char)0x78,  /* [4990] */
    (xdc_Char)0x25,  /* [4991] */
    (xdc_Char)0x78,  /* [4992] */
    (xdc_Char)0x2c,  /* [4993] */
    (xdc_Char)0x20,  /* [4994] */
    (xdc_Char)0x66,  /* [4995] */
    (xdc_Char)0x75,  /* [4996] */
    (xdc_Char)0x6e,  /* [4997] */
    (xdc_Char)0x63,  /* [4998] */
    (xdc_Char)0x3a,  /* [4999] */
    (xdc_Char)0x20,  /* [5000] */
    (xdc_Char)0x30,  /* [5001] */
    (xdc_Char)0x78,  /* [5002] */
    (xdc_Char)0x25,  /* [5003] */
    (xdc_Char)0x78,  /* [5004] */
    (xdc_Char)0x2c,  /* [5005] */
    (xdc_Char)0x20,  /* [5006] */
    (xdc_Char)0x6f,  /* [5007] */
    (xdc_Char)0x6c,  /* [5008] */
    (xdc_Char)0x64,  /* [5009] */
    (xdc_Char)0x50,  /* [5010] */
    (xdc_Char)0x72,  /* [5011] */
    (xdc_Char)0x69,  /* [5012] */
    (xdc_Char)0x3a,  /* [5013] */
    (xdc_Char)0x20,  /* [5014] */
    (xdc_Char)0x25,  /* [5015] */
    (xdc_Char)0x64,  /* [5016] */
    (xdc_Char)0x2c,  /* [5017] */
    (xdc_Char)0x20,  /* [5018] */
    (xdc_Char)0x6e,  /* [5019] */
    (xdc_Char)0x65,  /* [5020] */
    (xdc_Char)0x77,  /* [5021] */
    (xdc_Char)0x50,  /* [5022] */
    (xdc_Char)0x72,  /* [5023] */
    (xdc_Char)0x69,  /* [5024] */
    (xdc_Char)0x20,  /* [5025] */
    (xdc_Char)0x25,  /* [5026] */
    (xdc_Char)0x64,  /* [5027] */
    (xdc_Char)0x0,  /* [5028] */
    (xdc_Char)0x4c,  /* [5029] */
    (xdc_Char)0x44,  /* [5030] */
    (xdc_Char)0x5f,  /* [5031] */
    (xdc_Char)0x65,  /* [5032] */
    (xdc_Char)0x78,  /* [5033] */
    (xdc_Char)0x69,  /* [5034] */
    (xdc_Char)0x74,  /* [5035] */
    (xdc_Char)0x3a,  /* [5036] */
    (xdc_Char)0x20,  /* [5037] */
    (xdc_Char)0x74,  /* [5038] */
    (xdc_Char)0x73,  /* [5039] */
    (xdc_Char)0x6b,  /* [5040] */
    (xdc_Char)0x3a,  /* [5041] */
    (xdc_Char)0x20,  /* [5042] */
    (xdc_Char)0x30,  /* [5043] */
    (xdc_Char)0x78,  /* [5044] */
    (xdc_Char)0x25,  /* [5045] */
    (xdc_Char)0x78,  /* [5046] */
    (xdc_Char)0x2c,  /* [5047] */
    (xdc_Char)0x20,  /* [5048] */
    (xdc_Char)0x66,  /* [5049] */
    (xdc_Char)0x75,  /* [5050] */
    (xdc_Char)0x6e,  /* [5051] */
    (xdc_Char)0x63,  /* [5052] */
    (xdc_Char)0x3a,  /* [5053] */
    (xdc_Char)0x20,  /* [5054] */
    (xdc_Char)0x30,  /* [5055] */
    (xdc_Char)0x78,  /* [5056] */
    (xdc_Char)0x25,  /* [5057] */
    (xdc_Char)0x78,  /* [5058] */
    (xdc_Char)0x0,  /* [5059] */
    (xdc_Char)0x4c,  /* [5060] */
    (xdc_Char)0x4d,  /* [5061] */
    (xdc_Char)0x5f,  /* [5062] */
    (xdc_Char)0x73,  /* [5063] */
    (xdc_Char)0x65,  /* [5064] */
    (xdc_Char)0x74,  /* [5065] */
    (xdc_Char)0x41,  /* [5066] */
    (xdc_Char)0x66,  /* [5067] */
    (xdc_Char)0x66,  /* [5068] */
    (xdc_Char)0x69,  /* [5069] */
    (xdc_Char)0x6e,  /* [5070] */
    (xdc_Char)0x69,  /* [5071] */
    (xdc_Char)0x74,  /* [5072] */
    (xdc_Char)0x79,  /* [5073] */
    (xdc_Char)0x3a,  /* [5074] */
    (xdc_Char)0x20,  /* [5075] */
    (xdc_Char)0x74,  /* [5076] */
    (xdc_Char)0x73,  /* [5077] */
    (xdc_Char)0x6b,  /* [5078] */
    (xdc_Char)0x3a,  /* [5079] */
    (xdc_Char)0x20,  /* [5080] */
    (xdc_Char)0x30,  /* [5081] */
    (xdc_Char)0x78,  /* [5082] */
    (xdc_Char)0x25,  /* [5083] */
    (xdc_Char)0x78,  /* [5084] */
    (xdc_Char)0x2c,  /* [5085] */
    (xdc_Char)0x20,  /* [5086] */
    (xdc_Char)0x66,  /* [5087] */
    (xdc_Char)0x75,  /* [5088] */
    (xdc_Char)0x6e,  /* [5089] */
    (xdc_Char)0x63,  /* [5090] */
    (xdc_Char)0x3a,  /* [5091] */
    (xdc_Char)0x20,  /* [5092] */
    (xdc_Char)0x30,  /* [5093] */
    (xdc_Char)0x78,  /* [5094] */
    (xdc_Char)0x25,  /* [5095] */
    (xdc_Char)0x78,  /* [5096] */
    (xdc_Char)0x2c,  /* [5097] */
    (xdc_Char)0x20,  /* [5098] */
    (xdc_Char)0x6f,  /* [5099] */
    (xdc_Char)0x6c,  /* [5100] */
    (xdc_Char)0x64,  /* [5101] */
    (xdc_Char)0x43,  /* [5102] */
    (xdc_Char)0x6f,  /* [5103] */
    (xdc_Char)0x72,  /* [5104] */
    (xdc_Char)0x65,  /* [5105] */
    (xdc_Char)0x3a,  /* [5106] */
    (xdc_Char)0x20,  /* [5107] */
    (xdc_Char)0x25,  /* [5108] */
    (xdc_Char)0x64,  /* [5109] */
    (xdc_Char)0x2c,  /* [5110] */
    (xdc_Char)0x20,  /* [5111] */
    (xdc_Char)0x6f,  /* [5112] */
    (xdc_Char)0x6c,  /* [5113] */
    (xdc_Char)0x64,  /* [5114] */
    (xdc_Char)0x41,  /* [5115] */
    (xdc_Char)0x66,  /* [5116] */
    (xdc_Char)0x66,  /* [5117] */
    (xdc_Char)0x69,  /* [5118] */
    (xdc_Char)0x6e,  /* [5119] */
    (xdc_Char)0x69,  /* [5120] */
    (xdc_Char)0x74,  /* [5121] */
    (xdc_Char)0x79,  /* [5122] */
    (xdc_Char)0x20,  /* [5123] */
    (xdc_Char)0x25,  /* [5124] */
    (xdc_Char)0x64,  /* [5125] */
    (xdc_Char)0x2c,  /* [5126] */
    (xdc_Char)0x20,  /* [5127] */
    (xdc_Char)0x6e,  /* [5128] */
    (xdc_Char)0x65,  /* [5129] */
    (xdc_Char)0x77,  /* [5130] */
    (xdc_Char)0x41,  /* [5131] */
    (xdc_Char)0x66,  /* [5132] */
    (xdc_Char)0x66,  /* [5133] */
    (xdc_Char)0x69,  /* [5134] */
    (xdc_Char)0x6e,  /* [5135] */
    (xdc_Char)0x69,  /* [5136] */
    (xdc_Char)0x74,  /* [5137] */
    (xdc_Char)0x79,  /* [5138] */
    (xdc_Char)0x20,  /* [5139] */
    (xdc_Char)0x25,  /* [5140] */
    (xdc_Char)0x64,  /* [5141] */
    (xdc_Char)0x0,  /* [5142] */
    (xdc_Char)0x4c,  /* [5143] */
    (xdc_Char)0x44,  /* [5144] */
    (xdc_Char)0x5f,  /* [5145] */
    (xdc_Char)0x73,  /* [5146] */
    (xdc_Char)0x63,  /* [5147] */
    (xdc_Char)0x68,  /* [5148] */
    (xdc_Char)0x65,  /* [5149] */
    (xdc_Char)0x64,  /* [5150] */
    (xdc_Char)0x75,  /* [5151] */
    (xdc_Char)0x6c,  /* [5152] */
    (xdc_Char)0x65,  /* [5153] */
    (xdc_Char)0x3a,  /* [5154] */
    (xdc_Char)0x20,  /* [5155] */
    (xdc_Char)0x63,  /* [5156] */
    (xdc_Char)0x6f,  /* [5157] */
    (xdc_Char)0x72,  /* [5158] */
    (xdc_Char)0x65,  /* [5159] */
    (xdc_Char)0x49,  /* [5160] */
    (xdc_Char)0x64,  /* [5161] */
    (xdc_Char)0x3a,  /* [5162] */
    (xdc_Char)0x20,  /* [5163] */
    (xdc_Char)0x25,  /* [5164] */
    (xdc_Char)0x64,  /* [5165] */
    (xdc_Char)0x2c,  /* [5166] */
    (xdc_Char)0x20,  /* [5167] */
    (xdc_Char)0x77,  /* [5168] */
    (xdc_Char)0x6f,  /* [5169] */
    (xdc_Char)0x72,  /* [5170] */
    (xdc_Char)0x6b,  /* [5171] */
    (xdc_Char)0x46,  /* [5172] */
    (xdc_Char)0x6c,  /* [5173] */
    (xdc_Char)0x61,  /* [5174] */
    (xdc_Char)0x67,  /* [5175] */
    (xdc_Char)0x3a,  /* [5176] */
    (xdc_Char)0x20,  /* [5177] */
    (xdc_Char)0x25,  /* [5178] */
    (xdc_Char)0x64,  /* [5179] */
    (xdc_Char)0x2c,  /* [5180] */
    (xdc_Char)0x20,  /* [5181] */
    (xdc_Char)0x63,  /* [5182] */
    (xdc_Char)0x75,  /* [5183] */
    (xdc_Char)0x72,  /* [5184] */
    (xdc_Char)0x53,  /* [5185] */
    (xdc_Char)0x65,  /* [5186] */
    (xdc_Char)0x74,  /* [5187] */
    (xdc_Char)0x4c,  /* [5188] */
    (xdc_Char)0x6f,  /* [5189] */
    (xdc_Char)0x63,  /* [5190] */
    (xdc_Char)0x61,  /* [5191] */
    (xdc_Char)0x6c,  /* [5192] */
    (xdc_Char)0x3a,  /* [5193] */
    (xdc_Char)0x20,  /* [5194] */
    (xdc_Char)0x25,  /* [5195] */
    (xdc_Char)0x64,  /* [5196] */
    (xdc_Char)0x2c,  /* [5197] */
    (xdc_Char)0x20,  /* [5198] */
    (xdc_Char)0x63,  /* [5199] */
    (xdc_Char)0x75,  /* [5200] */
    (xdc_Char)0x72,  /* [5201] */
    (xdc_Char)0x53,  /* [5202] */
    (xdc_Char)0x65,  /* [5203] */
    (xdc_Char)0x74,  /* [5204] */
    (xdc_Char)0x58,  /* [5205] */
    (xdc_Char)0x3a,  /* [5206] */
    (xdc_Char)0x20,  /* [5207] */
    (xdc_Char)0x25,  /* [5208] */
    (xdc_Char)0x64,  /* [5209] */
    (xdc_Char)0x2c,  /* [5210] */
    (xdc_Char)0x20,  /* [5211] */
    (xdc_Char)0x63,  /* [5212] */
    (xdc_Char)0x75,  /* [5213] */
    (xdc_Char)0x72,  /* [5214] */
    (xdc_Char)0x4d,  /* [5215] */
    (xdc_Char)0x61,  /* [5216] */
    (xdc_Char)0x73,  /* [5217] */
    (xdc_Char)0x6b,  /* [5218] */
    (xdc_Char)0x4c,  /* [5219] */
    (xdc_Char)0x6f,  /* [5220] */
    (xdc_Char)0x63,  /* [5221] */
    (xdc_Char)0x61,  /* [5222] */
    (xdc_Char)0x6c,  /* [5223] */
    (xdc_Char)0x3a,  /* [5224] */
    (xdc_Char)0x20,  /* [5225] */
    (xdc_Char)0x25,  /* [5226] */
    (xdc_Char)0x64,  /* [5227] */
    (xdc_Char)0x0,  /* [5228] */
    (xdc_Char)0x4c,  /* [5229] */
    (xdc_Char)0x44,  /* [5230] */
    (xdc_Char)0x5f,  /* [5231] */
    (xdc_Char)0x6e,  /* [5232] */
    (xdc_Char)0x6f,  /* [5233] */
    (xdc_Char)0x57,  /* [5234] */
    (xdc_Char)0x6f,  /* [5235] */
    (xdc_Char)0x72,  /* [5236] */
    (xdc_Char)0x6b,  /* [5237] */
    (xdc_Char)0x3a,  /* [5238] */
    (xdc_Char)0x20,  /* [5239] */
    (xdc_Char)0x63,  /* [5240] */
    (xdc_Char)0x6f,  /* [5241] */
    (xdc_Char)0x72,  /* [5242] */
    (xdc_Char)0x65,  /* [5243] */
    (xdc_Char)0x49,  /* [5244] */
    (xdc_Char)0x64,  /* [5245] */
    (xdc_Char)0x3a,  /* [5246] */
    (xdc_Char)0x20,  /* [5247] */
    (xdc_Char)0x25,  /* [5248] */
    (xdc_Char)0x64,  /* [5249] */
    (xdc_Char)0x2c,  /* [5250] */
    (xdc_Char)0x20,  /* [5251] */
    (xdc_Char)0x63,  /* [5252] */
    (xdc_Char)0x75,  /* [5253] */
    (xdc_Char)0x72,  /* [5254] */
    (xdc_Char)0x53,  /* [5255] */
    (xdc_Char)0x65,  /* [5256] */
    (xdc_Char)0x74,  /* [5257] */
    (xdc_Char)0x4c,  /* [5258] */
    (xdc_Char)0x6f,  /* [5259] */
    (xdc_Char)0x63,  /* [5260] */
    (xdc_Char)0x61,  /* [5261] */
    (xdc_Char)0x6c,  /* [5262] */
    (xdc_Char)0x3a,  /* [5263] */
    (xdc_Char)0x20,  /* [5264] */
    (xdc_Char)0x25,  /* [5265] */
    (xdc_Char)0x64,  /* [5266] */
    (xdc_Char)0x2c,  /* [5267] */
    (xdc_Char)0x20,  /* [5268] */
    (xdc_Char)0x63,  /* [5269] */
    (xdc_Char)0x75,  /* [5270] */
    (xdc_Char)0x72,  /* [5271] */
    (xdc_Char)0x53,  /* [5272] */
    (xdc_Char)0x65,  /* [5273] */
    (xdc_Char)0x74,  /* [5274] */
    (xdc_Char)0x58,  /* [5275] */
    (xdc_Char)0x3a,  /* [5276] */
    (xdc_Char)0x20,  /* [5277] */
    (xdc_Char)0x25,  /* [5278] */
    (xdc_Char)0x3a,  /* [5279] */
    (xdc_Char)0x64,  /* [5280] */
    (xdc_Char)0x2c,  /* [5281] */
    (xdc_Char)0x20,  /* [5282] */
    (xdc_Char)0x63,  /* [5283] */
    (xdc_Char)0x75,  /* [5284] */
    (xdc_Char)0x72,  /* [5285] */
    (xdc_Char)0x4d,  /* [5286] */
    (xdc_Char)0x61,  /* [5287] */
    (xdc_Char)0x73,  /* [5288] */
    (xdc_Char)0x6b,  /* [5289] */
    (xdc_Char)0x4c,  /* [5290] */
    (xdc_Char)0x6f,  /* [5291] */
    (xdc_Char)0x63,  /* [5292] */
    (xdc_Char)0x61,  /* [5293] */
    (xdc_Char)0x6c,  /* [5294] */
    (xdc_Char)0x3a,  /* [5295] */
    (xdc_Char)0x20,  /* [5296] */
    (xdc_Char)0x25,  /* [5297] */
    (xdc_Char)0x64,  /* [5298] */
    (xdc_Char)0x0,  /* [5299] */
    (xdc_Char)0x4c,  /* [5300] */
    (xdc_Char)0x4d,  /* [5301] */
    (xdc_Char)0x5f,  /* [5302] */
    (xdc_Char)0x62,  /* [5303] */
    (xdc_Char)0x65,  /* [5304] */
    (xdc_Char)0x67,  /* [5305] */
    (xdc_Char)0x69,  /* [5306] */
    (xdc_Char)0x6e,  /* [5307] */
    (xdc_Char)0x3a,  /* [5308] */
    (xdc_Char)0x20,  /* [5309] */
    (xdc_Char)0x68,  /* [5310] */
    (xdc_Char)0x77,  /* [5311] */
    (xdc_Char)0x69,  /* [5312] */
    (xdc_Char)0x3a,  /* [5313] */
    (xdc_Char)0x20,  /* [5314] */
    (xdc_Char)0x30,  /* [5315] */
    (xdc_Char)0x78,  /* [5316] */
    (xdc_Char)0x25,  /* [5317] */
    (xdc_Char)0x78,  /* [5318] */
    (xdc_Char)0x2c,  /* [5319] */
    (xdc_Char)0x20,  /* [5320] */
    (xdc_Char)0x66,  /* [5321] */
    (xdc_Char)0x75,  /* [5322] */
    (xdc_Char)0x6e,  /* [5323] */
    (xdc_Char)0x63,  /* [5324] */
    (xdc_Char)0x3a,  /* [5325] */
    (xdc_Char)0x20,  /* [5326] */
    (xdc_Char)0x30,  /* [5327] */
    (xdc_Char)0x78,  /* [5328] */
    (xdc_Char)0x25,  /* [5329] */
    (xdc_Char)0x78,  /* [5330] */
    (xdc_Char)0x2c,  /* [5331] */
    (xdc_Char)0x20,  /* [5332] */
    (xdc_Char)0x70,  /* [5333] */
    (xdc_Char)0x72,  /* [5334] */
    (xdc_Char)0x65,  /* [5335] */
    (xdc_Char)0x54,  /* [5336] */
    (xdc_Char)0x68,  /* [5337] */
    (xdc_Char)0x72,  /* [5338] */
    (xdc_Char)0x65,  /* [5339] */
    (xdc_Char)0x61,  /* [5340] */
    (xdc_Char)0x64,  /* [5341] */
    (xdc_Char)0x3a,  /* [5342] */
    (xdc_Char)0x20,  /* [5343] */
    (xdc_Char)0x25,  /* [5344] */
    (xdc_Char)0x64,  /* [5345] */
    (xdc_Char)0x2c,  /* [5346] */
    (xdc_Char)0x20,  /* [5347] */
    (xdc_Char)0x69,  /* [5348] */
    (xdc_Char)0x6e,  /* [5349] */
    (xdc_Char)0x74,  /* [5350] */
    (xdc_Char)0x4e,  /* [5351] */
    (xdc_Char)0x75,  /* [5352] */
    (xdc_Char)0x6d,  /* [5353] */
    (xdc_Char)0x3a,  /* [5354] */
    (xdc_Char)0x20,  /* [5355] */
    (xdc_Char)0x25,  /* [5356] */
    (xdc_Char)0x64,  /* [5357] */
    (xdc_Char)0x2c,  /* [5358] */
    (xdc_Char)0x20,  /* [5359] */
    (xdc_Char)0x69,  /* [5360] */
    (xdc_Char)0x72,  /* [5361] */
    (xdc_Char)0x70,  /* [5362] */
    (xdc_Char)0x3a,  /* [5363] */
    (xdc_Char)0x20,  /* [5364] */
    (xdc_Char)0x30,  /* [5365] */
    (xdc_Char)0x78,  /* [5366] */
    (xdc_Char)0x25,  /* [5367] */
    (xdc_Char)0x78,  /* [5368] */
    (xdc_Char)0x0,  /* [5369] */
    (xdc_Char)0x4c,  /* [5370] */
    (xdc_Char)0x44,  /* [5371] */
    (xdc_Char)0x5f,  /* [5372] */
    (xdc_Char)0x65,  /* [5373] */
    (xdc_Char)0x6e,  /* [5374] */
    (xdc_Char)0x64,  /* [5375] */
    (xdc_Char)0x3a,  /* [5376] */
    (xdc_Char)0x20,  /* [5377] */
    (xdc_Char)0x68,  /* [5378] */
    (xdc_Char)0x77,  /* [5379] */
    (xdc_Char)0x69,  /* [5380] */
    (xdc_Char)0x3a,  /* [5381] */
    (xdc_Char)0x20,  /* [5382] */
    (xdc_Char)0x30,  /* [5383] */
    (xdc_Char)0x78,  /* [5384] */
    (xdc_Char)0x25,  /* [5385] */
    (xdc_Char)0x78,  /* [5386] */
    (xdc_Char)0x0,  /* [5387] */
    (xdc_Char)0x78,  /* [5388] */
    (xdc_Char)0x64,  /* [5389] */
    (xdc_Char)0x63,  /* [5390] */
    (xdc_Char)0x2e,  /* [5391] */
    (xdc_Char)0x0,  /* [5392] */
    (xdc_Char)0x72,  /* [5393] */
    (xdc_Char)0x75,  /* [5394] */
    (xdc_Char)0x6e,  /* [5395] */
    (xdc_Char)0x74,  /* [5396] */
    (xdc_Char)0x69,  /* [5397] */
    (xdc_Char)0x6d,  /* [5398] */
    (xdc_Char)0x65,  /* [5399] */
    (xdc_Char)0x2e,  /* [5400] */
    (xdc_Char)0x0,  /* [5401] */
    (xdc_Char)0x41,  /* [5402] */
    (xdc_Char)0x73,  /* [5403] */
    (xdc_Char)0x73,  /* [5404] */
    (xdc_Char)0x65,  /* [5405] */
    (xdc_Char)0x72,  /* [5406] */
    (xdc_Char)0x74,  /* [5407] */
    (xdc_Char)0x0,  /* [5408] */
    (xdc_Char)0x43,  /* [5409] */
    (xdc_Char)0x6f,  /* [5410] */
    (xdc_Char)0x72,  /* [5411] */
    (xdc_Char)0x65,  /* [5412] */
    (xdc_Char)0x0,  /* [5413] */
    (xdc_Char)0x44,  /* [5414] */
    (xdc_Char)0x65,  /* [5415] */
    (xdc_Char)0x66,  /* [5416] */
    (xdc_Char)0x61,  /* [5417] */
    (xdc_Char)0x75,  /* [5418] */
    (xdc_Char)0x6c,  /* [5419] */
    (xdc_Char)0x74,  /* [5420] */
    (xdc_Char)0x73,  /* [5421] */
    (xdc_Char)0x0,  /* [5422] */
    (xdc_Char)0x44,  /* [5423] */
    (xdc_Char)0x69,  /* [5424] */
    (xdc_Char)0x61,  /* [5425] */
    (xdc_Char)0x67,  /* [5426] */
    (xdc_Char)0x73,  /* [5427] */
    (xdc_Char)0x0,  /* [5428] */
    (xdc_Char)0x45,  /* [5429] */
    (xdc_Char)0x72,  /* [5430] */
    (xdc_Char)0x72,  /* [5431] */
    (xdc_Char)0x6f,  /* [5432] */
    (xdc_Char)0x72,  /* [5433] */
    (xdc_Char)0x0,  /* [5434] */
    (xdc_Char)0x47,  /* [5435] */
    (xdc_Char)0x61,  /* [5436] */
    (xdc_Char)0x74,  /* [5437] */
    (xdc_Char)0x65,  /* [5438] */
    (xdc_Char)0x0,  /* [5439] */
    (xdc_Char)0x4c,  /* [5440] */
    (xdc_Char)0x6f,  /* [5441] */
    (xdc_Char)0x67,  /* [5442] */
    (xdc_Char)0x0,  /* [5443] */
    (xdc_Char)0x4d,  /* [5444] */
    (xdc_Char)0x61,  /* [5445] */
    (xdc_Char)0x69,  /* [5446] */
    (xdc_Char)0x6e,  /* [5447] */
    (xdc_Char)0x0,  /* [5448] */
    (xdc_Char)0x4d,  /* [5449] */
    (xdc_Char)0x65,  /* [5450] */
    (xdc_Char)0x6d,  /* [5451] */
    (xdc_Char)0x6f,  /* [5452] */
    (xdc_Char)0x72,  /* [5453] */
    (xdc_Char)0x79,  /* [5454] */
    (xdc_Char)0x0,  /* [5455] */
    (xdc_Char)0x52,  /* [5456] */
    (xdc_Char)0x65,  /* [5457] */
    (xdc_Char)0x67,  /* [5458] */
    (xdc_Char)0x69,  /* [5459] */
    (xdc_Char)0x73,  /* [5460] */
    (xdc_Char)0x74,  /* [5461] */
    (xdc_Char)0x72,  /* [5462] */
    (xdc_Char)0x79,  /* [5463] */
    (xdc_Char)0x0,  /* [5464] */
    (xdc_Char)0x53,  /* [5465] */
    (xdc_Char)0x74,  /* [5466] */
    (xdc_Char)0x61,  /* [5467] */
    (xdc_Char)0x72,  /* [5468] */
    (xdc_Char)0x74,  /* [5469] */
    (xdc_Char)0x75,  /* [5470] */
    (xdc_Char)0x70,  /* [5471] */
    (xdc_Char)0x0,  /* [5472] */
    (xdc_Char)0x53,  /* [5473] */
    (xdc_Char)0x79,  /* [5474] */
    (xdc_Char)0x73,  /* [5475] */
    (xdc_Char)0x74,  /* [5476] */
    (xdc_Char)0x65,  /* [5477] */
    (xdc_Char)0x6d,  /* [5478] */
    (xdc_Char)0x0,  /* [5479] */
    (xdc_Char)0x53,  /* [5480] */
    (xdc_Char)0x79,  /* [5481] */
    (xdc_Char)0x73,  /* [5482] */
    (xdc_Char)0x4d,  /* [5483] */
    (xdc_Char)0x69,  /* [5484] */
    (xdc_Char)0x6e,  /* [5485] */
    (xdc_Char)0x0,  /* [5486] */
    (xdc_Char)0x54,  /* [5487] */
    (xdc_Char)0x65,  /* [5488] */
    (xdc_Char)0x78,  /* [5489] */
    (xdc_Char)0x74,  /* [5490] */
    (xdc_Char)0x0,  /* [5491] */
    (xdc_Char)0x54,  /* [5492] */
    (xdc_Char)0x69,  /* [5493] */
    (xdc_Char)0x6d,  /* [5494] */
    (xdc_Char)0x65,  /* [5495] */
    (xdc_Char)0x73,  /* [5496] */
    (xdc_Char)0x74,  /* [5497] */
    (xdc_Char)0x61,  /* [5498] */
    (xdc_Char)0x6d,  /* [5499] */
    (xdc_Char)0x70,  /* [5500] */
    (xdc_Char)0x0,  /* [5501] */
    (xdc_Char)0x74,  /* [5502] */
    (xdc_Char)0x69,  /* [5503] */
    (xdc_Char)0x2e,  /* [5504] */
    (xdc_Char)0x0,  /* [5505] */
    (xdc_Char)0x73,  /* [5506] */
    (xdc_Char)0x79,  /* [5507] */
    (xdc_Char)0x73,  /* [5508] */
    (xdc_Char)0x62,  /* [5509] */
    (xdc_Char)0x69,  /* [5510] */
    (xdc_Char)0x6f,  /* [5511] */
    (xdc_Char)0x73,  /* [5512] */
    (xdc_Char)0x2e,  /* [5513] */
    (xdc_Char)0x0,  /* [5514] */
    (xdc_Char)0x66,  /* [5515] */
    (xdc_Char)0x61,  /* [5516] */
    (xdc_Char)0x6d,  /* [5517] */
    (xdc_Char)0x69,  /* [5518] */
    (xdc_Char)0x6c,  /* [5519] */
    (xdc_Char)0x79,  /* [5520] */
    (xdc_Char)0x2e,  /* [5521] */
    (xdc_Char)0x0,  /* [5522] */
    (xdc_Char)0x61,  /* [5523] */
    (xdc_Char)0x72,  /* [5524] */
    (xdc_Char)0x6d,  /* [5525] */
    (xdc_Char)0x2e,  /* [5526] */
    (xdc_Char)0x0,  /* [5527] */
    (xdc_Char)0x49,  /* [5528] */
    (xdc_Char)0x6e,  /* [5529] */
    (xdc_Char)0x74,  /* [5530] */
    (xdc_Char)0x72,  /* [5531] */
    (xdc_Char)0x69,  /* [5532] */
    (xdc_Char)0x6e,  /* [5533] */
    (xdc_Char)0x73,  /* [5534] */
    (xdc_Char)0x69,  /* [5535] */
    (xdc_Char)0x63,  /* [5536] */
    (xdc_Char)0x73,  /* [5537] */
    (xdc_Char)0x53,  /* [5538] */
    (xdc_Char)0x75,  /* [5539] */
    (xdc_Char)0x70,  /* [5540] */
    (xdc_Char)0x70,  /* [5541] */
    (xdc_Char)0x6f,  /* [5542] */
    (xdc_Char)0x72,  /* [5543] */
    (xdc_Char)0x74,  /* [5544] */
    (xdc_Char)0x0,  /* [5545] */
    (xdc_Char)0x54,  /* [5546] */
    (xdc_Char)0x61,  /* [5547] */
    (xdc_Char)0x73,  /* [5548] */
    (xdc_Char)0x6b,  /* [5549] */
    (xdc_Char)0x53,  /* [5550] */
    (xdc_Char)0x75,  /* [5551] */
    (xdc_Char)0x70,  /* [5552] */
    (xdc_Char)0x70,  /* [5553] */
    (xdc_Char)0x6f,  /* [5554] */
    (xdc_Char)0x72,  /* [5555] */
    (xdc_Char)0x74,  /* [5556] */
    (xdc_Char)0x0,  /* [5557] */
    (xdc_Char)0x42,  /* [5558] */
    (xdc_Char)0x49,  /* [5559] */
    (xdc_Char)0x4f,  /* [5560] */
    (xdc_Char)0x53,  /* [5561] */
    (xdc_Char)0x0,  /* [5562] */
    (xdc_Char)0x68,  /* [5563] */
    (xdc_Char)0x61,  /* [5564] */
    (xdc_Char)0x6c,  /* [5565] */
    (xdc_Char)0x2e,  /* [5566] */
    (xdc_Char)0x0,  /* [5567] */
    (xdc_Char)0x48,  /* [5568] */
    (xdc_Char)0x77,  /* [5569] */
    (xdc_Char)0x69,  /* [5570] */
    (xdc_Char)0x0,  /* [5571] */
    (xdc_Char)0x54,  /* [5572] */
    (xdc_Char)0x69,  /* [5573] */
    (xdc_Char)0x6d,  /* [5574] */
    (xdc_Char)0x65,  /* [5575] */
    (xdc_Char)0x72,  /* [5576] */
    (xdc_Char)0x0,  /* [5577] */
    (xdc_Char)0x43,  /* [5578] */
    (xdc_Char)0x61,  /* [5579] */
    (xdc_Char)0x63,  /* [5580] */
    (xdc_Char)0x68,  /* [5581] */
    (xdc_Char)0x65,  /* [5582] */
    (xdc_Char)0x0,  /* [5583] */
    (xdc_Char)0x6b,  /* [5584] */
    (xdc_Char)0x6e,  /* [5585] */
    (xdc_Char)0x6c,  /* [5586] */
    (xdc_Char)0x2e,  /* [5587] */
    (xdc_Char)0x0,  /* [5588] */
    (xdc_Char)0x43,  /* [5589] */
    (xdc_Char)0x6c,  /* [5590] */
    (xdc_Char)0x6f,  /* [5591] */
    (xdc_Char)0x63,  /* [5592] */
    (xdc_Char)0x6b,  /* [5593] */
    (xdc_Char)0x0,  /* [5594] */
    (xdc_Char)0x49,  /* [5595] */
    (xdc_Char)0x64,  /* [5596] */
    (xdc_Char)0x6c,  /* [5597] */
    (xdc_Char)0x65,  /* [5598] */
    (xdc_Char)0x0,  /* [5599] */
    (xdc_Char)0x49,  /* [5600] */
    (xdc_Char)0x6e,  /* [5601] */
    (xdc_Char)0x74,  /* [5602] */
    (xdc_Char)0x72,  /* [5603] */
    (xdc_Char)0x69,  /* [5604] */
    (xdc_Char)0x6e,  /* [5605] */
    (xdc_Char)0x73,  /* [5606] */
    (xdc_Char)0x69,  /* [5607] */
    (xdc_Char)0x63,  /* [5608] */
    (xdc_Char)0x73,  /* [5609] */
    (xdc_Char)0x0,  /* [5610] */
    (xdc_Char)0x51,  /* [5611] */
    (xdc_Char)0x75,  /* [5612] */
    (xdc_Char)0x65,  /* [5613] */
    (xdc_Char)0x75,  /* [5614] */
    (xdc_Char)0x65,  /* [5615] */
    (xdc_Char)0x0,  /* [5616] */
    (xdc_Char)0x53,  /* [5617] */
    (xdc_Char)0x65,  /* [5618] */
    (xdc_Char)0x6d,  /* [5619] */
    (xdc_Char)0x61,  /* [5620] */
    (xdc_Char)0x70,  /* [5621] */
    (xdc_Char)0x68,  /* [5622] */
    (xdc_Char)0x6f,  /* [5623] */
    (xdc_Char)0x72,  /* [5624] */
    (xdc_Char)0x65,  /* [5625] */
    (xdc_Char)0x0,  /* [5626] */
    (xdc_Char)0x53,  /* [5627] */
    (xdc_Char)0x77,  /* [5628] */
    (xdc_Char)0x69,  /* [5629] */
    (xdc_Char)0x0,  /* [5630] */
    (xdc_Char)0x54,  /* [5631] */
    (xdc_Char)0x61,  /* [5632] */
    (xdc_Char)0x73,  /* [5633] */
    (xdc_Char)0x6b,  /* [5634] */
    (xdc_Char)0x0,  /* [5635] */
    (xdc_Char)0x61,  /* [5636] */
    (xdc_Char)0x31,  /* [5637] */
    (xdc_Char)0x35,  /* [5638] */
    (xdc_Char)0x2e,  /* [5639] */
    (xdc_Char)0x0,  /* [5640] */
    (xdc_Char)0x4d,  /* [5641] */
    (xdc_Char)0x6d,  /* [5642] */
    (xdc_Char)0x75,  /* [5643] */
    (xdc_Char)0x0,  /* [5644] */
    (xdc_Char)0x54,  /* [5645] */
    (xdc_Char)0x69,  /* [5646] */
    (xdc_Char)0x6d,  /* [5647] */
    (xdc_Char)0x65,  /* [5648] */
    (xdc_Char)0x72,  /* [5649] */
    (xdc_Char)0x53,  /* [5650] */
    (xdc_Char)0x75,  /* [5651] */
    (xdc_Char)0x70,  /* [5652] */
    (xdc_Char)0x70,  /* [5653] */
    (xdc_Char)0x6f,  /* [5654] */
    (xdc_Char)0x72,  /* [5655] */
    (xdc_Char)0x74,  /* [5656] */
    (xdc_Char)0x0,  /* [5657] */
    (xdc_Char)0x54,  /* [5658] */
    (xdc_Char)0x69,  /* [5659] */
    (xdc_Char)0x6d,  /* [5660] */
    (xdc_Char)0x65,  /* [5661] */
    (xdc_Char)0x73,  /* [5662] */
    (xdc_Char)0x74,  /* [5663] */
    (xdc_Char)0x61,  /* [5664] */
    (xdc_Char)0x6d,  /* [5665] */
    (xdc_Char)0x70,  /* [5666] */
    (xdc_Char)0x50,  /* [5667] */
    (xdc_Char)0x72,  /* [5668] */
    (xdc_Char)0x6f,  /* [5669] */
    (xdc_Char)0x76,  /* [5670] */
    (xdc_Char)0x69,  /* [5671] */
    (xdc_Char)0x64,  /* [5672] */
    (xdc_Char)0x65,  /* [5673] */
    (xdc_Char)0x72,  /* [5674] */
    (xdc_Char)0x0,  /* [5675] */
    (xdc_Char)0x67,  /* [5676] */
    (xdc_Char)0x69,  /* [5677] */
    (xdc_Char)0x63,  /* [5678] */
    (xdc_Char)0x2e,  /* [5679] */
    (xdc_Char)0x0,  /* [5680] */
    (xdc_Char)0x65,  /* [5681] */
    (xdc_Char)0x78,  /* [5682] */
    (xdc_Char)0x63,  /* [5683] */
    (xdc_Char)0x2e,  /* [5684] */
    (xdc_Char)0x0,  /* [5685] */
    (xdc_Char)0x45,  /* [5686] */
    (xdc_Char)0x78,  /* [5687] */
    (xdc_Char)0x63,  /* [5688] */
    (xdc_Char)0x65,  /* [5689] */
    (xdc_Char)0x70,  /* [5690] */
    (xdc_Char)0x74,  /* [5691] */
    (xdc_Char)0x69,  /* [5692] */
    (xdc_Char)0x6f,  /* [5693] */
    (xdc_Char)0x6e,  /* [5694] */
    (xdc_Char)0x0,  /* [5695] */
    (xdc_Char)0x67,  /* [5696] */
    (xdc_Char)0x61,  /* [5697] */
    (xdc_Char)0x74,  /* [5698] */
    (xdc_Char)0x65,  /* [5699] */
    (xdc_Char)0x73,  /* [5700] */
    (xdc_Char)0x2e,  /* [5701] */
    (xdc_Char)0x0,  /* [5702] */
    (xdc_Char)0x47,  /* [5703] */
    (xdc_Char)0x61,  /* [5704] */
    (xdc_Char)0x74,  /* [5705] */
    (xdc_Char)0x65,  /* [5706] */
    (xdc_Char)0x48,  /* [5707] */
    (xdc_Char)0x77,  /* [5708] */
    (xdc_Char)0x69,  /* [5709] */
    (xdc_Char)0x0,  /* [5710] */
    (xdc_Char)0x47,  /* [5711] */
    (xdc_Char)0x61,  /* [5712] */
    (xdc_Char)0x74,  /* [5713] */
    (xdc_Char)0x65,  /* [5714] */
    (xdc_Char)0x4d,  /* [5715] */
    (xdc_Char)0x75,  /* [5716] */
    (xdc_Char)0x74,  /* [5717] */
    (xdc_Char)0x65,  /* [5718] */
    (xdc_Char)0x78,  /* [5719] */
    (xdc_Char)0x0,  /* [5720] */
    (xdc_Char)0x74,  /* [5721] */
    (xdc_Char)0x69,  /* [5722] */
    (xdc_Char)0x6d,  /* [5723] */
    (xdc_Char)0x65,  /* [5724] */
    (xdc_Char)0x72,  /* [5725] */
    (xdc_Char)0x73,  /* [5726] */
    (xdc_Char)0x2e,  /* [5727] */
    (xdc_Char)0x0,  /* [5728] */
    (xdc_Char)0x64,  /* [5729] */
    (xdc_Char)0x6d,  /* [5730] */
    (xdc_Char)0x74,  /* [5731] */
    (xdc_Char)0x69,  /* [5732] */
    (xdc_Char)0x6d,  /* [5733] */
    (xdc_Char)0x65,  /* [5734] */
    (xdc_Char)0x72,  /* [5735] */
    (xdc_Char)0x2e,  /* [5736] */
    (xdc_Char)0x0,  /* [5737] */
    (xdc_Char)0x76,  /* [5738] */
    (xdc_Char)0x61,  /* [5739] */
    (xdc_Char)0x79,  /* [5740] */
    (xdc_Char)0x75,  /* [5741] */
    (xdc_Char)0x2e,  /* [5742] */
    (xdc_Char)0x0,  /* [5743] */
    (xdc_Char)0x49,  /* [5744] */
    (xdc_Char)0x6e,  /* [5745] */
    (xdc_Char)0x74,  /* [5746] */
    (xdc_Char)0x58,  /* [5747] */
    (xdc_Char)0x62,  /* [5748] */
    (xdc_Char)0x61,  /* [5749] */
    (xdc_Char)0x72,  /* [5750] */
    (xdc_Char)0x0,  /* [5751] */
    (xdc_Char)0x68,  /* [5752] */
    (xdc_Char)0x65,  /* [5753] */
    (xdc_Char)0x61,  /* [5754] */
    (xdc_Char)0x70,  /* [5755] */
    (xdc_Char)0x73,  /* [5756] */
    (xdc_Char)0x2e,  /* [5757] */
    (xdc_Char)0x0,  /* [5758] */
    (xdc_Char)0x48,  /* [5759] */
    (xdc_Char)0x65,  /* [5760] */
    (xdc_Char)0x61,  /* [5761] */
    (xdc_Char)0x70,  /* [5762] */
    (xdc_Char)0x4d,  /* [5763] */
    (xdc_Char)0x65,  /* [5764] */
    (xdc_Char)0x6d,  /* [5765] */
    (xdc_Char)0x0,  /* [5766] */
    (xdc_Char)0x74,  /* [5767] */
    (xdc_Char)0x69,  /* [5768] */
    (xdc_Char)0x2e,  /* [5769] */
    (xdc_Char)0x73,  /* [5770] */
    (xdc_Char)0x79,  /* [5771] */
    (xdc_Char)0x73,  /* [5772] */
    (xdc_Char)0x62,  /* [5773] */
    (xdc_Char)0x69,  /* [5774] */
    (xdc_Char)0x6f,  /* [5775] */
    (xdc_Char)0x73,  /* [5776] */
    (xdc_Char)0x2e,  /* [5777] */
    (xdc_Char)0x6b,  /* [5778] */
    (xdc_Char)0x6e,  /* [5779] */
    (xdc_Char)0x6c,  /* [5780] */
    (xdc_Char)0x2e,  /* [5781] */
    (xdc_Char)0x54,  /* [5782] */
    (xdc_Char)0x61,  /* [5783] */
    (xdc_Char)0x73,  /* [5784] */
    (xdc_Char)0x6b,  /* [5785] */
    (xdc_Char)0x2e,  /* [5786] */
    (xdc_Char)0x49,  /* [5787] */
    (xdc_Char)0x64,  /* [5788] */
    (xdc_Char)0x6c,  /* [5789] */
    (xdc_Char)0x65,  /* [5790] */
    (xdc_Char)0x54,  /* [5791] */
    (xdc_Char)0x61,  /* [5792] */
    (xdc_Char)0x73,  /* [5793] */
    (xdc_Char)0x6b,  /* [5794] */
    (xdc_Char)0x0,  /* [5795] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[54] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x150c,  /* left */
        (xdc_Bits16)0x1511,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x151a,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1521,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1526,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x152f,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1535,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x153b,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1540,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1544,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1549,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1550,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1559,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1561,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1568,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x156f,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1574,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x157e,  /* left */
        (xdc_Bits16)0x1582,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x158b,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1593,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1598,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x15aa,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x15b6,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x15bb,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x15c0,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x15c4,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x15ca,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x15d0,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x15d5,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x15db,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x15e0,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x15eb,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x15f1,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x15fb,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x15ff,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1604,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x15ca,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1609,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x160d,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x161a,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x162c,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x15c0,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1631,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x1636,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1640,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x1647,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x164f,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1659,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1661,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8030,  /* left */
        (xdc_Bits16)0x15c4,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x166a,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1670,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1678,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8034,  /* left */
        (xdc_Bits16)0x167f,  /* right */
    },  /* [53] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x16a4;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x36;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */

/* Module_startup */
xdc_Int ti_sysbios_family_arm_a15_Mmu_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_a15_Mmu_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_a15_TimestampProvider_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_a15_TimestampProvider_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_exc_Exception_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_exc_Exception_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.arm.gic.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_family_arm_gic_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_family_arm_gic_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_gic_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_gic_Hwi_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.gates.GateHwi FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateHwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateHwi_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateMutex FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateMutex_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateMutex_query__F(qual);
}


/*
 * ======== ti.sysbios.hal.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_hal_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Clock_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Clock_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Swi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Task_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Task_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.timers.dmtimer.Timer FUNCTION STUBS ========
 */

/* setAvailMask__E */
xdc_Void ti_sysbios_timers_dmtimer_Timer_setAvailMask__E( xdc_UArg arg ) 
{
    ti_sysbios_timers_dmtimer_Timer_setAvailMask__F(arg);
}

/* Module_startup */
xdc_Int ti_sysbios_timers_dmtimer_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_timers_dmtimer_Timer_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_String control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_check__F(eb);
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getData__F(eb);
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getCode__F(eb);
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getId__F(eb);
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getMsg__F(eb);
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getSite__F(eb);
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_init__F(eb);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_print__F(eb);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_String file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_String modName ) 
{
    return xdc_runtime_Registry_addModule__F(desc, modName);
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_String modName ) 
{
    return xdc_runtime_Registry_findByName__F(modName);
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_String namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    return xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_findById__F(mid);
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_String name, xdc_runtime_Types_DiagsMask* mask ) 
{
    return xdc_runtime_Registry_getMask__F(name, mask);
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_isMember__F(mid);
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getNextModule__F(desc);
}

/* getModuleName__E */
xdc_String xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleName__F(desc);
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleId__F(desc);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysMin FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysMin_abort__E( xdc_String str ) 
{
    xdc_runtime_SysMin_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysMin_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysMin_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysMin_flush__E( void ) 
{
    xdc_runtime_SysMin_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysMin_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysMin_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysMin_ready__E( void ) 
{
    return xdc_runtime_SysMin_ready__F();
}

/* Module_startup */
xdc_Int xdc_runtime_SysMin_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_SysMin_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_String str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_String pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== xdc.runtime.Timestamp FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_get32__E( void ) 
{
    return xdc_runtime_Timestamp_get32__F();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    xdc_runtime_Timestamp_get64__F(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    xdc_runtime_Timestamp_getFreq__F(freq);
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_BIOS_RtsGateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a15.Cache */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a15_Cache_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_enable__E( xdc_Bits16 type )
{
    ti_sysbios_family_arm_a15_Cache_enable(type);
}

/* disable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_disable__E( xdc_Bits16 type )
{
    ti_sysbios_family_arm_a15_Cache_disable(type);
}

/* inv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_inv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a15_Cache_inv(blockPtr, byteCnt, type, wait);
}

/* wb__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wb__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a15_Cache_wb(blockPtr, byteCnt, type, wait);
}

/* wbInv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a15_Cache_wbInv(blockPtr, byteCnt, type, wait);
}

/* wbAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbAll__E( void )
{
    ti_sysbios_family_arm_a15_Cache_wbAll();
}

/* wbInvAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInvAll__E( void )
{
    ti_sysbios_family_arm_a15_Cache_wbInvAll();
}

/* wait__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wait__E( void )
{
    ti_sysbios_family_arm_a15_Cache_wait();
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.gic.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_gic_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_gic_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_arm_gic_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_gic_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_gic_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_arm_gic_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_gic_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_gic_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_gic_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_gic_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_gic_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_gic_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_gic_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_gic_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_gic_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_gic_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_gic_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_gic_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_arm_gic_Hwi_getFunc((ti_sysbios_family_arm_gic_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_gic_Hwi_setFunc((ti_sysbios_family_arm_gic_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_gic_Hwi_getHookContext((ti_sysbios_family_arm_gic_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_gic_Hwi_setHookContext((ti_sysbios_family_arm_gic_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_gic_Hwi_getIrp((ti_sysbios_family_arm_gic_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.dmtimer.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_dmtimer_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_timers_dmtimer_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_timers_dmtimer_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_timers_dmtimer_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_dmtimer_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_timers_dmtimer_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_dmtimer_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_dmtimer_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_dmtimer_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_timers_dmtimer_Timer_getMaxTicks((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_timers_dmtimer_Timer_setNextTick((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_dmtimer_Timer_start((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_dmtimer_Timer_stop((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_timers_dmtimer_Timer_setPeriod((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_dmtimer_Timer_setPeriodMicroSecs((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getPeriod((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getCount((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_timers_dmtimer_Timer_getFreq((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_timers_dmtimer_Timer_getFunc((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_dmtimer_Timer_setFunc((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_dmtimer_Timer_trigger((ti_sysbios_timers_dmtimer_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_dmtimer_Timer_getExpiredCounts((ti_sysbios_timers_dmtimer_Timer_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr* oldtskContext, xdc_Ptr* newtskContext )
{
    ti_sysbios_family_arm_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_TaskSupport_getDefaultStackSize();
}


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a15.TimerSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a15_TimerSupport_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_enable__E( xdc_UInt timerId, xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_a15_TimerSupport_enable(timerId, eb);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(oa, osz, aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_String str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a15.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_a15_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    ti_sysbios_family_arm_a15_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_arm_a15_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.gic.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_gic_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_gic_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_gic_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_gic_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_gic_Hwi___S1) - sizeof(ti_sysbios_family_arm_gic_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_gic_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_gic_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_gic_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.timers.dmtimer.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_timers_dmtimer_Timer_Object2__ s0; char c; } ti_sysbios_timers_dmtimer_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_dmtimer_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_timers_dmtimer_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_timers_dmtimer_Timer___S1) - sizeof(ti_sysbios_timers_dmtimer_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_timers_dmtimer_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_timers_dmtimer_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_TaskSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.a15.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a15_Cache_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.a15.Mmu SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a15_Mmu_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a15_Mmu_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.a15.TimerSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a15_TimerSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.a15.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.exc.Exception SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_exc_Exception_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.gic.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_gic_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_gic_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_gic_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_gic_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_gic_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_gic_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_gic_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_gic_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_gic_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_gic_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_gic_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_gic_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_gic_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_gic_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_gic_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_arm_gic_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32809;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_gic_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_gic_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_arm_gic_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_arm_gic_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_gic_Hwi_Object__*)ti_sysbios_family_arm_gic_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_gic_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_gic_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_gic_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_arm_gic_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_gic_Hwi_Params prms;
    ti_sysbios_family_arm_gic_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_arm_gic_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_gic_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_gic_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_gic_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_gic_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_gic_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_gic_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_gic_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_arm_gic_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateHwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32813;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__*)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateMutex_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32814;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__*)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.Cache_CacheProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Cache_CacheProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32792;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__*)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object* obj;
    int iStat;

    ti_sysbios_hal_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32793;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__*)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object* obj;
    int iStat;

    ti_sysbios_hal_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.vayu.IntXbar SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_vayu_IntXbar_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32821;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__*)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__*)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32796;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__*)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Clock___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object* obj;

    ti_sysbios_knl_Clock_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__F(obj, args->clockFxn, args->timeout, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Queue_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__*)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Queue___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__*)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object* obj;

    ti_sysbios_knl_Semaphore_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__F(obj, args->count, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__*)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Swi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object* obj;
    int iStat;

    ti_sysbios_knl_Swi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__*)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Task___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object* obj;
    int iStat;

    ti_sysbios_knl_Task_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.timers.dmtimer.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_timers_dmtimer_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_timers_dmtimer_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_timers_dmtimer_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_timers_dmtimer_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_timers_dmtimer_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_timers_dmtimer_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_timers_dmtimer_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_timers_dmtimer_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_timers_dmtimer_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_timers_dmtimer_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_dmtimer_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_dmtimer_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_timers_dmtimer_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32817;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_timers_dmtimer_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_timers_dmtimer_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_timers_dmtimer_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_timers_dmtimer_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_timers_dmtimer_Timer_Object__*)ti_sysbios_timers_dmtimer_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_timers_dmtimer_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_timers_dmtimer_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_timers_dmtimer_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_timers_dmtimer_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_timers_dmtimer_Timer_Params prms;
    ti_sysbios_timers_dmtimer_Timer_Object* obj;
    int iStat;

    ti_sysbios_timers_dmtimer_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_timers_dmtimer_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_timers_dmtimer_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_timers_dmtimer_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_dmtimer_Timer_Object__DESC__C, *((ti_sysbios_timers_dmtimer_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_timers_dmtimer_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_timers_dmtimer_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.timers.dmtimer.Timer_TimerSupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_timers_dmtimer_Timer_TimerSupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.BIOS PRAGMAS ========
 */

const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.hal.Hwi PRAGMAS ========
 */

const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label* lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S(xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S(xdc_Ptr objp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_hal_Hwi_Params__init__S(xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_hal_Hwi_getStackInfo__E(ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Swi PRAGMAS ========
 */

const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label* lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S(xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Swi_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S(xdc_Ptr objp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Swi_Params__init__S(xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Error PRAGMAS ========
 */

const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Error_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Error_check__E(xdc_runtime_Error_Block* eb) __attribute__ ((externally_visible));
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E(xdc_runtime_Error_Block* eb) __attribute__ ((externally_visible));
xdc_UInt16 xdc_runtime_Error_getCode__E(xdc_runtime_Error_Block* eb) __attribute__ ((externally_visible));
xdc_runtime_Error_Id xdc_runtime_Error_getId__E(xdc_runtime_Error_Block* eb) __attribute__ ((externally_visible));
xdc_String xdc_runtime_Error_getMsg__E(xdc_runtime_Error_Block* eb) __attribute__ ((externally_visible));
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E(xdc_runtime_Error_Block* eb) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_Error_init__E(xdc_runtime_Error_Block* eb) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_Error_print__E(xdc_runtime_Error_Block* eb) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_Error_raiseX__E(xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_String file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Memory PRAGMAS ========
 */

const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Memory_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr xdc_runtime_Memory_alloc__E(xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb) __attribute__ ((externally_visible));
xdc_Ptr xdc_runtime_Memory_calloc__E(xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_Memory_free__E(xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_Memory_getStats__E(xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats) __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Memory_query__E(xdc_runtime_IHeap_Handle heap, xdc_Int qual) __attribute__ ((externally_visible));
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E(void) __attribute__ ((externally_visible));
xdc_Ptr xdc_runtime_Memory_valloc__E(xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Startup PRAGMAS ========
 */

const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Startup_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_Startup_exec__E(void) __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Startup_rtsDone__E(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.System PRAGMAS ========
 */

const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_System_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_System_abort__E(xdc_String str) __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_System_atexit__E(xdc_runtime_System_AtexitHandler handler) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_System_exit__E(xdc_Int stat) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_System_putch__E(xdc_Char ch) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_System_flush__E(void) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_printf__E(xdc_String fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_aprintf__E(xdc_String fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_sprintf__E(xdc_Char buf[], xdc_String fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_asprintf__E(xdc_Char buf[], xdc_String fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_vprintf__E(xdc_String fmt, xdc_VaList va) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_avprintf__E(xdc_String fmt, xdc_VaList va) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_vsprintf__E(xdc_Char buf[], xdc_String fmt, xdc_VaList va) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_avsprintf__E(xdc_Char buf[], xdc_String fmt, xdc_VaList va) __attribute__ ((externally_visible));

/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

