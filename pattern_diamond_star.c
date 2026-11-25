// Print a diamond of stars
#include <stdio.h>

int main()
{
    int n, i, j, space;

    printf("Enter number of rows for the top half: ");
    scanf("%d", &n);

    /* Top half */
    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    /* Bottom half */
    for (i = n - 1; i >= 1; i--)
    {
        for (space = 1; space <= n - i; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
