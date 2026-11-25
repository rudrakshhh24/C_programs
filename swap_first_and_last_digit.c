// Swap the first and the last digit of a given number
#include <stdio.h>

int main()
{
    int n, first, last, power = 1, temp, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    /* find the first digit and the place value of the first digit */
    temp = n;
    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;

    if (n < 10)
        result = n;
    else
        result = last * power + (n % power - last) + first;

    printf("After swapping first and last digit = %d\n", result);
    return 0;
}
