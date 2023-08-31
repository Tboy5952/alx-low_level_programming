#include "main.h"

/**
 * factorial- function that return factorial of number
 *@n:given number
 *Return: Always 0 success
 */
int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}

}
