; --COPYRIGHT--,BSD
;  Copyright (c) $(CPYYEAR), Texas Instruments Incorporated
;  All rights reserved.
; 
;  Redistribution and use in source and binary forms, with or without
;  modification, are permitted provided that the following conditions
;  are met:
; 
;  *  Redistributions of source code must retain the above copyright
;     notice, this list of conditions and the following disclaimer.
; 
;  *  Redistributions in binary form must reproduce the above copyright
;     notice, this list of conditions and the following disclaimer in the
;     documentation and/or other materials provided with the distribution.
; 
;  *  Neither the name of Texas Instruments Incorporated nor the names of
;     its contributors may be used to endorse or promote products derived
;     from this software without specific prior written permission.
; 
;  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
;  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
;  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
;  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
;  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
;  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
;  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
;  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
;  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
;  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
;  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
; --/COPYRIGHT--
;
; ======== Hwi_asm.s470 ========
;
;! Revision History
;! ================
;! 17-Dec-2010 agd	SDOCM00077480 Force 8 byte stack alignment
;! 14-Dec-2009 agd	tag Module state struct
;! 07-Sep-2009 agd	SDOCM00061024 R4 VFP support
;! 21-Nov-2008 agd      copied from dm6446
;

        .cdecls C,NOLIST,"package/internal/Hwi.xdc.h" 

        .state32

    .if __TI_EABI_ASSEMBLER
        .asg ti_sysbios_family_arm_tms570_Hwi_dispatchIRQC__I, _ti_sysbios_family_arm_tms570_Hwi_dispatchIRQC__I
        .asg ti_sysbios_family_arm_tms570_Hwi_dispatchIRQ__I, _ti_sysbios_family_arm_tms570_Hwi_dispatchIRQ__I
        .asg ti_sysbios_family_arm_tms570_Hwi_init__I, _ti_sysbios_family_arm_tms570_Hwi_init__I
        .asg ti_sysbios_family_arm_tms570_Hwi_Module__state__V, _ti_sysbios_family_arm_tms570_Hwi_Module__state__V
        .asg ti_sysbios_family_arm_tms570_Hwi_vim, _ti_sysbios_family_arm_tms570_Hwi_vim
    .endif

        .global _ti_sysbios_family_arm_tms570_Hwi_dispatchIRQC__I
        .global _ti_sysbios_family_arm_tms570_Hwi_dispatchIRQ__I
        .global _ti_sysbios_family_arm_tms570_Hwi_init__I

_ti_sysbios_family_arm_tms570_Hwi_Module__state__V .tag ti_sysbios_family_arm_tms570_Hwi_Module_State

;
; Set the address of the interrupt controller struct
;
        .global _ti_sysbios_family_arm_tms570_Hwi_vim

_ti_sysbios_family_arm_tms570_Hwi_vim .set    0xffffFDEC

;
;  ======== Hwi_dispatchIRQ ========
;
;  Here on IRQ interrupt
;
;  The ARM processor doesn't support nested interrupts easily.
;  Simply re-enabling interrupts while in IRQ mode will cause the
;  LR to get trashed when the next interrupt occurs.
;  The standard solution is to push the LR and SPSR onto the IRQ stack,
;  then switch to another mode before re-enabling interrupts.
;  However, that approach doesn't map well to how BIOS currently
;  manages ISR and task stacks. The design below resolves this
;  conflict. 
;
;  The design requires BIOS apps to be running in system mode. 
;
;  The Hwi_init() function below which is called during system 
;  initialisation switches the execution mode from user mode to 
;  system mode.
;  
;  - save RA and spsr_sys into global variables
;  - switch back to system mode
;  - make room for RA on stack
;  - save C required context (scratch regs)
;  - copy RA into system stack
;  - if VFP support, push d0-d7 (scratch regs)
;  - push lr_sys and spsr_sys onto system stack
;  - call C dispatcher
;  - pop lr_sys and spsr_sys
;  - if VFP support, pop d0-d7
;  - switch to IRQ mode
;  - restore spsr_sys
;  - return to interrupted thread (pop C context and RA and restore 
;    cpsr simultaneously)
;

        .sect ".text:_ti_sysbios_family_arm_tms570_Hwi_dispatchIRQ__I"
        .clink
        .armfunc _ti_sysbios_family_arm_tms570_Hwi_dispatchIRQ__I
        .align  4
        
_ti_sysbios_family_arm_tms570_Hwi_dispatchIRQ__I:
        .asmfunc
        mrs     r13, cpsr
	ands	r13, r13, #0x40	; check FIQ disable bit
        msreq   cpsr_c, #0x9f	; switch back to SYS mode
        msrne   cpsr_c, #0xdf	; preserving FIQ disable
	; in SYS mode
        sub     sp, sp, #4      ; make room for return addr
        stmfd   sp!, {r0-r3, r12}; save required C registers
	mov	r0, sp		; snapshot the system sp
        msreq   cpsr_c, #0x92	; switch back to IRQ mode
        msrne   cpsr_c, #0xd2	; preserving FIQ disable
	; in IRQ mode
	mov	sp, r0		; irq sp = sys sp
        sub     r0, lr, #4      ; fix the IRQ return address
        mrs     r2, spsr        ; get old CPSR
        msreq   cpsr_c, #0x9f	; switch back to SYS mode
        msrne   cpsr_c, #0xdf	; preserving FIQ disable
	; in SYS mode
        str     r0, [sp, #20]   ; save on stack for later pop into pc

    .if __TI_VFP_SUPPORT__ | __TI_NEON_SUPPORT__
	vstmdb	{D0-D7}, r13!	; save vfp scratch regs
    .endif

	stmfd	sp!, {r2, r4, lr} ; save lr_sys, cpsr_sys

	; pass IRP to Hwi_dispatchIRQC
	mov	r4, sp		; save sp
	bic	sp, sp, #0x7	; align stack to 8 bytes
        bl      _ti_sysbios_family_arm_tms570_Hwi_dispatchIRQC__I
	mov	sp, r4		; restore sp

        ldmfd   sp!, {r2, r4, lr} ; retrieve lr_sys, cpsr_sys

    .if __TI_VFP_SUPPORT__ | __TI_NEON_SUPPORT__
	vldmia	{D0-D7}, r13!	; restore vfp scratch regs
    .endif

	mov	r1, sp		; snapshot the system sp for sp_irq
	add	sp, sp, #24	; unwind system sp

	; switch to IRQ mode to prepare for sync return
	ands	r3, r2, #0x40	; check FIQ disable bit
        msreq   cpsr_c, #0x92	; switch back to IRQ mode
        msrne   cpsr_c, #0xd2	; preserving FIQ disable

	mov	sp, r1		; sp_irq = system sp before pop

        msr     spsr_cxsf, r2	; load old cpsr_sys

	; restore C registers, pop return add into pc and restore cpsr_sys
        ldmfd   sp!, {r0-r3, r12, pc}^
        .endasmfunc

        .sect ".text:_ti_sysbios_family_arm_tms570_Hwi_init__I"
        .clink
        .armfunc _ti_sysbios_family_arm_tms570_Hwi_init__I

_ti_sysbios_family_arm_tms570_Hwi_init__I:
        .asmfunc
        mrs     r12, cpsr
        bic     r12, r12, #0x1f ; switch to FIQ mode
        orr     r12, r12, #0x11 ; to initialize FIQ sp
        msr     cpsr_cf, r12    ;

        ldr     sp, fiqStackAddr
        ldr     sp, [sp]	; base of fiq stack
        ldr	r12, fiqStackSize
        ldr	r12, [r12]	; size of fiq stack
        add	sp, r12, sp	; sp = initial fiq stack

        mrs     r12, cpsr
        orr     r12, r12, #0x1f ; switch back to SYS mode
        msr     cpsr_cf, r12    ;

        bx      lr
        .endasmfunc

fiqStackAddr:
        .word   _ti_sysbios_family_arm_tms570_Hwi_Module__state__V.fiqStack

fiqStackSize:
        .word   _ti_sysbios_family_arm_tms570_Hwi_Module__state__V.fiqStackSize

        .end
