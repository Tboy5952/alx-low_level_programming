#include "main.h"
/**
 * puts_half -function that prints half of a string.
 * @str:parameter
 * Return: Alawys 0
 */
void puts_half(char *str)
{
	int i;
	int n;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	n = count / 2;
	for (i = n ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
