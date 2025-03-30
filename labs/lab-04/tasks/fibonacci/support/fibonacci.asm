; SPDX-License-Identifier: BSD-3-Clause

%include "printf32.asm"

section .data
    N: dd 7          ; N-th fibonacci number to calculate

section .text
    global main
    extern printf

main:
    mov ecx, DWORD [N]
    print: PRINTF32 `%d\n\x0`, ecx  ; DO NOT REMOVE/MODIFY THIS LINE
    mov eax, 2
    mov ebx, 0
    mov ecx, 1
    iterate:
        cmp eax, 7
        jg stop
        mov edx, ecx
        add ecx, ebx
        mov ebx, edx
        inc eax
        jmp iterate  ; we want to find the N-th fibonacci number; N = ECX = 7
    ; TODO: calculate the N-th fibonacci number (f(0) = 0, f(1) = 1)
    stop: PRINTF32 `%d\n\x0`, ecx
    ret
