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

#include <stdio.h>

void print_remaining_days(int month, int day, int year)
{
if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
{
if (month > 2 && day >= 60)
{
day++;
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}


