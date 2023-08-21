#include "main.h"

/**
 *swap_int-function that swaps two integer
 *@:parameter 1
 *@:parameter 2
 *Return: 0
 */
 void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
