#include "main.h"

/**
 * _strchr-function that locates a character in a string.
 *@s: string to seacher fot the charater
 *@c: character which s is seaching for
 *Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
