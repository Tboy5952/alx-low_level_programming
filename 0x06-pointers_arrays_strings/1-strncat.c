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
	int i, j;

	int destlen = 0;
	 int srclen = 0;

	 for (i = 0 ; dest[i] != '\0' ; i++)
		 destlen++;
	 for (i = 0 ; src[i] != '\0' ; j++)
		 srclen++;
	 for (i = destlen ; j = 0 ; j < n && src[j] != '\0' ; i++ ; j++) 
	 {
		 dest[destlen + j] = src[j];
	 }
	 dest[i] = '\0' ;

	 return (dest);

}
