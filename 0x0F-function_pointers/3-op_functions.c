#include "3-calc.h"
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 *op_add-function afd two integer number
 *@a:num1
 *@b:num2
 *Return:result of a plus b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub-function minos two integer number from each other
*@a:num1
*@b:num2
*Return:result of a minos b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul-function that mult. two integer number
*@a:num1
*@b:num2
*Return:result of a mult. b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div-function that divides two integer number
*@a:num1
*@b:num2
*Return:result of a divided by b
*/
int op_div(int a, int b);
{
	return (a / b);
}
/**
*op_mod-It returns the remainder of division of two integer number
*@a:num1
*@b:num2
*Return:returns the remainder of division of a and b
*/
int op_mod(int a, int b);
{
	return (a % b);
}

