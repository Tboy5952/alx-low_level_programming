#include "main.h"

/**
*_strspn- function that gets the length of a prefix
*@s: string to search from
*@accept: string to search
*Return: number of characters
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, k;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (k = 0 ; s[i] != accept[k] ;k++)
		{
			if (accept[k] == '\0')
				return (i);
		}
	}
	return (0);
}
