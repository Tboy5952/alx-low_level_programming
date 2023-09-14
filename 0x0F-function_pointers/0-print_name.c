#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name-prototype that prints name
 *@name:pointer that points to the nane
 *@f:function pointer
 *Return: Always 0 success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL) /* check for if name is null and f is nulk */
		return;
	f(name); /* name is passed to the pointet */
}
