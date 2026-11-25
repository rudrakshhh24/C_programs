// Find the largest element in an array using a pointer
#include <stdio.h>

int main()
{
    int arr[5], i, *ptr, largest;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    largest = *ptr;
    for (i = 1; i < 5; i++)
    {
        if (*(ptr + i) > largest)
            largest = *(ptr + i);
    }
    printf("Largest = %d\n", largest);
    return 0;
}
