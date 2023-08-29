#include "main.h"

/**
 * _memset-function that fills memmory with constant bytes
 * @s: an area to fill with byte
 * @b: constant byte
 * @n: number of bytes
 * Return:pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
