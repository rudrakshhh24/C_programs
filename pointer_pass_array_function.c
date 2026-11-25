// Pass an array to a function using a pointer
#include <stdio.h>

int sumArray(int *arr, int size)
{
    int i, sum = 0;

    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[5], i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum = %d\n", sumArray(arr, 5));
    return 0;
}
