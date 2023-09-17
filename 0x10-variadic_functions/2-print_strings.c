#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings-function that print string
 *@separator:it passed to the function
 *@n:number of argument passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "nil";
	if (!separator)
		printf("%s", str);
	else if (separator && i == 0)
		printf("%s", str);
	else
		printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(list);
}


