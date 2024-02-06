// Struct
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char first[20];
    char last[20];
} Name_type;

typedef struct
{
    unsigned int id;
    Name_type name;
    char grade[3];
} Student;

// Call by Value Function
void calculate_grade(Student s, int mark);

int main(int argc, char* const argv[])
{
    Student student[2];
    unsigned int i, n = 2;
    int marks[] = {72, 80};

    for(i = 0; i < n; i++)
    {
        printf("Enter the ID for student %u: ", i+1);
        scanf("%u", &student[i].id);

        printf("Enter the First name for student %u: ", i+1);
        scanf("%s", student[i].name.first);

        printf("Enter the Second name for student %u: ", i+1);
        scanf("%s", student[i].name.last);

        // pass empty string
        strcpy(student[i].grade, "");

        printf("\n\n\n");
    }

    for(i = 0; i < n; i++)
        calculate_grade(student[i], marks[i]);

    // output
    printf("OUTPUT: \n\n");
    for(i = 0; i < n; i++)
    {
        printf("ID: %u\n", student[i].id);
        printf("Name: %s %s\n", student[i].name.first, student[i].name.last);
        printf("Grade: %s\n", student[i].grade);
    }

    return EXIT_SUCCESS;
}

void calculate_grade(Student s, int mark)
{
    if(mark >= 80)
        strcpy(s.grade, "A+");
    else if(mark >= 70)
        strcpy(s.grade, "A");
    else if(mark >= 60)
        strcpy(s.grade, "A-");
    else if(mark >= 50)
        strcpy(s.grade, "B");
    else
        strcpy(s.grade, "F");
}
