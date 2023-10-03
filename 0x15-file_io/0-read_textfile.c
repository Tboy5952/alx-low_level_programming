#include "main.h"

/**
 *read_texfile - function that reads a text file and prints
 * @filename: name of file to be read
 * @letters: number of letters to be read and printed
 * Return: number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f;
	ssize_t g;
	ssize_t h;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	h = read(f, buffer, letters);
	g = write(STDOUT_FILENO, buffer, h);

	free(buffer);
	close(f);
	return (g);
}
