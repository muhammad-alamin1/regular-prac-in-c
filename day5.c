#include <stdio.h>
#include <stdlib.h>

/*
    void* malloc(int size)
    {
        return &size;
    }
*/

int main(void)
{
    int arr[3] = {1, 2, 3};

    printf("%d\n", sizeof(arr));
    int* pa = (int*)malloc(sizeof(int) * 3);

    return 0;
}
