/*
 FuckTheWorldShellcode.c
By Abatchy
gcc FuckTheWorldShellcode.c -fno-stack-protector -z execstack -o FuckTheWorldShellcode.out
*/

#include <stdio.h>
#include <string.h>

unsigned char shellcode[] = 
"\x31\xc0\xb0\x04\x31\xdb\xb3\x01\xeb\x11\x59\x31\xd2\xb2\x19\xcd\x80\x31\xc0\xb0\x01\x31\xdb\xb3\x05\xcd\x80\xe8\xea\xff\xff\xff\x46\x75\x63\x6b\x20\x74\x68\x65\x20\x77\x6f\x72\x6c\x64\x2e\x20\x41\x6e\x64\x20\x79\x6f\x75\x2e\x0a";

int main()
{
    printf("Shellcode size: %d\n", strlen(shellcode));
    int (*ret)() = (int(*)())shellcode;
    ret();
}
