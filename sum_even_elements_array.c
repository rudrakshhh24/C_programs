// Sum of even elements in an array
#include <stdio.h>

int main()
{
    int arr[5], i, sum = 0;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            sum = sum + arr[i];
    }
    printf("Sum of even elements = %d\n", sum);
    return 0;
}
