// count time with time.h file
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mul(int x, int n)
{
    x = n * 2;
}

int main(int argc, char* const argv[])
{
    int i, j, x, n;
    clock_t start_time, end_time;
    double time_elapsed;

    // start time
    start_time = clock();

    n = 12345678;
    for(i = 0; i < 1000000000; i++)
    {
        for(j = 0; j < 10; j++)
            x = n * 2;
    }

    // end time
    end_time = clock();

    // time elapsed
    time_elapsed = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Time: %lf Second.\n", time_elapsed);

    return 0;
}
