#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <stddef.h>
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of argument strings
 * Return: 0 on success, error code
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
