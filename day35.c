// Structure
#include <stdio.h>
#include <stdlib.h>

typedef struct Name_type
{
    char first[20];
    char last[20];
};

typedef struct Student
{
    unsigned int id;
    Name_type name;
    char grade[3];
};

int main(int argc, char* const argv[])
{


    return EXIT_SUCCESS;
}
