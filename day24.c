// FILE OPERATION
#include <stdio.h>

int main(int argc, char * const argv[])
{
    FILE *fp_math, *fp_bangla, *fp_english, *fp_average;
    char *math_file, *bangla_file, *english_file, *average_file;
    char math_str[51], bangla_str[51], english_str[51];
    unsigned int math_roll_no, bangla_roll_no, english_roll_no, math_marks, bangla_marks, english_marks, i;
    float average_marks;

    math_file = "math.txt";
    bangla_file = "bangla.txt";
    english_file = "english.txt";
    average_file = "ave.txt";

            // File open
    fp_math = fopen(math_file, "r");
    fp_bangla = fopen(bangla_file, "r");
    fp_english = fopen(english_file, "r");
    fp_average = fopen(average_file, "w");

    for(i = 0; i < 2; i++)
    {
        // Read data from file
        fgets(math_str, 50, fp_math);
        fgets(bangla_str, 50, fp_bangla);
        fgets(english_str, 50, fp_english);

        // Write data
        sscanf(math_str, "%u    %u", &math_roll_no, &math_marks);
        sscanf(bangla_str, "%u    %u", &bangla_roll_no, &bangla_marks);
        sscanf(english_str, "%u    %u", &english_roll_no, &english_marks);

        printf("Data No. %u\n\n", i + 1);

        printf("ROll & Math marks %u & %u\n", math_roll_no, math_marks);
        printf("ROll & Bangla marks %u & %u\n", bangla_roll_no, bangla_marks);
        printf("ROll & English marks %u & %u\n", english_roll_no, english_marks);

        printf("\n\n\n");

        // check roll no. is valid
        if((math_roll_no == bangla_roll_no) && (bangla_roll_no == english_roll_no))
            average_marks = (float)((math_marks + bangla_marks + english_marks)/3.0);

        // Write data on average file
        fprintf(fp_average, "Average Marks = %0.2f\n", average_marks);

    }

    // File Close
    fclose(fp_math);
    fclose(fp_bangla);
    fclose(fp_english);
    fclose(fp_average);

    return 0;
}
