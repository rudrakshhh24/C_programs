// Copy one array into another array
#include <stdio.h>

int main()
{
    int a[5], b[5], i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }

    printf("Copied array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
