// Check if a string is a palindrome
#include <stdio.h>

int main()
{
    char str[100];
    int len = 0, i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");
    return 0;
}
