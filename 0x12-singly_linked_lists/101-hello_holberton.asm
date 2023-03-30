section .data
format: db `Hello, Holberton\n`, 0

section .text
global main

extern printf

main:
push rbp
mov rbp,rsp

;print the string using printf
mov rdi, format
xor eax, eax
call printf

; exit the program
mov eax, 0
pop rbp
ret
