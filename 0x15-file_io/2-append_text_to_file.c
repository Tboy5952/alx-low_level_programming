#include "main.h"

/**
 * append_text_to_file - function that appends text.
 * @filename: name of file
 * @text_content: terminated string
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, j, k = 0;



	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (k = 0 ; text_content[k];)
			k++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	j = write(a, text_content, k);

	if (a == -1 || j == -1)
		return (-1);
	close(a);
	return (1);
}
