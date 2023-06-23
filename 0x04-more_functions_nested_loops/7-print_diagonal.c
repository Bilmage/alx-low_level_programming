#include <stdio.h>

/**
 * _putchar - Custom putchar function
 * @c: Character to be printed
 *
 * Return: On success, return the character. On error, return EOF.
 */
void _putchar(char c)
{
putchar(c);
}

/**
 * print_diagonal - Prints a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}

for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
print_diagonal(5);  
return (0);
}

