#include "main.h"

/**
*more_numbers-function that prints 10 times.
*/

void more_numbers(void)
{
	int a;
	int b;

	for (a = 1 ; a <= 10 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b > 9)
				putchar(b / 10 + '0');
			putchar(b % 10 + '0');
		}
		putchar('\n');
	}
}
