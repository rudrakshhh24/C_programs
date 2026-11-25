// Find the maximum of five numbers
#include <stdio.h>

int main()
{
    int num, i, max;

    printf("Enter 5 numbers:\n");
    scanf("%d", &max);

    for (i = 2; i <= 5; i++)
    {
        scanf("%d", &num);
        if (num > max)
            max = num;
    }
    printf("Maximum = %d\n", max);
    return 0;
}
