// File Operation
#include <stdio.h>

int main(int argc, char * const argv[])
{
    FILE *fp;
    char file_name[] = "my_file.txt";
    char name[] = "Muhammad";
    char address[] = "Betmore";
    unsigned int usr_id = 101;

    fp = fopen(file_name, "w");

    int ret = fprintf(fp, "%s    %s    %u\n", name, address, usr_id);
    printf("TOtal = %d\n", ret);

    fclose(fp);
    fprintf(fp, "Second line\n");



    return 0;
}
