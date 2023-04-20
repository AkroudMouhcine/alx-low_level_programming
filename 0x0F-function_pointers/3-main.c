#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 *main - Output.
 *@argc: argument.
 *@argv: argument.
 *
 * Ruturn: Always 0
 */
int main(int argc, char *argv[])
{
	int (*optr_func)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	optr_func = get_op_func(argv[2]);

	if (!optr_func)
	{
		printf("Error\n"), exit(99);
	}

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n"), exit(100);
	}

	printf("%d\n", optr_func(a, b));
	return (0);
}

