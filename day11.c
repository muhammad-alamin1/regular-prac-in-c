#include <stdio.h>

int main(void)
{
    char ch;
    int printf = 1;

    //printf("Enter a character.\n");
    ch = getc(stdin);

    //printf("THe next character is. ");
    putc(ch + printf, stdout);

    return;
}
