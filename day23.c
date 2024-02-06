// FILE OPERATION

#include <stdio.h>

int main(int argc, char * const argv[])
{
    FILE *fp_in, *fp_out;
    char *input_file, *output_file;
    char line[101];
    unsigned int num1, num2, sum = 0;

    input_file = "in.txt";
    output_file = "out.txt";

    fp_in = fopen(input_file, "r");
    fp_out = fopen(output_file, "w");

    // read data from file
    fgets(line, 100, fp_in);
    // print line
    printf("Read the line %s\n", line);

    sscanf(line, "%u    %u", &num1, &num2);  // Read the integer number from LINE
    sum = num1 + num2;

    printf("%u + %u = %u", num1, num2, sum);
    fprintf(fp_out, "Total = %u\n", sum);

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
