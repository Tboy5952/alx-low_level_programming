#include "main.h"

/**
 * reverse_array - function that reverses the content 
 * @a: parameter 1
 * @n: parameter 2
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	 for (i = 0, j = n - 1; i < j; i++, j--) 
	 {
		 tmp = a[i];
		  a[i] = a[j];
		    a[j] = tmp;
	 };
}

