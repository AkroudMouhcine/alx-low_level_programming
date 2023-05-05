#include "main.h"

/**
 * clear_bit -> Sets the value of a bit to 0 at a given index.
 *
 * @n: input.
 * @index: index starting from 0 of the bit reauired.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 64)
		return (-1);
	i <<= index;
	*n = *n & ~i;
	return (1);
}
