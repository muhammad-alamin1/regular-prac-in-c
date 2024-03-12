// Array
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numbers[5], index = 0, i, start_value = 10;

    numbers[index] = 0;
    numbers[++index] = 1;
    numbers[++index] = 2;
    numbers[++index] = 3;
    numbers[++index] = 4;

    for(i = 0; i < 5; i++)
    {
        numbers[i] = start_value;
        start_value += 1;
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
