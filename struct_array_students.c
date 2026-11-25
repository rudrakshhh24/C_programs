// Store details of 3 students using an array of structures
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter roll, name and marks of student %d: ", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    printf("\nStudent details:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d  %s  %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    return 0;
}
