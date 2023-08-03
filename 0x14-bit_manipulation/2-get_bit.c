#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number to retrieve the bit from
 * @index: index of the bit to retrieve (starting from 0)
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}

