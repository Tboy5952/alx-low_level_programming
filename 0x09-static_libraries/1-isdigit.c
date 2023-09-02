#include "main.h"

/**
 * _isdigit - check if i is a digit
 *@i: digit to check
 *Return: returns 1 if digit else 
 */
int _isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	return (0);
}
