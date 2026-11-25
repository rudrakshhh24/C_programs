// Check if a number is between 10 and 50
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 10 && n < 50)
        printf("%d is between 10 and 50\n", n);
    else
        printf("%d is not between 10 and 50\n", n);
    return 0;
}
