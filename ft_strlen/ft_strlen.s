bits64


section .text
    global ft_strlen

ft_strlen:
    mov rax, 0   ;counter

    .loopstart:
        mov al, [rdi]

        cmp al, 0
        jz .loopend

        inc rdi
        inc rax
        jmp .loopstart
    
    .loopend:
        ret