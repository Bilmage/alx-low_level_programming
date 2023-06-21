#include "main.h"

/**
 * add - Adds two integers and prints the sum.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */
int add(int a, int b)
{
int sum = a + b;
_putchar('0' + sum);
_putchar('\n');
return sum;
}
