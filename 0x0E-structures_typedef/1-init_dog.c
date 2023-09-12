#include <stdio.h>
#include "dog.h"

/**
 *init_dog-function that initialize a variable
 *@d: name of sructure
 *@name: name of the dog in the structure
 *@age: age of the dog
 *@owner: name of owner of dog in struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
