// Find the area of a rectangle using a structure
#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
};

int main()
{
    struct Rectangle r;

    printf("Enter length and width: ");
    scanf("%f %f", &r.length, &r.width);

    printf("Area = %.2f\n", r.length * r.width);
    return 0;
}
