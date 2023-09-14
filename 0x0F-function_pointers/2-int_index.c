#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index-searcher for integer
 *@size:size of array
 *@array: an array
 *@cmp:pointer
 *Return:idex or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) == 1) /* compare array to cmp */
			return (i);
	}
	return (-1);
}


