#include "main.h"

/**
 * flip_bits - flip to get from one number to another.
 *
 * @n: input.
 * @m: input.
 *
 * Return: bits number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number = n ^ m;
	unsigned int count = 0;

	for (; number > 0; number >>= 1)
	{
		if (number & 1)
			count++;
	}

	return (count);
}
