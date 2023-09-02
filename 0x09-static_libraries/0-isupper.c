#include "main.h"

/**
 * _isupper - function that checks for upper case
 * @c: the function that checks
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
