	.comm	c,1,1
	.comm	i,4,4
	.comm	j,4,4
	.comm	k,4,4
	.comm	l,4,4
	.comm	m,4,4
.section	.rodata
.LC0:
	.string "Enter x: "
.LC1:
	.string "Enter y: "
.LC2:
	.string "i = x + y = "
.LC3:
	.string "\n"
.LC4:
	.string "j = x - y = "
.LC5:
	.string "\n"
.LC6:
	.string "k = x * y = "
.LC7:
	.string "\n"
.LC8:
	.string "l = x / y = "
.LC9:
	.string "\n"
.LC10:
	.string "m = x % y = "
.LC11:
	.string "\n"
# printStr: 
# printInt: 
# readInt: 
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$224, %rsp
# param .LC0
# t0 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -24(%rbp)
	addq	$4, %rsp
# t1 = &flag
	leaq	-12(%rbp), %rax
	movq	%rax, -36(%rbp)
# param t1
# t2 = call readInt, 1
	movq	-36(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readInt
	movq	%rax, -40(%rbp)
	addq	$8, %rsp
# x = t2
	movl	-40(%rbp), %eax
	movl	%eax, -4(%rbp)
# param .LC1
# t3 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -48(%rbp)
	addq	$4, %rsp
# t4 = &flag
	leaq	-12(%rbp), %rax
	movq	%rax, -56(%rbp)
# param t4
# t5 = call readInt, 1
	movq	-56(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readInt
	movq	%rax, -60(%rbp)
	addq	$8, %rsp
# y = t5
	movl	-60(%rbp), %eax
	movl	%eax, -8(%rbp)
# t6 = 99
	movb	$57, -61(%rbp)
# ch = t6
	movl	-61(%rbp), %eax
	movl	%eax, -62(%rbp)
# t7 = x + y
	movl	-4(%rbp), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -70(%rbp)
# i = t7
	movl	-70(%rbp), %eax
	movl	%eax, i(%rip)
# param .LC2
# t8 = call printStr, 1
	movq	$.LC2, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -78(%rbp)
	addq	$4, %rsp
# param i
# t9 = call printInt, 1
	movq	i(%rip), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -86(%rbp)
	addq	$4, %rsp
# param .LC3
# t10 = call printStr, 1
	movq	$.LC3, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -94(%rbp)
	addq	$4, %rsp
# t11 = x - y
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -102(%rbp)
# j = t11
	movl	-102(%rbp), %eax
	movl	%eax, j(%rip)
# param .LC4
# t12 = call printStr, 1
	movq	$.LC4, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -110(%rbp)
	addq	$4, %rsp
# param j
# t13 = call printInt, 1
	movq	j(%rip), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -114(%rbp)
	addq	$4, %rsp
# param .LC5
# t14 = call printStr, 1
	movq	$.LC5, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -122(%rbp)
	addq	$4, %rsp
# t15 = x * y
	movl	-4(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, -130(%rbp)
# k = t15
	movl	-130(%rbp), %eax
	movl	%eax, k(%rip)
# param .LC6
# t16 = call printStr, 1
	movq	$.LC6, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -138(%rbp)
	addq	$4, %rsp
# param k
# t17 = call printInt, 1
	movq	k(%rip), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -142(%rbp)
	addq	$4, %rsp
# param .LC7
# t18 = call printStr, 1
	movq	$.LC7, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -150(%rbp)
	addq	$4, %rsp
# t19 = x / y
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movl	%eax, -158(%rbp)
# l = t19
	movl	-158(%rbp), %eax
	movl	%eax, l(%rip)
# param .LC8
# t20 = call printStr, 1
	movq	$.LC8, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -166(%rbp)
	addq	$4, %rsp
# param l
# t21 = call printInt, 1
	movq	l(%rip), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -170(%rbp)
	addq	$4, %rsp
# param .LC9
# t22 = call printStr, 1
	movq	$.LC9, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -178(%rbp)
	addq	$4, %rsp
# t23 = x % y
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movl	%edx, -186(%rbp)
# m = t23
	movl	-186(%rbp), %eax
	movl	%eax, m(%rip)
# param .LC10
# t24 = call printStr, 1
	movq	$.LC10, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -194(%rbp)
	addq	$4, %rsp
# param m
# t25 = call printInt, 1
	movq	m(%rip), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -198(%rbp)
	addq	$4, %rsp
# param .LC11
# t26 = call printStr, 1
	movq	$.LC11, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -206(%rbp)
	addq	$4, %rsp
# t27 = 0
	movl	$0, -210(%rbp)
# return t27
	movq	-210(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
