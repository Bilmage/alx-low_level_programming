#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 *Return: Always 0 (Success)
 */

int main(void)

{
int d, p;

for (d = '0'; d < '9'; d++)
{

for (p = '0'; p < '9'; p++)
{
if (p != d)
{
putchar(d);
putchar(p);
if (d == '8' && p == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);

}
