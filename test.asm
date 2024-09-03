bit64

section .data
    msg_1: db "Saisissez un texte : ", 10
    buff: times 100 db 0

section .text
    global _start


_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg_1
    mov rdx, 21 + 1
    syscall

    mov rax, 0
    mov rdi, 0
    mov rsi, buff
    mov rdx, 100
    syscall

    mov rax, 1
    mov rdi, 1
    mov rsi, buff
    mov rdx, 100
    syscall

    mov rax, 60
    mov rdi, 69
    syscall