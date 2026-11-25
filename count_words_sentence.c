// Count the words in a sentence
#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            words++;
    }
    printf("Number of words = %d\n", words);
    return 0;
}
