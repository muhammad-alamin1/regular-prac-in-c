// Static Variable
#include <stdio.h>
#include <stdlib.h>

void my_func();

int main(int argc, char* const argv[])
{
    my_func();
    my_func();
    my_func();

    return EXIT_SUCCESS;
}

void my_func()
{
    int a = 10;
    static int b = 10;

    a += 2;
    b += 2;

    printf("a = %d and b = %d\n", a, b);
}

