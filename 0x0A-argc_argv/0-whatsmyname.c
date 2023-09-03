#include <stdlib.h>
#include <stdio.h>

/**
 *main-Programme that its file name
* @agrc:parameter that count the number of strings
*@agrv:argument vector
* Return: Always 0 success
*/
int main(int agrc, char **agrv)
{
	(void) agrc; /* declear unused argument */
	printf("%s\n", agrv[0]) ; /* agrv will print name */
	return (0);
}
