#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_all-function that prints all argument
*@format:list of argument
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					{
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
					}
				default:
					i++;
					continue;
			}
			sep = " , ";
			i++;
		}
	}

	va_end(list);
}
