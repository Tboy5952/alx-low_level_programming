#include <stdlib.h>
#include <stdio.h>

/**
 *main-Programme that adds two string
* @agrc:parameter that count the number of strings
*@agrv:argument vector
* Return: Always 0 success
*/
int main(int agrc, char **agrv)
{
	int sum1 = 0;
	int sum2 = 0;

	if (agrc == 3)
	{
		sum1 = atoi(agrv[1]); /* converting sum to integer */
		sum2 = atoi(agrv[2]); /* converting sum to integer */
		printf("%d\n", sum1 * sum2); /* mult s1 with s2 */
		return (0);
	}
	else
		printf("error\n"); /* incae of error input */

}
