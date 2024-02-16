// dynamic memory allocation [ malloc, calloc, realloc, free) ]
/*
    malloc return void pointer
    calloc return
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* const argv[])
{
    int *student;
    int n;

    printf("Enter the number of student. ");
    scanf("%d", &n);

    // now allocate the memory
    student = (int*)malloc(sizeof(int)* n);
    student = NULL;
    if(student == NULL)
    {
        printf(stderr, "Error: couldn't allocate memory\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("Memory Allocation Successfully.! ");
        // others work
    }

    // now free the memory
    free(student);

    return 0;
}
