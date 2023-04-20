#include "function_pointers.h"

/**
 * array_iterator - exes a func given as a para on each element of an array.
 *
 * @array: int.
 * @size: array.
 * @action: ptr.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
