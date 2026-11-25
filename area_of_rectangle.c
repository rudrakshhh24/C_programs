// Area of a rectangle = length x width
#include <stdio.h>

int main()
{
    float length, width, area;

    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);

    area = length * width;
    printf("Area = %.2f\n", area);
    return 0;
}
