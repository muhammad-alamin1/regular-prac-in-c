// struct & pointer

#include <stdio.h>
#include <string.h>

typedef struct
{
    char first[20];
    char last[20];
} name_type;
typedef struct
{
    int id;
    name_type name;
    char grade[3];
} student_type;

void calculate_grade(student_type* s, int mark);

int main(int argc, char* const argv[])
{
    student_type student[5];
    int i, n = 5;
    int marks[] = {71, 84, 60, 25, 50};

    for(i = 0; i < n; i++)
    {
        printf("Enter the ID for student %d: ", i+1);
        scanf("%d", &student[i].id);
        printf("Enter the first name for student %d: ", i+1);
        scanf("%s", student[i].name.first);
        printf("Enter the last name for student %d: ", i+1);
        scanf("%s", student[i].name.last);
        strcpy(student[i].grade, "");

        printf("\n\n");
    }

    for(i = 0; i < n; i++)
        calculate_grade(&student[i], marks[i]);

    // output
    printf("\n\n\n");

    for(i = 0; i < n; i++)
    {
        printf("ID: %d\n", student[i].id);
        printf("Name: %s %s\n", student[i].name.first, student[i].name.last);
        printf("Grade: %s\n", student[i].grade);
    }

    return 0;
}

//
void calculate_grade(student_type* s, int mark)
{
    if(mark >= 80)
        strcpy(s->grade, "A+");
    else if(mark >= 70)
        strcpy(s->grade, "A");
    else if(mark >= 60)
        strcpy(s->grade, "A-");
    else if(mark >= 50)
        strcpy(s->grade, "B");
    else
        strcpy(s->grade, "F");
}
