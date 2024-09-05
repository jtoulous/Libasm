global  ft_write
extern  __errno_location

ft_write:
    mov     rax, 1
    syscall                 ;call real write

    cmp rax, 0
    jl error_handling       ;if return value < 0  ==> error_handling  
    ret


error_handling:
    neg rax                 ;errno is the positive of the negative return
    mov rdi, rax
    call __errno_location    ;places the address to errno in rax

    mov [rax], rdi
    mov rax, -1
    ret