#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int row, col, result;

for (row = 0; row <= 9; row++)
{
_putchar('0');
_putchar(',');
_putchar(' ');

for (col = 1; col <= 9; col++)
{
result = row * col;

if (result <= 9)
{
_putchar(' ');
_putchar('0' + result);
}
else
{
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}

if (col != 9)
{
_putchar(',');
_putchar(' ');
}
}

_putchar('\n');
}
}
