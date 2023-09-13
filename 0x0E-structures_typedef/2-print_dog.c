#include <stdio.h>
#include "dog.h"
/**
 * print_dog-function that prints function that prints a struct dog
 *@d: structure name
 *Return: Always 0 success
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("name: (nil)\n"));
		printf("age: %f\n", (d->age) ? d->age : 0);
		d->owner ? (printf("owner: %s\n", d->owner)) : (printf("owner: (nil)\n"));
	}
}
