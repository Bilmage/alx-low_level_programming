#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * This program prints numbers from 1 to 100, replacing multiples of 3 with "Fizz",
 * multiples of 5 with "Buzz", and multiples of both 3 and 5 with "Fizz Buzz".
 *
 * Return: 0 (indicating successful execution of the program)
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("Fizz Buzz\n");
}
else if (i % 3 == 0)
{
printf("Fizz\n");
}
else if (i % 5 == 0)
{
printf("Buzz\n");
}
else
{
printf("%d\n", i);
}
}

return 0;
}
