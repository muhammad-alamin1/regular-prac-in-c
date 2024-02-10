// Advance Pointer & dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* const argv[])
{
    int *marks;
    int i, n;

    printf("Enter the number of student.! ");
    scanf("%d", &n);

    // now allocate the memory
    marks = (int*)malloc(sizeof(int) * n);
    if(marks == NULL)
    {
        perror("Error! Memory allocation failed for marks.!");
        return EXIT_FAILURE;
    }

    printf("Enter the marks for each student: \n");
    for(i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    printf("Now here you can see the values: \n");
    for(i = 0; i < n; i++)
        printf("%d ", marks[i]);

    // now free the memory
    free(marks);

    return 0;
}
