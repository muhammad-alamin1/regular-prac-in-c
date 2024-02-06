#include <stdio.h>
// formatted input function in C || scanf() & sscanf()

int main(void)
{
    int product_id, qty;
    float price;
    char str[] = "101 99 100.10";
    char a = 'A';
    char b[10] = {'a', 'b'};
    char product_name[20];

    //scanf("%4d %d %f", &product_id, &qty, &price);
    //sscanf(str, "%d %d %f", &product_id, &qty, &price);
    //printf("product ID- %d & Quantity- %d & Price -%.2f", product_id, qty, price);
    scanf("%[^\n]", product_name);
    printf("%s", product_name);

    getch();
    return 0;
}
