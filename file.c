#include <stdio.h>

int main(void)
{
    FILE *fp;
    char *buffer;
    int age;

    fp = fopen("index.txt", "r");
    if(fp == NULL)
        perror("File opening error.\n");

    if(!feof(fp))
    {
        int len = fscanf(fp, "%s    %d", buffer, &age);
        if(len != EOF)
        {
            if(len == 2)
                printf("Name: %s, Age: %d\n", buffer, age);
        }
    }

    return 0;
}
