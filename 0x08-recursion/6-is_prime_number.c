#include "main.h"
int is_prime(int n, int i);

/**
 * is_prime_number-function that returns 1 if the input integer i
 * @n:prime number
 * Return: 1 or 0
 */
int is_prime_number(int n, int i)
{
	if (n <= 1)
	{
		return (0); /* not prime */
	}
	return (is_prime(n,2)); /* start the check by divisor 2 */
}
/**
 * is_prime - Helper function to check if a number is prime recursively.
 * @n: The number to check.
 * @i: The current divisor.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime(int n, int i)
{
	if (i == n)
	{
		return (1); /* n is only divisible by itself, so it's prim */
	}
	else if ( n % i == 0)
	{
		return (0); /* n is not divisible by i, n is not prime */
	}
	return (is_prime(n, i + 1)); /* Check with the next divisor */
}

