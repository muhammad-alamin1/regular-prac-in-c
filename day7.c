#include <stdio.h>

int main(void)
{
    // prime number
    int j, count = 0;

    int n = 4;

        for(j = 1; j <= n; j++)
        {
            if(n % j == 0)
                count++;
        }
        if(count == 2)
            printf("%d is a prime\n", n);
        count = 0;


    return 0;
}
