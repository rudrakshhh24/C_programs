// Add (append) text to the end of a file
#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "a");
    if (fp == NULL)
    {
        printf("Could not open the file\n");
        return 1;
    }

    fprintf(fp, "This line was added later.\n");
    fclose(fp);

    printf("Text appended to data.txt\n");
    return 0;
}
