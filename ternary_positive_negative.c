// Check positive or negative using the ternary operator
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    (n >= 0) ? printf("Positive (or zero)\n") : printf("Negative\n");
    return 0;
}
