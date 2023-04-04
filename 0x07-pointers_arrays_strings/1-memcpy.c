#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: character
 * @src: character
 * @n: unsigned int
 *
 * Return: character
 */
char *_memcpy(char *dest, char src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
