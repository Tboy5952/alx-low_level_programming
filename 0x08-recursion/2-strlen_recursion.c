#include "main.h"
/**
 * _strlen_recursion-function that returns the length of a string.
 * @s:parameter 1
 *Return:return the length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != 0)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
