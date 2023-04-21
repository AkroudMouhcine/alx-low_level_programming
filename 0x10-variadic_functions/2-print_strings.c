#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: separate tokens.
 * @n: arguments.
 * @...: integerts.
 *
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *p;
	unsigned int i;
	va_list v;

	va_start(v, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		p = va_arg(v, char*);

		if (p == NULL)
		{
			p = "(nil)";
		}
		printf("%s", p);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(v);
}
