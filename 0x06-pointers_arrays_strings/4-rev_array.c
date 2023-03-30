#include "main.h"
/**
 * reverse_array - everses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to reverses
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
