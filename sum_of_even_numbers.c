// Sum of even numbers from 1 to n
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        sum = sum + i;
    }
    printf("Sum of even numbers = %d\n", sum);
    return 0;
}
