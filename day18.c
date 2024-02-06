#include <stdio.h>

int avc(char a);

int main(void)
{
    char small_let, capi_let;
    small_let = getchar();

    int res = avc(small_let);

    printf("Small Letter %d", res);
    return 0;
}

int avc(char a){
    if(a == 48)
        return 1;
    else
        return 0;
}
