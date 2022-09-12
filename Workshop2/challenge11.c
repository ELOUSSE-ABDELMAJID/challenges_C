#include <stdio.h>
#include <stdbool.h>

bool    is_leap_year(int year)
{
    if (year % 400 != 0)
    {
        if ((year % 4 == 0) && (year % 100 != 0))
            return (true);
        else
            return (false);
    }
    else
        return (true);
}

int main()
{
    int year;
    bool result;

    printf("Enter a year between (1800 - 10000): \n");
    scanf("%d", &year);
    result = is_leap_year(year);
    if (result == true)
        printf("This year is a leap year.\n");
    else
        printf("This year is not a leap year.\n");
    return (0);
}