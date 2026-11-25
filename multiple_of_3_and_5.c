// Check if a number is a multiple of both 3 and 5
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
        printf("%d is a multiple of 3 and 5\n", n);
    else
        printf("%d is not a multiple of both 3 and 5\n", n);
    return 0;
}
