#include <stdlib.h>
#include <stdio.h>

/**
 *main-programme that prints all arguments it receives
* @agrc:parameter that count the number of strings
*@agrv:argument vector
* Return: Always 0 success
*/
int main(int agrc, char **agrv)
{
	int i;

	for (i = 0 ; i < agrc ; i++) /* i is going to loop in arr */
	{
		printf("%s\n", agrv[i]) ; /* agrv[i] will print  all string */
	}
	return (0);
}
