// Find the minimum of five numbers
#include <stdio.h>

int main()
{
    int num, i, min;

    printf("Enter 5 numbers:\n");
    scanf("%d", &min);

    for (i = 2; i <= 5; i++)
    {
        scanf("%d", &num);
        if (num < min)
            min = num;
    }
    printf("Minimum = %d\n", min);
    return 0;
}
