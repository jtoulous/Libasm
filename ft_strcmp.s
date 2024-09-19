section .text
    global ft_strcmp

ft_strcmp:
    mov rax, -1
    xor r8, r8
    xor r9, r9

    .loop_start:
        inc rax
        mov     r8b, [rdi + rax]   
        mov     r9b, [rsi + rax]   
        sub     r8, r9            ;result of (r8 - r9) in r8
        
        cmp r8, 0
        jne     .loop_end

    .loop_restart:
        cmp     byte [rdi + rax], 0
        jne     .loop_start 

    .loop_end:
        mov rax, r8
        ret