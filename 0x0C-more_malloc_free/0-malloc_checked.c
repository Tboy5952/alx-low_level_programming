#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked-functtion that allocates memory using malloc
 *@b:value to be saved in pointer
 *
 *Return:Always 0 success
 */
void *malloc_checked(unsigned int b)
{

	char *output;

	output = malloc(b);

	if (output == NULL)
		exit(98);
	else
		return (output);
}
