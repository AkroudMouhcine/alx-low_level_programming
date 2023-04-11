#include <stdio.h>

/**
 * main - is function serves as the starting point for program execution.
 * @argc: is the number of arguments on the command line.
 * @argv: is an array of arguments on the command line.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
