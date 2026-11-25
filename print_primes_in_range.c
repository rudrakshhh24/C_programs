// Print all prime numbers in a range
#include <stdio.h>

int main()
{
    int start, end, n, i, isPrime;

    printf("Enter start and end of the range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers: ");
    for (n = start; n <= end; n++)
    {
        if (n <= 1)
            continue;

        isPrime = 1;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", n);
    }
    printf("\n");
    return 0;
}
