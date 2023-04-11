#include <stdio.h>

/**
 * main - is function serves as the starting point for program execution.
 * @argc:  is the number of arguments on the command line.
 * @argv: is an array of arguments on the command line.
 *
 * Return: 0 always
 */

int main(int argc __attribute__((unused)), char **argv)
{
	argc = 0;
	printf("%s\n", argv[argc]);
	return (0);
}
