// Print numbers from 1 to n using recursion
#include <stdio.h>

void printNumbers(int i, int n)
{
    if (i > n)
        return;
    printf("%d\n", i);
    printNumbers(i + 1, n);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printNumbers(1, n);
    return 0;
}
