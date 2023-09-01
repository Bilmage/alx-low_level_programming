#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @binary: string containing the binary number
 *
 * Return: the converted number or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *binary)
{
int index;
unsigned int decimal_value = 0;

if (!binary)
return (0);

for (index = 0; binary[index]; index++)
{
if (binary[index] < '0' || binary[index] > '1')
return (0);
decimal_value = 2 * decimal_value + (binary[index] - '0');
}

return (decimal_value);
}

