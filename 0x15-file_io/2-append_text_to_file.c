#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 *
 * @filename: the file name
 * @text_content: the text content
 *
 * Return: the converted number or 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int tmp;
	int count;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_RDWR | O_APPEND, 0644);
	if (access(filename, F_OK) != 0)
	{
		return (-1);
	}
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
