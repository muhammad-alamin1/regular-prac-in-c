//  Structure
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Name_type
{
    char first[20];
    char last[20];
};

struct Student
{
    unsigned int stu_id;
    struct Name_type name;


};

int main(int argc, char* const argv[])
{
    struct Student s1;

    scanf("%u", &s1.stu_id);
    scanf("%s", s1.name.first);
    scanf("%s", s1.name.last);

    printf("ID No. %d\n", s1.stu_id);
    printf("Name: %s %s", s1.name.first, s1.name.last);

    return EXIT_SUCCESS;
}

