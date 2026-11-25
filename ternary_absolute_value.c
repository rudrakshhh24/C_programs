// Find the absolute value using the ternary operator
#include <stdio.h>

int main()
{
    int n, abs_value;

    printf("Enter a number: ");
    scanf("%d", &n);

    abs_value = (n < 0) ? -n : n;
    printf("Absolute value = %d\n", abs_value);
    return 0;
}
