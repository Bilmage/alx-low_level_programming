#include "main.h"

/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The number to generate the times table for
 */
void print_times_table(int n)
{
    int row, col;

    if (n < 0 || n > 15)
    return;

    for (row = 0; row <= n; row++)
    {
    for (col = 0; col <= n; col++)
    {
    int result = row * col;

    if (col != 0)
    {
    _putchar(',');
    _putchar(' ');

    if (result < 10)
    _putchar(' ');

    if (result < 100)
    _putchar(' ');
    }

    if (result < 10)
    _putchar(result + '0');
    else if (result < 100)
    {
    _putchar(result / 10 + '0');
    _putchar(result % 10 + '0');
    }
    else
    {
    _putchar(result / 100 + '0');
    _putchar((result / 10) % 10 + '0');
    _putchar(result % 10 + '0');
    }
    }

    _putchar('\n');
    }
    }
