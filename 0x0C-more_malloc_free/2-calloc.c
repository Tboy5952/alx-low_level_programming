#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc- ffunction that allocate memory for an array
 *@nmemb:number of array
 *@size:size of array
 *
 * Return:pointer to a newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output; /* declearation of a pointer */

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = calloc(nmemb, size);  /* allocate memory */
	if (output == NULL)
	{
		return (NULL);
	}
	else

		return (output);
}
