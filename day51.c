// enum
#include <stdio.h>
#include <string.h>

enum Days
{
    SATURDAY,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

enum Days convert_string_to_enum(const char *day_str);

int main(int argc, char* const argv[])
{
    // enum declaration
    enum Days today;
    char days_name[10];

    // enum value assign
    printf("Enter Days: ");
    scanf(" %[^\n]", days_name);
    today = convert_string_to_enum(&days_name);

    switch(today)
    {
        case SATURDAY:
            printf("It's Saturday!\n");
            break;
        case SUNDAY:
            printf("It's SUNDAY!\n");
            break;
        case MONDAY:
            printf("It's MONDAY!\n");
            break;
        case WEDNESDAY:
            printf("It's WEDNESDAY!\n");
            break;
        case THURSDAY:
            printf("It's THURSDAY!\n");
            break;
        case FRIDAY:
            printf("It's FRIDAY!\n");
            break;
        default:
            printf("Invalid Day.!");
    }

    return 0;
}

// func to convert a string to an enum value
enum Days convert_string_to_enum(const char *day_str) {
    if (strcmp(day_str, "SUNDAY") == 0) return SUNDAY;
    if (strcmp(day_str, "MONDAY") == 0) return MONDAY;
    if (strcmp(day_str, "TUESDAY") == 0) return TUESDAY;
    if (strcmp(day_str, "WEDNESDAY") == 0) return WEDNESDAY;
    if (strcmp(day_str, "THURSDAY") == 0) return THURSDAY;
    if (strcmp(day_str, "FRIDAY") == 0) return FRIDAY;
    if (strcmp(day_str, "SATURDAY") == 0) return SATURDAY;

    return -1;
}

