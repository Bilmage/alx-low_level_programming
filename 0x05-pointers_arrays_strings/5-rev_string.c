#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 *
 * Return: void
 */
void rev_string(char *s)
{
int i, j;
char temp;

i = 0;
while (s[i] != '\0')
i++;

for (j = 0; j < i / 2; j++)
{
temp = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = temp;
}
}

