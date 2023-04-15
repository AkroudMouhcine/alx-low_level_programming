#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: pointer.
 * @old_size: var.
 * @new_size: var.
 *
 * Return: pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;
	unsigned int j;

	j = new_size;
	if (ptr == NULL)
		return (malloc(new_size));
	else if (new_size == 0)
	{
		free(ptr);
		return (NUUL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(j);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	for (i = 0; i < j; i++)
	{
		((char *)p)[i] = ((char *)j)[i];
	}
	free(ptr);
	return (p);
}
