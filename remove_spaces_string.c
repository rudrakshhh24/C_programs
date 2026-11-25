// Remove spaces from a string
#include <stdio.h>

int main()
{
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("Without spaces = %s\n", result);
    return 0;
}
