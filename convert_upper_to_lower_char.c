// Convert an uppercase character to lowercase
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an uppercase character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;

    printf("Lowercase = %c\n", ch);
    return 0;
}
