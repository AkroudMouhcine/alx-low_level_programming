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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
