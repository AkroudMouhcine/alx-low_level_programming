#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: var.
 * @av: var.
 * Return: NULL ot pointer.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		k += strlen(av[i]);
		k++;
	}
	p = malloc(sizeof(char) * (k + 1));
	if (p == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			p[k++] = av[i][j];

		p[k++] = '\n';
	}
	p[k] = '\0';

	return (p);
}
