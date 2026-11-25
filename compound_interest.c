// Compound Interest = P * (1 + R/100)^T - P
#include <stdio.h>

int main()
{
    float p, r, amount, ci;
    int t, i;

    printf("Enter principal, rate and time (in years): ");
    scanf("%f %f %d", &p, &r, &t);

    amount = p;
    for (i = 1; i <= t; i++)
    {
        amount = amount * (1 + r / 100);
    }
    ci = amount - p;

    printf("Compound Interest = %.2f\n", ci);
    printf("Total Amount = %.2f\n", amount);
    return 0;
}
