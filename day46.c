#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[] = {100, 200, 3, 4, 5};
    int *ptr;
    ptr = arr;

    // printf("*p : %d\n", *(ptr + 1));
    // printf("*p : %d\n", *ptr + 1);

    // void pointer
    void *vp;
    int n = 10;

    vp = &n;

    printf("Address of n %p\n", &n);
    printf("Value of vp %p\n", vp);
    printf("Content of vp %d\n", *((int*)vp));

    return 0;
}
