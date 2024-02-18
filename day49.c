// random number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* const argv[])
{
    unsigned int random_number, n = 10;
    time_t t;

    srand((unsigned)time(&t));
    while(n--)
    {
        // range 1 to 100
        random_number = rand() % 100 + 1;
        printf("Random number between 1 and 100: %d\n", random_number);
    }

    return 0;
}
