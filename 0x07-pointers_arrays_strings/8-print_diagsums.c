#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: input
 * @size: input
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, x, s1 = 0, s2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		s1 = s1 + a[i];
	for (x = size - 1; x <= (size * size) - size; x = x + size - 1)
	s2 = s2 + a[x];
	printf("%d, %d\n", s1, s2);
}
