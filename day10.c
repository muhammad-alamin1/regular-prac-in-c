#include <stdio.h>

int main(void)
{
    int i, size;
    char *fruit_name[] = {"Mango", "jack-fruit", "Banana", "Litchi"};
    size = sizeof(fruit_name)/sizeof(fruit_name[0]);
    char *(*ptr)[4] = &fruit_name;

    for(i = 0; i < 4; i++)
        printf("%s\n", (*ptr)[i]);



    return 0;
}
