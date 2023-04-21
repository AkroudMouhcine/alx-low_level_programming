#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separate tokens.
 * @n: arguments.
 * @...: integerts.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list v;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(v, int));
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(v);
}

