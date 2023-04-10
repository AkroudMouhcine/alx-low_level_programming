#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring
 * @haystack:  char
 * @needle:  char
 *
 * Return: either a pointer to a character or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack++;
	}
	return (NULL);
}



