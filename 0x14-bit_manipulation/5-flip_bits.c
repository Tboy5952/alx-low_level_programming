#include "main.h"
/**
  * flip_bits - calculates the number of bits needed
  * to get from one number to another
  * @n: base number
  * @m: number to transform to
  * Return: the number of bit transformations needed
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, res;

	res = 0;
	for (j = 8 * sizeof(n) - 1; j >= 0; j--)
		if (((n ^ m) >>	j) & 1)
			res++;
	return (res);
}
