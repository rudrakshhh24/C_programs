// Compare two numbers using nested if
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a >= b)
    {
        if (a == b)
            printf("Both numbers are equal\n");
        else
            printf("%d is greater than %d\n", a, b);
    }
    else
    {
        printf("%d is greater than %d\n", b, a);
    }
    return 0;
}
