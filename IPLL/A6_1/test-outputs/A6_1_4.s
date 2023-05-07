.section	.rodata
.LC0:
	.string "Before swap:\n"
.LC1:
	.string "x = "
.LC2:
	.string " y = "
.LC3:
	.string "\nAfter swap:\n"
.LC4:
	.string "x = "
.LC5:
	.string " y = "
# printInt: 
# printStr: 
# readInt: 
# swap: 

	.text
	.globl	swap
	.type	swap, @function
swap:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
# t0 = *p
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movq	%rdx, -8(%rbp)
# t = t0
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
# t1 = *p
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movq	%rdx, -12(%rbp)
# t2 = *q
	movq	24(%rbp), %rax
	movq	(%rax), %rdx
	movq	%rdx, -16(%rbp)
# *p = t2
	movq	16(%rbp), %rdx
	movl	-16(%rbp), %eax
	movl	%eax, (%rdx)
# t3 = *q
	movq	24(%rbp), %rax
	movq	(%rax), %rdx
	movq	%rdx, -20(%rbp)
# *q = t
	movq	24(%rbp), %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rdx)
# return 
	leave
	ret
# function swap ends
	leave
	ret
	.size	swap, .-swap
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$144, %rsp
# t4 = &ep
	leaq	-12(%rbp), %rax
	movq	%rax, -24(%rbp)
# param t4
# t5 = call readInt, 1
	movq	-24(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readInt
	movq	%rax, -28(%rbp)
	addq	$8, %rsp
# x = t5
	movl	-28(%rbp), %eax
	movl	%eax, -4(%rbp)
# t6 = &ep
	leaq	-12(%rbp), %rax
	movq	%rax, -36(%rbp)
# param t6
# t7 = call readInt, 1
	movq	-36(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readInt
	movq	%rax, -40(%rbp)
	addq	$8, %rsp
# y = t7
	movl	-40(%rbp), %eax
	movl	%eax, -8(%rbp)
# param .LC0
# t8 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -52(%rbp)
	addq	$4, %rsp
# param .LC1
# t9 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -60(%rbp)
	addq	$4, %rsp
# param x
# t10 = call printInt, 1
	movq	-4(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -68(%rbp)
	addq	$4, %rsp
# param .LC2
# t11 = call printStr, 1
	movq	$.LC2, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -76(%rbp)
	addq	$4, %rsp
# param y
# t12 = call printInt, 1
	movq	-8(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -80(%rbp)
	addq	$4, %rsp
# t13 = &x
	leaq	-4(%rbp), %rax
	movq	%rax, -92(%rbp)
# t14 = &y
	leaq	-8(%rbp), %rax
	movq	%rax, -100(%rbp)
# param t13
# param t14
# call swap, 2
	movq	-100(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	movq	-92(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	swap
	addq	$16, %rsp
# param .LC3
# t15 = call printStr, 1
	movq	$.LC3, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -108(%rbp)
	addq	$4, %rsp
# param .LC4
# t16 = call printStr, 1
	movq	$.LC4, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -116(%rbp)
	addq	$4, %rsp
# param x
# t17 = call printInt, 1
	movq	-4(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -120(%rbp)
	addq	$4, %rsp
# param .LC5
# t18 = call printStr, 1
	movq	$.LC5, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -128(%rbp)
	addq	$4, %rsp
# param y
# t19 = call printInt, 1
	movq	-8(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -132(%rbp)
	addq	$4, %rsp
# t20 = 0
	movl	$0, -136(%rbp)
# return t20
	movq	-136(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
