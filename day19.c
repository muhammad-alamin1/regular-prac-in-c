#include <stdio.h>

// Pointer ! What is Pointer ?

int main(void)
{
    int x = 10;
    int *p;

    p = &x;

    printf("Before change the value of x %d\n ", x);

    *p = 20;

    printf("After changeing the value of x %d\n", x);

    x = 15;

    printf("Value of x: %d\n", x);
    printf("Value stored at location %p is %d\n", p, *p);

    printf("Address of x : %p\n", &x);
    printf("Address of p: %p\n", p);


    return 0;
}
