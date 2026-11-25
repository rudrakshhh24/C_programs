// Find a character in a string
#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the character to find: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0)
        printf("Character not found\n");
    return 0;
}
