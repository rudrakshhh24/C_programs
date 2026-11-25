// Sum of the members of a structure
#include <stdio.h>

struct Numbers
{
    int a;
    int b;
    int c;
};

int main()
{
    struct Numbers n;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n.a, &n.b, &n.c);

    printf("Sum = %d\n", n.a + n.b + n.c);
    return 0;
}
