// Basic pointer: address and value
#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    printf("Value stored in ptr (address) = %p\n", (void *)ptr);
    printf("Value pointed by ptr = %d\n", *ptr);
    return 0;
}
