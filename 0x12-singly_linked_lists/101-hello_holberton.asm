section .data
    format db "Hello, Holberton",10,0  ; The format string with a newline character

section .text
    global _start

_start:
    ; Load the address of the format string into rdi
    mov rdi, format

    ; Load the address of the message (optional) into rsi
    ; mov rsi, message

    ; Call the printf function
    call printf

    ; Exit the program
    call exit

section .text
    global printf
    extern printf
    global exit
    extern exit

