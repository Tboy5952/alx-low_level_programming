#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Print numbers followed by a new line
* @separator: The string to be printed between numbers (or NULL)
*b8a62c229ab2a3078f0@n:The number of argument passed to the funct. 
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
