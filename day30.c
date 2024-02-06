// Static Variable
#include <stdio.h>
#include <stdlib.h>

void my_func();

int a;
static int b;

int main(int argc, char* const argv[])
{
    my_func();
    printf("a = %d and b = %d\n", a, b);

    return EXIT_SUCCESS;
}

void my_func()
{
    a += 1;
    b += 1;
}
