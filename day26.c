// FILE OPERATION fseek func uses
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * const argv[])
{
    FILE *fp;
    char *stream_file;
    int ch;

    // source file
    stream_file = "en.txt";

    // file open
    fp = fopen(stream_file, "rb");
    if(fp == NULL)
    {
        perror("Error.! File Opening Error. ");
        return EXIT_FAILURE;
    }

    ch = fgetc(fp);
    printf("%c\n", (char)ch);  // type casting int to char
    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    // fseek function
    fseek(fp, sizeof(char)*3, SEEK_CUR);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fclose(fp);

    return EXIT_SUCCESS;
}

