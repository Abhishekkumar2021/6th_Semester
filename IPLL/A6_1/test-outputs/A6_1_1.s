.section	.rodata
.LC0:
	.string "+"
.LC1:
	.string " = "
# printInt: 
# printStr: 
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
# t0 = 2
	movl	$2, -4(%rbp)
# x = t0
	movl	-4(%rbp), %eax
	movl	%eax, -8(%rbp)
# t1 = 3
	movl	$3, -12(%rbp)
# y = t1
	movl	-12(%rbp), %eax
	movl	%eax, -16(%rbp)
# t2 = x + y
	movl	-8(%rbp), %eax
	movl	-16(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
# z = t2
	movl	-24(%rbp), %eax
	movl	%eax, -20(%rbp)
# param x
# t3 = call printInt, 1
	movq	-8(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -32(%rbp)
	addq	$4, %rsp
# param .LC0
# t4 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -44(%rbp)
	addq	$4, %rsp
# param y
# t5 = call printInt, 1
	movq	-16(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -48(%rbp)
	addq	$4, %rsp
# param .LC1
# t6 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -56(%rbp)
	addq	$4, %rsp
# param z
# t7 = call printInt, 1
	movq	-20(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -60(%rbp)
	addq	$4, %rsp
# t8 = 0
	movl	$0, -64(%rbp)
# return t8
	movq	-64(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
