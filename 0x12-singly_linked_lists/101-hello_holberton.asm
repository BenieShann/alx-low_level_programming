section .data
    ; Define a null-terminated string "Hello, Holberton" followed by a line feed
    str: db "Hello, Holberton", 0xa
    
    ; Calculate the length of the string
    len equ $ - str
	
section .text

; Define the entry point of the program
global main

main:
  ; Load the system call number for write into RAX
  MOV RAX, 1

  ; Load the file descriptor for standard output into RDI
  MOV RDI, 1

  ; Load the address of the message into RSI
  MOV RSI, str

  ; Load the length of the message into RDX
  MOV RDX, len

  ; Make the system call using the syscall instruction
  syscall

  ; Load the system call number for exit into RAX
  MOV RAX, 60

  ; Load the exit status into RDI
  MOV RDI, 0

  ; Make the system call using the syscall instruction
  syscall
