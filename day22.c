// FILE
#include <stdio.h>

int main(int argc, char * const argv[])
{
    FILE *file_in, *file_out;

    char *input_file, *output_file;
    int num1, num2, sum;

    input_file = "in.txt";
    output_file = "out.txt";

    file_in = fopen(input_file, "r");
    file_out = fopen(output_file, "w");

    fscanf(file_in, "%d", &num1);
    fscanf(file_in, "%d", &num2);

    //
    sum = num1 + num2;

    printf("%d + %d = %d\n", num1, num2, sum);
    fprintf(file_out, "%d\n", sum);

    fclose(file_in);
    fclose(file_out);

    return 0;
}
