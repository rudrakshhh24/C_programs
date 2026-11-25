// Convert a binary number to decimal
#include <stdio.h>

int main()
{
    long binary;
    int digit, power = 1, decimal = 0;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while (binary != 0)
    {
        digit = binary % 10;
        decimal = decimal + digit * power;
        power = power * 2;
        binary = binary / 10;
    }
    printf("Decimal = %d\n", decimal);
    return 0;
}
