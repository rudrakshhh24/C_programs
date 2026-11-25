// Check if a person can vote (age 18 or more)
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You can vote\n");
    else
        printf("You cannot vote yet\n");
    return 0;
}
