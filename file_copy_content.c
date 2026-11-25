// Copy the content of data.txt into copy.txt
#include <stdio.h>

int main()
{
    FILE *source, *target;
    char ch;

    source = fopen("data.txt", "r");
    if (source == NULL)
    {
        printf("File data.txt not found. Create it first.\n");
        return 1;
    }

    target = fopen("copy.txt", "w");
    if (target == NULL)
    {
        printf("Could not create copy.txt\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, target);
    }

    fclose(source);
    fclose(target);
    printf("Content copied to copy.txt\n");
    return 0;
}
