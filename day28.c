// REMOVE FILE (FILE OPERATION)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* const argv[])
{
    unsigned int return_value;
    char *file_name = "photo1.jpeg";

    /**
        remove function return value 0;
        if any error then return any value
    */

    return_value = remove(file_name);
    if(return_value != 0)
    {
        perror("Error! FILE Remove Failed.!");
        return EXIT_FAILURE;
    }
    printf("%s removed successfully.!\n"); // success

    // now try to remove again
    return_value = remove(file_name);
    if(return_value != 0)
    {
        perror("Error! FILE Remove Failed.!");
        return EXIT_FAILURE;
    }
    printf("%s removed successfully.!\n"); // worng

    return EXIT_SUCCESS;
}
