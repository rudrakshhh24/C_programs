// Double a number using a pointer
#include <stdio.h>

void doubleIt(int *p)
{
    *p = *p * 2;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    doubleIt(&n);

    printf("Doubled value = %d\n", n);
    return 0;
}
