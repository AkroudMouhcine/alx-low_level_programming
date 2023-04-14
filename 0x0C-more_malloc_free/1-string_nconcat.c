#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 *@s1: Str One.
 *@s2: Str Tow.
 *@n: int.
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, L, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (l = 0; s2[l] != '\0'; l++)
		;
	if (n > l)
		n = l;
	str = (char *)malloc((i + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
	{
		str[j] = s1[j];
		j++;
	}
	for (L = 0; s2[L] != '\0' && L < n; L++)
	{
		str[j] = s2[L];
		j++;
	}
	str[j] = '\0';
	return (str);
}
