#include <stdlib.h>
#include "main.h"
/**
 * array_range -  function that creates an array of integers.
 *
 * @min: int.
 * @max: int.
 *
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = min; i < max + 1; i++)
		p[i - min] = i;
	return (p);
}
