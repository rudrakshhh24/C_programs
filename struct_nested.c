// Nested structure (a structure inside another structure)
#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[50];
    struct Date dob;
};

int main()
{
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter date of birth (day month year): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\nName: %s\n", s.name);
    printf("Date of birth: %d/%d/%d\n", s.dob.day, s.dob.month, s.dob.year);
    return 0;
}
