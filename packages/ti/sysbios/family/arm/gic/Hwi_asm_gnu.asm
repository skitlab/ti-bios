@
@ ======== Hwi_asm.asm ========
@
@! Revision History
@! ================
@! 03-Jul-2012 ashish       Created, copied from arm.a8
@

    .arm

    .global ti_sysbios_family_arm_gic_Hwi_dispatch__I
    .global ti_sysbios_family_arm_gic_Hwi_dispatchC__I
    .global ti_sysbios_family_arm_gic_Hwi_init__I
    .global ti_sysbios_family_arm_gic_Hwi_vectors
    .global ti_sysbios_family_arm_gic_Hwi_disable__E
    .global ti_sysbios_family_arm_gic_Hwi_enable__E
    .global ti_sysbios_family_arm_gic_Hwi_restore__E

@
@  ======== Hwi_dispatchIRQ ========
@
@  Here on IRQ interrupt
@
@  stack while in C code:
@
@       sp + 0x20 =  cpsr_sys
@       sp + 0x1c =  RA
@       sp + 0x18 =  lr_sys
@       sp + 0x14 =  saved r12
@       sp + 0x10 =  saved r4
@       sp + 0x0c =  saved r3
@       sp + 0x08 =  saved r2
@       sp + 0x04 =  saved r1
@       sp + 0x00 =  saved r0
@

    .text
    .func ti_sysbios_family_arm_gic_Hwi_dispatch__I
    .align  4
        
ti_sysbios_family_arm_gic_Hwi_dispatch__I:
	sub	lr, lr, #4
	srsdb sp!, #0x1f                @ push sys CPSR and LR onto SYS stack
	cps	#0x1f                       @ switch back to System mode
    push {r0-r4, r12, lr}           @ save required C registers
    ldr	r0, [sp, #28]               @ retrieve IRP

#if (defined(__VFP_FP__) && !defined(__SOFTFP__))
	vstmdb  r13!, {D0-D7}           @ save vfp scratch regs
	vstmdb  r13!, {D16-D31}         @ save vfp scratch regs
#endif

	mov	r4, sp                      @ save sp
	bic	sp, sp, #0x7                @ align stack to 8 bytes
    bl ti_sysbios_family_arm_gic_Hwi_dispatchC__I
	mov	sp, r4                      @ restore sp

#if (defined(__VFP_FP__) && !defined(__SOFTFP__))
	vldmia  r13!, {D16-D31}         @ restore vfp scratch regs
	vldmia  r13!, {D0-D7}           @ restore vfp scratch regs
#endif

    pop {r0-r4, r12, lr}
	rfeia	sp!
    .endfunc
        
@
@  ======== Hwi_init ========
@  Low level ARM mode-specific register initialization
@

    .text
    .func ti_sysbios_family_arm_gic_Hwi_init__I

ti_sysbios_family_arm_gic_Hwi_init__I:

@ Set vector table base address
    ldr	r0, vbar
    mcr	p15, #0, r0, c12, c0, #0

    bx  lr
    .endfunc

vbar:
    .word   ti_sysbios_family_arm_gic_Hwi_vectors

    .end
