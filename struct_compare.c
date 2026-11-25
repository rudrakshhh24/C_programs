// Compare the marks of two students using structures
#include <stdio.h>

struct Student
{
    char name[50];
    float marks;
};

int main()
{
    struct Student s1, s2;

    printf("Enter name and marks of student 1: ");
    scanf("%s %f", s1.name, &s1.marks);
    printf("Enter name and marks of student 2: ");
    scanf("%s %f", s2.name, &s2.marks);

    if (s1.marks > s2.marks)
        printf("%s scored more\n", s1.name);
    else if (s2.marks > s1.marks)
        printf("%s scored more\n", s2.name);
    else
        printf("Both scored equal marks\n");
    return 0;
}
