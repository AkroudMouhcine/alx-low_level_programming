#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - calculate the change
 * @argc: is the number of arguments on the command line.
 * @argv: is an array of arguments on the command line.
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int count, i;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = atoi(argv[1]); i >= 25; i -= 25)
		count++;

	for (; i >= 10; i -= 10)
		count++;
	for (; i >= 5; i -= 5)
		count++;
	for (; i >= 2; i -= 2)
		count++;
	if (i > 0)
		count++;
	printf("%d\n", count);
	return (0);
}

