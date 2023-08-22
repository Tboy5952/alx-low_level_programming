#include "main.h"

/**
 *_strcpy - copied string
 *@dest: distination
 *@src: source
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
