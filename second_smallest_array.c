// Find the second smallest element in an array
#include <stdio.h>

int main()
{
    int arr[5], i, j, temp;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* sort the array in ascending order */
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Second smallest = %d\n", arr[1]);
    return 0;
}
