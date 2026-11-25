// Find the square of a number using a function
#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square = %d\n", square(n));
    return 0;
}
