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
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
