#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 6;
    float average;

    int z = x < y ? x : y; // ternary oparetor

    average = (float) (x+y+z)/3;
    printf("%.2f", average);

    getch();
    return 0;
}

