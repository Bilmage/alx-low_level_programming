#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The length of the line to be printed
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
