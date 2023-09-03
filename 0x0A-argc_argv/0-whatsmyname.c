#include <stdlib.h>
#include <stdio.h>

/**
 * main-programme that string 
 * @agrc:parameter that count the number of strings
 * @agrv:pointer that point to the string 
 * Return: Always 0 success
 */
int main(int agrc, char **agrv)
{
	(void) agrc; /* declear unused argument */
	printf("%s\n",agrv[0]); /* agrv[0] will print file name */
	return(0);
}
