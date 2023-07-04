#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 *
 * Return: void
 */
void puts_half(char *str)
{
int length = 0;
int start;

while (str[length] != '\0')
length++;

start = (length + 1) / 2;

while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n');
}
