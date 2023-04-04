#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: character
 * @accept: character
 *
 * Return: whole number without a sign
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value = 0;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
			{
				value++;
				break;
			}
		}
		if (!accept[n])
			break;
	}
	return (value);
}
