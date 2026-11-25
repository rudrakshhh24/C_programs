// Find the number of days in a month using a function
#include <stdio.h>

int daysInMonth(int month, int year)
{
    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                return 29;
            return 28;
        default:
            return 0;
    }
}

int main()
{
    int month, year, days;

    printf("Enter month (1-12) and year: ");
    scanf("%d %d", &month, &year);

    days = daysInMonth(month, year);
    if (days == 0)
        printf("Invalid month\n");
    else
        printf("Number of days = %d\n", days);
    return 0;
}
