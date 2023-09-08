#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range-that creates an array of integers
 *@min:min integer number
 *@max:max intet number
 *Return:pointer to newly array crated
 */
int *array_range(int min, int max)
{
	int i;
	int *dynamicArray;

	if (min > max)
		return (NULL);
	dynamicArray = malloc(sizeof(int) * (max - min + 1));
	if (dynamicArray == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
	{
		dynamicArray[i] = min;
	}
	return (dynamicArray);
}
