#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * Check if a string contains only digits.
 *
 * @str:param The input string to be checked
 * Return: Always  or success
 */
int isNumeric(const char *str)
{
	int i = 0;

	for  (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * Main program that adds valid integers from the command-line arguments.
 *@argv:parameter argv[]
 *@argc: parameter to count
 *Return: Always 0 or uccess
 */
int main(int argc, char *argv[]) 
{																						
	int i;
	int sum = 0;
	int num;

	for (i = 1 ; i < argc; i++) 
	{
		 if (isNumeric(argv[i])) 
		  {
			  num = atoi(argv[i]);
			  sum += num;
			  printf("%d\n", sum);
		  }
		 else
		 {
		 printf("error\n", i);
		 return (1);
		 }
	}
	return (0);
}
