#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char name[200];
    int arr[123];
    int len, i, j = 0;

    scanf("%s", name);
    len = strlen(name);

    for(i = 0; i < 123; i++)arr[i] = 0;
    for(i = 0; i < strlen(name); i++)
    {
        arr[name[i]]++;
    }
    for(i = 0; i < 123; i++)
    {
        if(arr[i] != '0')
            printf("%c(%d)", i, arr[i]);
    }




    return 0;
}
