#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_numbers - That prints the number from 1 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	putchar('\n');
}
