// Sum of squares of first n numbers (1^2 + 2^2 + ... + n^2)
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i * i;
    }
    printf("Sum of squares = %d\n", sum);
    return 0;
}
