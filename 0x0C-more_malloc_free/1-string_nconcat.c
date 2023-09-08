#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *string_nconcat-function that concatenates two strings
 *@s1: destination string
 *@s2: string to be concatenated
 *@n: no of string to be copied
 *Return:Always success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int i;
	char *outres;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		s1len++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		s2len++;

	outres = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (outres == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			outres[i] = s1[i];
		for (i = 0 ; s2[i] != '\0' ; i++)
			outres[s1len + i] = s2[i];
		outres[s1len + i] = '\0';
	}
	else
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			outres[i] = s1[i];
		for (i = 0 ; i < n ; i++)
			outres[s1len + i] = s2[i];
		outres[s1len + i] = '\0';
	}
	return (outres);
}


