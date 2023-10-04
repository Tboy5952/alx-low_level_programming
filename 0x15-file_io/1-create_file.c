#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: pointer
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int a, g, h = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (h = 0; text_content[h];)
			h++;
	}
	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	g = write(a, text_content, h);
	if (a == -1 || g == -1)
		return (-1);
	close(a);
	return (1);
}
