	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 6
	.globl	_usage                  ## -- Begin function usage
	.p2align	4, 0x90
_usage:                                 ## @usage
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_construct_numerical_reference ## -- Begin function construct_numerical_reference
	.p2align	4, 0x90
_construct_numerical_reference:         ## @construct_numerical_reference
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	$48, -4(%rbp)
LBB1_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$58, -4(%rbp)
	jge	LBB1_4
## %bb.2:                               ##   in Loop: Header=BB1_1 Depth=1
	movq	_numericalReference@GOTPCREL(%rip), %rax
	movl	-4(%rbp), %ecx
	subl	$48, %ecx
	movslq	-4(%rbp), %rdx
	movl	%ecx, (%rax,%rdx,4)
## %bb.3:                               ##   in Loop: Header=BB1_1 Depth=1
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	LBB1_1
LBB1_4:
	movl	$65, -8(%rbp)
LBB1_5:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$91, -8(%rbp)
	jge	LBB1_8
## %bb.6:                               ##   in Loop: Header=BB1_5 Depth=1
	movq	_numericalReference@GOTPCREL(%rip), %rax
	movl	-8(%rbp), %ecx
	subl	$55, %ecx
	movslq	-8(%rbp), %rdx
	movl	%ecx, (%rax,%rdx,4)
## %bb.7:                               ##   in Loop: Header=BB1_5 Depth=1
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	LBB1_5
LBB1_8:
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_swap                   ## -- Begin function swap
	.p2align	4, 0x90
_swap:                                  ## @swap
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_strlen
                                        ## kill: def $eax killed $eax killed $rax
	movl	%eax, -12(%rbp)
	movl	$0, -16(%rbp)
LBB2_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	-16(%rbp), %eax
	movl	-12(%rbp), %ecx
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	cltd
	movl	$2, %ecx
	idivl	%ecx
	movl	-24(%rbp), %ecx         ## 4-byte Reload
	cmpl	%eax, %ecx
	jge	LBB2_4
## %bb.2:                               ##   in Loop: Header=BB2_1 Depth=1
	movq	-8(%rbp), %rax
	movslq	-16(%rbp), %rcx
	movb	(%rax,%rcx), %dl
	movb	%dl, -17(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %esi
	subl	$1, %esi
	subl	-16(%rbp), %esi
	movslq	%esi, %rcx
	movb	(%rax,%rcx), %dl
	movq	-8(%rbp), %rax
	movslq	-16(%rbp), %rcx
	movb	%dl, (%rax,%rcx)
	movb	-17(%rbp), %dl
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %esi
	subl	$1, %esi
	subl	-16(%rbp), %esi
	movslq	%esi, %rcx
	movb	%dl, (%rax,%rcx)
## %bb.3:                               ##   in Loop: Header=BB2_1 Depth=1
	movl	-16(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -16(%rbp)
	jmp	LBB2_1
LBB2_4:
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_conv_to_decimal        ## -- Begin function conv_to_decimal
	.p2align	4, 0x90
_conv_to_decimal:                       ## @conv_to_decimal
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movq	$1, -24(%rbp)
	movq	$0, -32(%rbp)
	movq	-16(%rbp), %rdi
	callq	_strlen
                                        ## kill: def $eax killed $eax killed $rax
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -40(%rbp)
LBB3_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$-1, -40(%rbp)
	jle	LBB3_6
## %bb.2:                               ##   in Loop: Header=BB3_1 Depth=1
	movq	_numericalReference@GOTPCREL(%rip), %rax
	movq	-16(%rbp), %rcx
	movslq	-40(%rbp), %rdx
	movsbl	(%rcx,%rdx), %esi
	subl	$0, %esi
	movslq	%esi, %rcx
	movl	(%rax,%rcx,4), %esi
	cmpl	-4(%rbp), %esi
	jl	LBB3_4
## %bb.3:
	leaq	L_.str.1(%rip), %rdi
	xorl	%eax, %eax
                                        ## kill: def $al killed $al killed $eax
	callq	_printf
	movl	$1, %edi
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	callq	_exit
LBB3_4:                                 ##   in Loop: Header=BB3_1 Depth=1
	movq	_numericalReference@GOTPCREL(%rip), %rax
	movq	-24(%rbp), %rcx
	movq	-16(%rbp), %rdx
	movslq	-40(%rbp), %rsi
	movsbl	(%rdx,%rsi), %edi
	subl	$0, %edi
	movslq	%edi, %rdx
	movslq	(%rax,%rdx,4), %rax
	imulq	%rax, %rcx
	addq	-32(%rbp), %rcx
	movq	%rcx, -32(%rbp)
	movslq	-4(%rbp), %rax
	imulq	-24(%rbp), %rax
	movq	%rax, -24(%rbp)
## %bb.5:                               ##   in Loop: Header=BB3_1 Depth=1
	movl	-40(%rbp), %eax
	addl	$-1, %eax
	movl	%eax, -40(%rbp)
	jmp	LBB3_1
LBB3_6:
	movq	-32(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_conv_to_base           ## -- Begin function conv_to_base
	.p2align	4, 0x90
_conv_to_base:                          ## @conv_to_base
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$256, %edi              ## imm = 0x100
	callq	_malloc
	movq	%rax, -24(%rbp)
	movl	$0, -28(%rbp)
LBB4_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	-16(%rbp), %rax
	movslq	-4(%rbp), %rcx
	cmpq	%rcx, %rax
	jb	LBB4_3
## %bb.2:                               ##   in Loop: Header=BB4_1 Depth=1
	movq	-16(%rbp), %rax
	movslq	-4(%rbp), %rcx
	xorl	%edx, %edx
                                        ## kill: def $rdx killed $edx
	divq	%rcx
	leaq	_characterReference(%rip), %rcx
	movl	(%rcx,%rdx,4), %esi
                                        ## kill: def $sil killed $sil killed $esi
	movq	-24(%rbp), %rcx
	movslq	-28(%rbp), %rdx
	movb	%sil, (%rcx,%rdx)
	movslq	-4(%rbp), %rcx
	movq	-16(%rbp), %rdx
	movq	%rdx, %rax
	xorl	%edi, %edi
	movl	%edi, %edx
	divq	%rcx
	movq	%rax, -16(%rbp)
	movl	-28(%rbp), %edi
	addl	$1, %edi
	movl	%edi, -28(%rbp)
	jmp	LBB4_1
LBB4_3:
	movq	-16(%rbp), %rax
	leaq	_characterReference(%rip), %rcx
	movl	(%rcx,%rax,4), %edx
                                        ## kill: def $dl killed $dl killed $edx
	movq	-24(%rbp), %rax
	movslq	-28(%rbp), %rcx
	movb	%dl, (%rax,%rcx)
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %esi
	addl	$1, %esi
	movslq	%esi, %rcx
	movb	$0, (%rax,%rcx)
	movq	-24(%rbp), %rdi
	callq	_swap
	movq	-24(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
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
	subq	$64, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	cmpl	$1, -8(%rbp)
	jne	LBB5_2
## %bb.1:
	callq	_usage
	movl	$1, -4(%rbp)
	jmp	LBB5_7
LBB5_2:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rdi
	leaq	L_.str.2(%rip), %rsi
	callq	_strcmp
	cmpl	$0, %eax
	jne	LBB5_4
## %bb.3:
	callq	_usage
	movl	$0, -4(%rbp)
	jmp	LBB5_7
LBB5_4:
	cmpl	$4, -8(%rbp)
	je	LBB5_6
## %bb.5:
	callq	_usage
	movl	$1, -4(%rbp)
	jmp	LBB5_7
LBB5_6:
	callq	_construct_numerical_reference
	movq	-16(%rbp), %rax
	movq	8(%rax), %rdi
	callq	_atoi
	movl	%eax, -20(%rbp)
	movq	-16(%rbp), %rcx
	movq	16(%rcx), %rdi
	callq	_atoi
	movl	%eax, -24(%rbp)
	movq	-16(%rbp), %rcx
	movq	24(%rcx), %rcx
	movq	%rcx, -32(%rbp)
	movl	-20(%rbp), %edi
	movq	-32(%rbp), %rsi
	callq	_conv_to_decimal
	movq	%rax, -40(%rbp)
	movl	-24(%rbp), %edi
	movq	-40(%rbp), %rsi
	callq	_conv_to_base
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rsi
	leaq	L_.str.3(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	-48(%rbp), %rdi
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	callq	_free
	movl	$0, -4(%rbp)
LBB5_7:
	movl	-4(%rbp), %eax
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__DATA,__data
	.globl	_characterReference     ## @characterReference
	.p2align	4
_characterReference:
	.long	48                      ## 0x30
	.long	49                      ## 0x31
	.long	50                      ## 0x32
	.long	51                      ## 0x33
	.long	52                      ## 0x34
	.long	53                      ## 0x35
	.long	54                      ## 0x36
	.long	55                      ## 0x37
	.long	56                      ## 0x38
	.long	57                      ## 0x39
	.long	65                      ## 0x41
	.long	66                      ## 0x42
	.long	67                      ## 0x43
	.long	68                      ## 0x44
	.long	69                      ## 0x45
	.long	70                      ## 0x46

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Usage: ./main [-h] input_base output_base input_value\n"

	.comm	_numericalReference,1024,4 ## @numericalReference
L_.str.1:                               ## @.str.1
	.asciz	"Input string does not match input base\n"

L_.str.2:                               ## @.str.2
	.asciz	"-h"

L_.str.3:                               ## @.str.3
	.asciz	"%s\n"


.subsections_via_symbols
