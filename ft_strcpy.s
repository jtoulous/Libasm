section .text
    global ft_strcpy

ft_strcpy:
    mov rax, -1

    .loop_start:
        inc     rax
        mov     r8b, [rsi + rax]     ;recup le char de src
        mov     [rdi + rax], r8b     ;le deplace dans dst

        cmp     r8b, 0               ;compare si c t '\0'
        jne     .loop_start

    mov rax, rdi
    ret