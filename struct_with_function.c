// Pass a structure to a function
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s)
{
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s;

    printf("Enter roll, name and marks: ");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);

    display(s);
    return 0;
}
