#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of the program.
 *
 * Description: Finds the largest prime factor of a number and prints it.
 *
 * Return: 0 on success.
 */
int main(void)
{
long long x, maxf;
long long number = 612852475143;
double square = sqrt(number);

for (x = 1; x <= square; x++)
{
if (number % x == 0)
{
maxf = number / x;
}
}

printf("%lld\n", maxf);

return (0);
}
