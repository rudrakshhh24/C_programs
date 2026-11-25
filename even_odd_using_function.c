// Check even or odd using a function
#include <stdio.h>

int isEven(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isEven(n))
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);
    return 0;
}
