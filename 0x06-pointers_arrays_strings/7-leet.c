#include "main.h"
/**
 *leet - function that encode string into 1337
 *@n:string to encode
 *Return: pointer
 */
char *leet(char *n)
{
	char *r = n;
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char k[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*n)
	{
		for (i = 0; i < 5; i++)
		{
			if (*n == a[i] || *n == a[i] - 32)
				*n = k[i] + '0';
		}
		n++;

	}
	return (r);
}

