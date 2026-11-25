// Check if a number is a perfect square
#include <stdio.h>

int main()
{
    int n, i, found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 0; i * i <= n; i++)
    {
        if (i * i == n)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("%d is a perfect square\n", n);
    else
        printf("%d is not a perfect square\n", n);
    return 0;
}
