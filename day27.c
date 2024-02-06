// FILE OPERATION
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* const argv[])
{
    FILE *fp;
    char *stream_file;
    long int size_of_photo;

    stream_file = "photo.jpeg";

    // file open
    fp = fopen(stream_file, "rb");
    if(fp == NULL)
    {
        perror("Error.! File Opening Error.!");
        return EXIT_FAILURE;
    }

    fseek(fp, 0, SEEK_END);
    size_of_photo = ftell(fp);

    printf("FILE Size: %ld bytes .!\n", size_of_photo);
    printf("FILE Size: (KiloByte): %ld .!\n", size_of_photo * 1024);

    fclose(fp);

    return EXIT_SUCCESS;
}
