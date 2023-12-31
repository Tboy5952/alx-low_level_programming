#include "main.h"
#include <stdio.h>

/**
* _strpbrk-function that searches a string.
*@s:string to search for
*@accept:accepted string
*Return: Always 0 (success)
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
