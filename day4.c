#include <stdio.h>

int* change()
{
    int x;
    x = 20;
    return &x;
}

int main()
{
    int* ptr = change();

    printf("Main %d\n", *ptr);

    return 0;
}

