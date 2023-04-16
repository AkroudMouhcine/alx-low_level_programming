#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: pointer
 * @s2: pointer
 * Return: pointer or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k = 0;
	int l;
	int m;
	int n;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (m = 0; s1[m] != '\0'; m++)
		;
	for (n = 0; s2[n] != '\0'; n++)
		;
	l = m + n;
	p = (char *) malloc(l + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++, k++)
	{
		p[k] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, k++)
	{
		p[k] = s2[j];
	}
	p[k] = '\0';
	return (p);
}
