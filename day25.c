// BINARY FILE OPERATION
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * const argv[])
{
    FILE *fp_in, *fp_out;
    char *input_file, *output_file;
    int ch;

    input_file = "photo.jpeg";
    output_file = "photo1.jpeg";

    fp_in = fopen(input_file, "rb");
    if(fp_in == NULL)
    {
        perror("Error! File Opening Failed.!");
        return EXIT_FAILURE;
    }

    fp_out = fopen(output_file, "wb");
    while(1)
    {
        ch = fgetc(fp_in);
        if(ch == EOF)  // if, find end of file, then break the loop, otherwise continue the loop;
            break;
        fputc(ch, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);

    return EXIT_SUCCESS;
}
