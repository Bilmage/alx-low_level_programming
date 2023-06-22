#include <stdio.h>
#include "main.h"


/**
 * print_remaining_days - prints the number of remaining days in the year, accounting for leap years
 * @month: the month (1-12)
 * @day: the day of the month (1-31)
 * @year: the year
 *
 * This function calculates the number of remaining days in the year, taking into account
 * leap years. If the given date is February 29 in a leap year, it considers it as the
 * last day of the year.
 */

void print_remaining_days(int month, int day, int year)
{
int is_leap_year = 0;

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
is_leap_year = 1;
}

int remaining_days;

if (month == 2 && day == 29 && is_leap_year)
{
remaining_days = 366 - day;
}
else
{
int day_of_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
remaining_days = 365 - day;

if (is_leap_year)
{
day_of_month[2] = 29;
}

for (int i = month + 1; i <= 12; i++)
{
remaining_days += day_of_month[i];
}
}

printf("There are %d days remaining in the year.\n", remaining_days);
}

