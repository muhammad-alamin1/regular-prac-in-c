// Advance Pointer & dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* const argv[])
{
    int *marks;
    int i, n;

    printf("Enter the number of student. ");
    scanf("%d", &n);

    // now allocate the memory using calloc
    marks = (int*)calloc(n, sizeof(int));
    if(marks == NULL)
    {
        perror("Error! Memory allocated failed.\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using calloc.\n");

        // get the element of the array
        printf("Enter the elements of the array. ");
        for(i = 0; i < n; i++)
            scanf("%d", &marks[i]);

        // print the element of the arra
        for(i = 0; i < n; i++)
            printf("%d ", marks[i]);
    }

    // free memory
    free(marks);

    return 0;
}

