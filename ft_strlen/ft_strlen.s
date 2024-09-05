global ft_strlen

ft_strlen:
	mov		rax, 0

    loop_start:
;        mov     r8b, [rdi]
        cmp     BYTE [rdi], 0
    	jz		loop_end				 
    	inc		rax
        inc     rdi					
    	jmp		loop_start			

    loop_end:
    	ret