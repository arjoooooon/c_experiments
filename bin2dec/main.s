	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 6
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	cmpl	$2, -8(%rbp)
	je	LBB0_2
## %bb.1:
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$1, -4(%rbp)
	jmp	LBB0_11
LBB0_2:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movb	(%rax), %cl
	movb	%cl, -25(%rbp)
	movl	$0, -32(%rbp)
	movl	$0, -36(%rbp)
LBB0_3:                                 ## =>This Inner Loop Header: Depth=1
	movsbl	-25(%rbp), %eax
	cmpl	$0, %eax
	je	LBB0_10
## %bb.4:                               ##   in Loop: Header=BB0_3 Depth=1
	movsbl	-25(%rbp), %eax
	cmpl	$49, %eax
	jne	LBB0_6
## %bb.5:                               ##   in Loop: Header=BB0_3 Depth=1
	movl	-36(%rbp), %ecx
                                        ## kill: def $cl killed $ecx
	movl	$1, %eax
	shll	%cl, %eax
	addl	-32(%rbp), %eax
	movl	%eax, -32(%rbp)
	jmp	LBB0_9
LBB0_6:                                 ##   in Loop: Header=BB0_3 Depth=1
	movsbl	-25(%rbp), %eax
	cmpl	$48, %eax
	je	LBB0_8
## %bb.7:
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$1, -4(%rbp)
	jmp	LBB0_11
LBB0_8:                                 ##   in Loop: Header=BB0_3 Depth=1
	jmp	LBB0_9
LBB0_9:                                 ##   in Loop: Header=BB0_3 Depth=1
	movl	-36(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -36(%rbp)
	movq	-24(%rbp), %rcx
	movslq	-36(%rbp), %rdx
	movb	(%rcx,%rdx), %sil
	movb	%sil, -25(%rbp)
	jmp	LBB0_3
LBB0_10:
	movl	-32(%rbp), %esi
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$0, -4(%rbp)
LBB0_11:
	movl	-4(%rbp), %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Binary input required\n"

L_.str.1:                               ## @.str.1
	.asciz	"Invalid Binary Input\n"

L_.str.2:                               ## @.str.2
	.asciz	"%d\n"


.subsections_via_symbols
