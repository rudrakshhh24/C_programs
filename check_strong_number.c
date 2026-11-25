// Check if a number is a strong number
#include <stdio.h>

int main()
{
    int n, original, digit, i, sum = 0;
    long fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    while (n != 0)
    {
        digit = n % 10;
        fact = 1;
        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original)
        printf("%d is a strong number\n", original);
    else
        printf("%d is not a strong number\n", original);
    return 0;
}
