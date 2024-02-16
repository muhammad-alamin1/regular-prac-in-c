// dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* const argv[])
{
    int *ptr, *ptr1;
    int n;

    printf("Enter the number of elements.! ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));
    ptr1 = (int*)malloc(sizeof(int) * n);
    if(ptr == NULL || ptr1 == NULL)
    {
        fprintf(stderr, "Memory could not allocated.!");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("Memory allocation successful. \n");

        // realloc the memory
        printf("Memory size before realloc %p\n.", ptr);
        ptr = (int*)realloc(ptr, sizeof(int) *5);
        ptr1 = (int*)realloc(ptr1, sizeof(int)*6);
        printf("Memory size after realloc %p\n.", ptr);

        printf("Memory reallocation successful. \n");

        // now free the memory
        free(ptr);
        free(ptr1);
    }

    return 0;
}
