// Union
#include <stdio.h>

struct sv
{
    char ch1, c2, c3, c4;
    int n;
    double d;
};

union uv
{
    int n;
    char name[20];
};

int main(int argc, char* const argv[])
{
    int s_size, u_size;

    struct sv a;
    union uv b;

    s_size = sizeof(a);
    u_size = sizeof(b);

    printf("Structure variable took %d bytes.\n", s_size);
    printf("Union variable took %d bytes.\n", u_size);

    return 0;
}
