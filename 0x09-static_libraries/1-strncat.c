#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: parameter 1
 * @src:  parameter 2
 * @n: parameter 3
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;
	
	while (dest[dest_len] != '\0')
	dest_len++;

	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
