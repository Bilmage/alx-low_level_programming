#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @number: The number to extract the last digit from.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int number)
{
int last_digit = number % 10;
printf("Last digit: %d\n", last_digit);
return (last_digit);
}

