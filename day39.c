#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char first[50];
    char last[50];
} Name_type;

typedef struct
{
    unsigned int date;
    unsigned int month;
    unsigned int year;
} DOB;

typedef struct
{
    Name_type name;
    char father_name[50];
    char mother_name[50];
    DOB dob;
    long long int id_no;
} National_id_card;

// all func
void info_screen(void);
National_id_card usr_input(void);
void output_info(National_id_card nic);

int main(int argc, char* const argv[])
{
    system("title NATION ID CARD");
    system("color 60");

    National_id_card nic = usr_input();
    output_info(nic);

    return EXIT_SUCCESS;
}

void info_screen(void)
{
    printf("\n\n\t\t\t------------------------------------------------------------");
    printf("\n\t\t\t >>> Government of the People's Republic of Bangladesh <<<\n");
    printf("\t\t\t------------------------------------------------------------\n\n");
}

National_id_card usr_input(void)
{
    National_id_card nic;

    info_screen();

    printf("\t\t\t\t--------------------------------------");
    printf("\n\t\t\t\t >>> NATIONAL ID CARD REGISTATION <<<\n");
    printf("\t\t\t\t--------------------------------------\n\n");

    printf("Enter Your First Name: ");
    scanf("%s", nic.name.first);

    printf("Enter Your Last Name: ");
    scanf("%s", nic.name.last);

    printf("Enter Your Father's Name: ");
    scanf(" %[^\n]", nic.father_name);

    printf("Enter Your Mother's Name: ");
    scanf(" %[^\n]", nic.mother_name);

    printf("Enter Your Birth day date: (dd) ");
    scanf("%u", &nic.dob.date);

    printf("Enter Your Birth day Month: (mm) ");
    scanf("%u", &nic.dob.month);

    printf("Enter Your Birth day Year: (yyyy) ");
    scanf("%u", &nic.dob.year);

    printf("Enter Your National ID card number: ");
    scanf("%lld", &nic.id_no);

    return nic;
}

void output_info(National_id_card nic)
{
    system("cls");
    info_screen();

    printf("\t\t\t\t--------------------------------------");
    printf("\n\t\t\t\t >>> NATIONAL ID CARD INFORMATION <<<\n");
    printf("\t\t\t\t--------------------------------------\n\n");

    printf("\t\t\t Name: %s %s\n", nic.name.first, nic.name.last);
    printf("\t\t\t Father's Name: %s\n", nic.father_name);
    printf("\t\t\t Mother's Name: %s\n", nic.mother_name);
    printf("\t\t\t Date Of Birst: %u/%u/%u\n", nic.dob.date, nic.dob.month, nic.dob.year);
    printf("\t\t\t ID NO: %lld", nic.id_no);

    printf("\n\n");
    system("pause");
}
