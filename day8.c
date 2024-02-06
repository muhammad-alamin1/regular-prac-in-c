#include <stdio.h>

int i, j;

char hello(char a);

int main(void)
{
    char res = hello('a');
    printf(" : %c", res);

    return 0;
}

char hello(char a)
{
    char convert = a;
    convert -= 32;


    return convert;

}
