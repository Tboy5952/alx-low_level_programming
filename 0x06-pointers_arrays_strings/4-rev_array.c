#include "main.h"
/**
 * reverse_array-function that reververs array of integer 
 * @a: parameter 1
 * @n: parameter 2
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, i < n-- ; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}


