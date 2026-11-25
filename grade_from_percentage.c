// Find the grade from the percentage
#include <stdio.h>

int main()
{
    float p;

    printf("Enter percentage: ");
    scanf("%f", &p);

    if (p >= 90)
        printf("Grade A\n");
    else if (p >= 75)
        printf("Grade B\n");
    else if (p >= 60)
        printf("Grade C\n");
    else if (p >= 40)
        printf("Grade D\n");
    else
        printf("Fail\n");
    return 0;
}
