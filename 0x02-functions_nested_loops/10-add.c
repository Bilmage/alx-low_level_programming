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
int digit;
int divisor = 1;

if (sum < 0)
{
_putchar('-');
sum = -sum;
}

while (sum / divisor > 9)
divisor *= 10;

while (divisor != 0)
{
digit = sum / divisor;
_putchar('0' + digit);
sum %= divisor;
divisor /= 10;
}

_putchar('\n');
return sum;
}
