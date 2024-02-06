// Local & Global Variable
#include <stdio.h>
#include <stdlib.h>

void my_func(int y);

int x = 1;

int main(int argc, char* const argv[])
{
    int y = 5;

    x = 10;

    my_func(y);
    printf("My func x = %d & y = %d\n", x, y);

    return EXIT_SUCCESS;
}

void my_func(int y)
{
    y *= 2;
    x += 10;

    printf("My func x = %d & y = %d\n", x, y);
}
