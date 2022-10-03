	.file	"switch.c"
	.text
	.globl	switch_eg
	.type	switch_eg, @function
switch_eg:
.LFB11:
	.cfi_startproc
	movl	%esi, %eax
	cmpl	$1, %edi
	je	.L2
	cmpl	$400000000, %edi
	je	.L3
	ret
.L2:
	addl	%edi, %eax
	ret
.L3:
	leal	(%rdi,%rsi,4), %eax
	ret
	.cfi_endproc
.LFE11:
	.size	switch_eg, .-switch_eg
	.globl	main
	.type	main, @function
main:
.LFB12:
	.cfi_startproc
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE12:
	.size	main, .-main
	.ident	"GCC: (GNU) 12.2.1 20220819 (Red Hat 12.2.1-2)"
	.section	.note.GNU-stack,"",@progbits
