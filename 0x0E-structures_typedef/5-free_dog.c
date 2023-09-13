#include "dog.h"
#include <stdlib.h>
/**
 *free_dog-function that frees dog
 *@d:pointer to structure
 *Return:Always 0 success
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
