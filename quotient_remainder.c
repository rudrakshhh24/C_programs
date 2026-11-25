// Find quotient and remainder
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter dividend and divisor: ");
    scanf("%d %d", &a, &b);

    if (b == 0)
    {
        printf("Cannot divide by zero\n");
    }
    else
    {
        printf("Quotient = %d\n", a / b);
        printf("Remainder = %d\n", a % b);
    }
    return 0;
}
