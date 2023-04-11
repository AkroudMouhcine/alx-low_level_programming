#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two numbers.
 * @argc: is the number of arguments on the command line.
 * @argv: is an array of arguments on the command line.
 *
 * Return: 0 or 1 if the programe does not receive two argument.
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
