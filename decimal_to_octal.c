// Convert a decimal number to octal
#include <stdio.h>

int main()
{
    int n, i = 0, j;
    int octal[32];

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        octal[i] = 0;
        i++;
    }
    while (n > 0)
    {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }

    printf("Octal = ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n");
    return 0;
}
