// Find the second largest element in an array
#include <stdio.h>

int main()
{
    int arr[5], i, first, second;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    first = arr[0];
    second = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second || second == first)
        {
            if (arr[i] != first)
                second = arr[i];
        }
    }
    printf("Second largest = %d\n", second);
    return 0;
}
