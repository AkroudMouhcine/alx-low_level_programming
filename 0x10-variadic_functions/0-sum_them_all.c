#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: arguments.
 *
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = n;
	int j = 0;
	va_list v;

	if (!n)
		return (0);

	va_start(v, n);

	for (i = n; i > 0; i--)
		j += va_arg(v, int);

	va_end(v);
	return (j);
}

