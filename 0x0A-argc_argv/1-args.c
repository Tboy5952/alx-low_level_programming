#include <stdlib.h>
#include <stdio.h>

/**
 *main-Programme that prints the number of arguments
* @agrc:parameter that count the number of strings
*@agrv:argument vector
* Return: Always 0 success
*/
int main(int agrc, char **agrv)
{
	(void) agrv;
	if (agrc >= 0)
	{
	printf("%d\n", agrc - 1); /* print number of string */
	}
	return (0);
}
