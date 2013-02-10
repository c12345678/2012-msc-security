#include <stdio.h>

char shellcode[] = "\xbb\x00\x00\x00\x00"           
                   "\xb8\x01\x00\x00\x00"                  
                   "\x0f\x05";                  

int main()
{
  long *ret;
  ret = (long *)&ret + 2;
  (*ret) = (long)shellcode;
}
