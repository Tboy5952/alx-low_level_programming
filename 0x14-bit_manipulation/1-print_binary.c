#include "main.h"
/**
  * print_binary - converts a decimal number to binary
  * @n:integer to convert
  */
void print_binary(unsigned long int n)
{
	int j, flag;

	if (n == 0)
		_putchar('0');
	for (flag = 0, j = sizeof(n) * 8 - 1; j >= 0; j--)
	{
		if ((n >> j) & 1)
		flag = 1;
		if (flag == 1)
			((n >> j) & 1) ? _putchar('1') : _putchar('0');
	}
}
