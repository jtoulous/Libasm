section .text
    global  ft_read       ;ssize_t read(int fd, void *buf, size_t count)
    extern  __errno_location

ft_read:
    mov     rax, 0
    syscall

    cmp rax, 0
    jl      .error_handling
    
    ret

.error_handling:
    neg     rax
    mov     rdi, rax
    call    __errno_location wrt ..plt

    mov     [rax], rdi
    mov     rax, -1
    ret