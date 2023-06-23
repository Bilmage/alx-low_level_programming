#include "main.h"

/**
 * print_numbers_ten_times - Prints numbers from 0 to 14 ten times, followed by a new line
 */

void print_numbers_ten_times(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
}

