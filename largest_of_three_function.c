// Find the largest of three numbers using a function
#include <stdio.h>

int largest(int a, int b, int c)
{
    int big = a;

    if (b > big)
        big = b;
    if (c > big)
        big = c;
    return big;
}

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Largest = %d\n", largest(a, b, c));
    return 0;
}
