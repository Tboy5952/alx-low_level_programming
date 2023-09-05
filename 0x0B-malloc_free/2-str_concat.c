#include "main.h"

/**
 *str-concat-function that concatenates two strings.
 *@s1: destination string
 *@s2: string to be concatenated
 *Return:Always success
 */
char *str_concat(char *s1, char *s2);
{
	char s1len;
	char s2len;
	int i;
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
	for (i = 0 ; s1[i] != '\0' ; i++)
		outres[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		outres[s1len + i] = s2[i];
	return (outres);
}
