#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter the value of x and y coordinate.\n");
    scanf("%d%d", &x, &y);

    if(x > 0 && y > 0)
        printf("First Quadrant");
    else if(x < 0 && y > 0)
        printf("Second Quadrant");
    else if(x < 0 && y < 0)
        printf("Third Quadrant");
    else if(x > 0 && y < 0)
        printf("fourth Quadrant");



    return 0;
}
