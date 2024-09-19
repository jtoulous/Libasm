global ft_strlen


ft_strlen:
	mov 	rax, -1

	.loop_start:
		inc		rax
		cmp		BYTE [rdi + rax], 0
		jne		.loop_start
	
	ret