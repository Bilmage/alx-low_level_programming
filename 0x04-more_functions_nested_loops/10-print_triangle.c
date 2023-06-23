#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: The size of the triangle to be printed.
 */
void print_triangle(int size)
{
int row, col;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 0; row < size; row++)
{
for (col = 0; col <= row; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
