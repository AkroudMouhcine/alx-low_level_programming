#include "main.h"

/**
 * read_textfile - reads a text file and prints.
 *
 * @filename: the file name
 * @letters: the letters
 *
 * Return: the converted number or 0.
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int file;
	size_t i, tmp;
	char *ptr;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY, 0644);
	if (file == -1)
	{
		return (0);
	}
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		return (0);
	}
	tmp = read(file, ptr, sizeof(char) * letters);
	i = 0;
	while (i < tmp)
	{
		write(STDOUT_FILENO, &ptr[i], 1);
		i++;
	}
	close(file);
	return (tmp);
}
