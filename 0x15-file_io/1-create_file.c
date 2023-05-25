#include "main.h"

/**
 * create_file -  creates a file.
 *
 * @filename: the file name
 * @text_content: the text content
 *
 * Return: the converted number or 0.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int tmp;
	int count;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	count = 0;
	while (text_content != NULL && text_content[count] != '\0')
	{
		count++;
	}
	tmp = write(file, text_content, count);
	if (tmp == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
