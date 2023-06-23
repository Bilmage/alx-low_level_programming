#include <stdio.h>
#include <math.h>

/**
 * largestPrimeFactor - Finds the largest prime factor of a number.
 * @number: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the given number.
 */
long long largestPrimeFactor(long long number)
{
long long i;

while (number % 2 == 0)
number /= 2;

for (i = 3; i <= sqrt(number); i += 2)
{
while (number % i == 0)
number /= i;
}

if (number > 2)
return (number);

return (i - 2);
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
long long number = 612852475143;
long long largestFactor = largestPrimeFactor(number);

printf("%lld\n", largestFactor);

return (0);
}
