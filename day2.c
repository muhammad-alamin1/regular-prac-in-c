#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;

    int matrix[3][4][2] = {
        {{1, 2}, {3, 4}, {5, 6}, {7, 8}},
        {{9, 10}, {11, 12}, {13, 14}, {15, 16}},
        {{17, 18}, {19, 20}, {21, 22}, {23, 24}}
    };

    printf("%d\t", matrix[1][2][1]);


    return 0;
}
