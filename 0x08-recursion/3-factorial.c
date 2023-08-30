#include "main.h"

/**
 * factorial - A function that prints out the factorial of a give number
 * @n: Variable of number that will be factorized
 * return: Factorial of a number
 */

int factorial(int n) /*returns value of factorial*/
{
	if (n < 0)
	{
		return (-1); /*(-1) indicate error*/
	}
	if (n == 0)
	{
		return (1); /*factorial of 0 is 1*/
	}
	return (n * factorial(n - 1)); /*return factorial value*/
}
