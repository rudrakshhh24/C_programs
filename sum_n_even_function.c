// Sum of first n even numbers using a function
#include <stdio.h>

int sumEven(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum = sum + 2 * i;
    }
    return sum;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum of first %d even numbers = %d\n", n, sumEven(n));
    return 0;
}
