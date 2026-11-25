// Write text into a file
#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("Could not open the file\n");
        return 1;
    }

    fprintf(fp, "Hello, this is my first file program.\n");
    fprintf(fp, "C programming is fun.\n");
    fclose(fp);

    printf("Text written to data.txt\n");
    return 0;
}
