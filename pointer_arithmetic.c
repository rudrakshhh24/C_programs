// Pointer arithmetic (moving a pointer)
#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("First element = %d\n", *ptr);
    ptr++;
    printf("Second element = %d\n", *ptr);
    ptr++;
    printf("Third element = %d\n", *ptr);
    ptr--;
    printf("Back to second element = %d\n", *ptr);
    return 0;
}
