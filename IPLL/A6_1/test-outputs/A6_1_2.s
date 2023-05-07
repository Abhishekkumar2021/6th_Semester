.section	.rodata
.LC0:
	.string " "
.LC1:
	.string "\n"
.LC2:
	.string " "
.LC3:
	.string "\n"
# printStr: 
# printInt: 
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$336, %rsp
# t0 = 10
	movl	$10, -4(%rbp)
# t1 = 0
	movl	$0, -52(%rbp)
# i = t1
	movl	-52(%rbp), %eax
	movl	%eax, -48(%rbp)
# t2 = 10
.L2:
	movl	$10, -56(%rbp)
# t3 = 1
	movl	$1, -60(%rbp)
# if i < t2 goto .L0
	movl	-48(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jge	.L16
	jmp	.L0
.L16:
# t3 = 0
	movl	$0, -60(%rbp)
# goto .L1
	jmp	.L1
# goto .L1
	jmp	.L1
# t4 = 1
.L3:
	movl	$1, -64(%rbp)
# t5 = i + t4
	movl	-48(%rbp), %eax
	movl	-64(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -68(%rbp)
# i = t5
	movl	-68(%rbp), %eax
	movl	%eax, -48(%rbp)
# goto .L2
	jmp	.L2
# t6 = 0
.L0:
	movl	$0, -72(%rbp)
# t7 = i
	movl	-48(%rbp), %eax
	movl	%eax, -76(%rbp)
# t7 = t7 * 4
	movl	-76(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -76(%rbp)
# t6 = t7
	movl	-76(%rbp), %eax
	movl	%eax, -72(%rbp)
# a[t6] = i
	movl	-72(%rbp), %edx
	movl	-48(%rbp), %eax
cltq
	movl	%eax, -44(%rbp,%rdx,1)
# goto .L3
	jmp	.L3
# t8 = 0
.L1:
	movl	$0, -80(%rbp)
# i = t8
	movl	-80(%rbp), %eax
	movl	%eax, -48(%rbp)
# t9 = 10
.L6:
	movl	$10, -84(%rbp)
# t10 = 1
	movl	$1, -88(%rbp)
# if i < t9 goto .L4
	movl	-48(%rbp), %eax
	cmpl	-84(%rbp), %eax
	jge	.L17
	jmp	.L4
.L17:
# t10 = 0
	movl	$0, -88(%rbp)
# goto .L5
	jmp	.L5
# goto .L5
	jmp	.L5
# t11 = 1
.L7:
	movl	$1, -92(%rbp)
# t12 = i + t11
	movl	-48(%rbp), %eax
	movl	-92(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -96(%rbp)
# i = t12
	movl	-96(%rbp), %eax
	movl	%eax, -48(%rbp)
# goto .L6
	jmp	.L6
# t13 = 0
.L4:
	movl	$0, -104(%rbp)
# t14 = i
	movl	-48(%rbp), %eax
	movl	%eax, -108(%rbp)
# t14 = t14 * 4
	movl	-108(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -108(%rbp)
# t13 = t14
	movl	-108(%rbp), %eax
	movl	%eax, -104(%rbp)
# t15 = a[t13]
	movl	-104(%rbp), %edx
cltq
	movl	-44(%rbp,%rdx,1), %eax
	movl	%eax, -112(%rbp)
# param t15
# t16 = call printInt, 1
	movq	-112(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -116(%rbp)
	addq	$4, %rsp
# param .LC0
# t17 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -128(%rbp)
	addq	$4, %rsp
# goto .L7
	jmp	.L7
# param .LC1
.L5:
# t18 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -136(%rbp)
	addq	$4, %rsp
# t19 = 0
	movl	$0, -144(%rbp)
# j = t19
	movl	-144(%rbp), %eax
	movl	%eax, -140(%rbp)
# t20 = 10
.L10:
	movl	$10, -148(%rbp)
# t21 = 1
	movl	$1, -152(%rbp)
# if j < t20 goto .L8
	movl	-140(%rbp), %eax
	cmpl	-148(%rbp), %eax
	jge	.L18
	jmp	.L8
.L18:
# t21 = 0
	movl	$0, -152(%rbp)
# goto .L9
	jmp	.L9
# goto .L9
	jmp	.L9
# t22 = 1
.L11:
	movl	$1, -156(%rbp)
# t23 = j + t22
	movl	-140(%rbp), %eax
	movl	-156(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -160(%rbp)
# j = t23
	movl	-160(%rbp), %eax
	movl	%eax, -140(%rbp)
# goto .L10
	jmp	.L10
# t24 = 0
.L8:
	movl	$0, -164(%rbp)
# t25 = j
	movl	-140(%rbp), %eax
	movl	%eax, -168(%rbp)
# t25 = t25 * 4
	movl	-168(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -168(%rbp)
# t24 = t25
	movl	-168(%rbp), %eax
	movl	%eax, -164(%rbp)
# t26 = 0
	movl	$0, -172(%rbp)
# t27 = j
	movl	-140(%rbp), %eax
	movl	%eax, -176(%rbp)
# t27 = t27 * 4
	movl	-176(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -176(%rbp)
# t26 = t27
	movl	-176(%rbp), %eax
	movl	%eax, -172(%rbp)
# t28 = a[t26]
	movl	-172(%rbp), %edx
cltq
	movl	-44(%rbp,%rdx,1), %eax
	movl	%eax, -180(%rbp)
# t29 = 2
	movl	$2, -184(%rbp)
# t30 = t28 + t29
	movl	-180(%rbp), %eax
	movl	-184(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -188(%rbp)
# a[t24] = t30
	movl	-164(%rbp), %edx
	movl	-188(%rbp), %eax
cltq
	movl	%eax, -44(%rbp,%rdx,1)
# t31 = 0
	movl	$0, -192(%rbp)
# t32 = j
	movl	-140(%rbp), %eax
	movl	%eax, -196(%rbp)
# t32 = t32 * 4
	movl	-196(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -196(%rbp)
# t31 = t32
	movl	-196(%rbp), %eax
	movl	%eax, -192(%rbp)
# t33 = 0
	movl	$0, -200(%rbp)
# t34 = j
	movl	-140(%rbp), %eax
	movl	%eax, -204(%rbp)
# t34 = t34 * 4
	movl	-204(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -204(%rbp)
# t33 = t34
	movl	-204(%rbp), %eax
	movl	%eax, -200(%rbp)
# t35 = a[t33]
	movl	-200(%rbp), %edx
cltq
	movl	-44(%rbp,%rdx,1), %eax
	movl	%eax, -208(%rbp)
# t36 = 1
	movl	$1, -212(%rbp)
# t37 = t35 - t36
	movl	-208(%rbp), %edx
	movl	-212(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -216(%rbp)
# a[t31] = t37
	movl	-192(%rbp), %edx
	movl	-216(%rbp), %eax
cltq
	movl	%eax, -44(%rbp,%rdx,1)
# t38 = 0
	movl	$0, -220(%rbp)
# t39 = j
	movl	-140(%rbp), %eax
	movl	%eax, -224(%rbp)
# t39 = t39 * 4
	movl	-224(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -224(%rbp)
# t38 = t39
	movl	-224(%rbp), %eax
	movl	%eax, -220(%rbp)
# t40 = 0
	movl	$0, -228(%rbp)
# t41 = j
	movl	-140(%rbp), %eax
	movl	%eax, -232(%rbp)
# t41 = t41 * 4
	movl	-232(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -232(%rbp)
# t40 = t41
	movl	-232(%rbp), %eax
	movl	%eax, -228(%rbp)
# t42 = a[t40]
	movl	-228(%rbp), %edx
cltq
	movl	-44(%rbp,%rdx,1), %eax
	movl	%eax, -236(%rbp)
# t43 = 2
	movl	$2, -240(%rbp)
# t44 = t42 * t43
	movl	-236(%rbp), %eax
	imull	-240(%rbp), %eax
	movl	%eax, -244(%rbp)
# a[t38] = t44
	movl	-220(%rbp), %edx
	movl	-244(%rbp), %eax
cltq
	movl	%eax, -44(%rbp,%rdx,1)
# t45 = 0
	movl	$0, -248(%rbp)
# t46 = j
	movl	-140(%rbp), %eax
	movl	%eax, -252(%rbp)
# t46 = t46 * 4
	movl	-252(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -252(%rbp)
# t45 = t46
	movl	-252(%rbp), %eax
	movl	%eax, -248(%rbp)
# t47 = 0
	movl	$0, -256(%rbp)
# t48 = j
	movl	-140(%rbp), %eax
	movl	%eax, -260(%rbp)
# t48 = t48 * 4
	movl	-260(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -260(%rbp)
# t47 = t48
	movl	-260(%rbp), %eax
	movl	%eax, -256(%rbp)
# t49 = a[t47]
	movl	-256(%rbp), %edx
cltq
	movl	-44(%rbp,%rdx,1), %eax
	movl	%eax, -264(%rbp)
# t50 = 2
	movl	$2, -268(%rbp)
# t51 = t49 / t50
	movl	-264(%rbp), %eax
	cltd
	idivl	-268(%rbp)
	movl	%eax, -272(%rbp)
# a[t45] = t51
	movl	-248(%rbp), %edx
	movl	-272(%rbp), %eax
cltq
	movl	%eax, -44(%rbp,%rdx,1)
# goto .L11
	jmp	.L11
# t52 = 0
.L9:
	movl	$0, -276(%rbp)
# j = t52
	movl	-276(%rbp), %eax
	movl	%eax, -140(%rbp)
# t53 = 0
	movl	$0, -280(%rbp)
# j = t53
	movl	-280(%rbp), %eax
	movl	%eax, -140(%rbp)
# t54 = 10
.L14:
	movl	$10, -284(%rbp)
# t55 = 1
	movl	$1, -288(%rbp)
# if j < t54 goto .L12
	movl	-140(%rbp), %eax
	cmpl	-284(%rbp), %eax
	jge	.L19
	jmp	.L12
.L19:
# t55 = 0
	movl	$0, -288(%rbp)
# goto .L13
	jmp	.L13
# goto .L13
	jmp	.L13
# t56 = 1
.L15:
	movl	$1, -292(%rbp)
# t57 = j + t56
	movl	-140(%rbp), %eax
	movl	-292(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -296(%rbp)
# j = t57
	movl	-296(%rbp), %eax
	movl	%eax, -140(%rbp)
# goto .L14
	jmp	.L14
# t58 = 0
.L12:
	movl	$0, -300(%rbp)
# t59 = j
	movl	-140(%rbp), %eax
	movl	%eax, -304(%rbp)
# t59 = t59 * 4
	movl	-304(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -304(%rbp)
# t58 = t59
	movl	-304(%rbp), %eax
	movl	%eax, -300(%rbp)
# t60 = a[t58]
	movl	-300(%rbp), %edx
cltq
	movl	-44(%rbp,%rdx,1), %eax
	movl	%eax, -308(%rbp)
# param t60
# t61 = call printInt, 1
	movq	-308(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -312(%rbp)
	addq	$4, %rsp
# param .LC2
# t62 = call printStr, 1
	movq	$.LC2, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -320(%rbp)
	addq	$4, %rsp
# goto .L15
	jmp	.L15
# param .LC3
.L13:
# t63 = call printStr, 1
	movq	$.LC3, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -328(%rbp)
	addq	$4, %rsp
# t64 = 0
	movl	$0, -332(%rbp)
# return t64
	movq	-332(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
