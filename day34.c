// Structure ( Array of Structure )
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Name_type
{
    char first_name[20];
    char last_name[20];
};

struct Employee
{
    unsigned int emp_id;
    struct Name_type name;
    char address[101];
};

int main(int argc, char* const argv[])
{
    struct Employee emp[2];  // Array of structure
    unsigned int i, n = 2;

    // input
    for(i = 0; i < n; i++)
    {
        printf("Enter the ID for Employee %d: \n", i+1);
        scanf("%d", &emp[i].emp_id);

        printf("Enter the first name for Employee %d: \n", i+1);
        scanf("%s", emp[i].name.first_name);

        printf("Enter the last name for Employee %d \n", i+1);
        scanf("%s", emp[i].name.last_name);

        printf("Enter the Address of Employee %d\n", i+1);
        scanf("%s", emp[i].address);
    }
    printf("\n\n\n Output: \n\n\n");

    // output
    for(i = 0; i < n; i++)
    {
        printf("ID: %d\n", emp[i].emp_id);
        printf("Name: %s %s\n", emp[i].name.first_name, emp[i].name.last_name);
        printf("Address: %s\n", emp[i].address);
    }

    return EXIT_SUCCESS;
}
