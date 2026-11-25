// Check if a number is positive and even
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0 && n % 2 == 0)
        printf("%d is a positive even number\n", n);
    else
        printf("%d is not a positive even number\n", n);
    return 0;
}
