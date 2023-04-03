; File: hello.asm
; Assembly program to print "Hello, Holberton" using printf

        global  main
        extern  printf

        section .data
msg     db      'Hello, Holberton', 0

        section .text
main:
        ; Prepare arguments for printf
        mov     rdi, msg        ; Set first argument to address of message
        xor     rax, rax        ; Clear rax register (number of vector registers used)

        ; Call printf
        call    printf

        ; Exit program
        mov     rax, 60         ; System call number for exit
        xor     rdi, rdi        ; Return code 0
        syscall                 ; Make system call

