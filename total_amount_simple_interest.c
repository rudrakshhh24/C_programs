// Total amount = principal + simple interest
#include <stdio.h>

int main()
{
    float p, r, t, si, total;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;
    total = p + si;

    printf("Simple Interest = %.2f\n", si);
    printf("Total Amount = %.2f\n", total);
    return 0;
}
