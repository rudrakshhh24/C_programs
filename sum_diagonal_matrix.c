// Sum of the main diagonal of a 3x3 matrix
#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, sum = 0;

    printf("Enter elements of the 3x3 matrix (9 numbers):\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 3; i++)
    {
        sum = sum + a[i][i];
    }
    printf("Sum of diagonal = %d\n", sum);
    return 0;
}
