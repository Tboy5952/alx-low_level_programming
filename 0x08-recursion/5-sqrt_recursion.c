#include "main.h"

/**
 * sqrt_recursive_helper - Recursive helper function 
 * @n: The number to calculate the square 
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if n does not have a square root.
 */
int sqrt_recursive_helper(int n, int guess)
{
	if (n < 0)
	{
		return (-1);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	return (sqrt_recursive_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root 
 * @n: The number to calculate the square root for.
 *
 * Return: The square root of n, or -1 if n does not have a square
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursive_helper(n, 1));
}
