#include "main.h"
#include <stdio.h>
/**
  * get_endianness - returns processor endianness
  * Return: 0 or 1
  */
int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return ((int)test[0]);
}
