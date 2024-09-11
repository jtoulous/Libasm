section .text
    global ft_strcpy

ft_strcpy:
    mov rax, 0        ;compteur pour se ballaD dans la str

    .loop_start:
        mov r8b, [rsi + rax]     ;recup le char de src
        mov [rdi + rax], r8b     ;le deplace dans dst

        cmp r8b, 0               ;compare si c t '\0'
        jne .loop_restart
        je .loop_end

    .loop_restart:
        inc rax
        jmp .loop_start

    .loop_end:
        mov rax, rdi
        ret