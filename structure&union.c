#include <stdio.h>
#include <string.h>

struct Product
{
    char name[20];
    double price;
}a, b;

void print_product(struct Product p);


int main(void)
{
    strcpy(a.name, "Clear Men");
    a.price = 5.00;

    print_product(a);

    return 0;
}

void print_product(struct Product p)
{
    printf("Name: %s\n", p.name);
    printf("Price: %.2lf\n", p.price);

}
