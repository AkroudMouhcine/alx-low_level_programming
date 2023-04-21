#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: argument.
 * @argv: argument.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;
	char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (; i > 0; i--)
	{
		printf("%02hhx%s", *p++, i ? " " : "\n");
	}
	return (0);
}

