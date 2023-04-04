#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to character
 * @accept: input
 *
 * Return: either a pointer to the byte in s or null
 */

char *_strpbrk(char *s, char *accept)
{
	char *n;

	while (*s != '\0')
	{
		for (n = accept; *n != '\0'; n++)
		{
			if (*s == *n)
				return (s);
		}
		s++;
	}
	return (NULL);
}
