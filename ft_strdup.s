section .text
    global  ft_strdup
    extern  malloc
    extern  ft_strlen
    extern  ft_strcpy

ft_strdup:
    push    rdi    ; garder une copie de la chaine

    call    ft_strlen   ;   strlen
    inc     rax

    mov     rdi, rax
    call    malloc wrt ..plt    ;   malloc
    test    rax, rax
    je      .malloc_fail

    mov     rdi, rax
    pop     rsi 
    call    ft_strcpy   ;   strcpy

    ret


.malloc_fail:
    xor     rax, rax
    ret