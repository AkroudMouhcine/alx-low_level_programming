#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: var.
 * Return: pointer.
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc(i + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
