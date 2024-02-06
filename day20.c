#include <stdio.h>
// Pointer of Pointer
int main(int argc, char * const argv[])
{
    char c = 'A';
    char *p = NULL, **q = NULL;

    p = &c;
    q = &p;

    **q = 'B';

    printf("Value of c : %c\n", c);
    printf("Value of c : %c", *p);
    printf("Value of c : %c", **q);


    return 0;
}
