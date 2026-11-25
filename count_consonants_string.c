// Count consonants in a string
#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
                ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
                count++;
        }
    }
    printf("Number of consonants = %d\n", count);
    return 0;
}
