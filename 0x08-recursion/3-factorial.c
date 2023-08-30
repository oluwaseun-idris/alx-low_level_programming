#include "main.h"

/**
 * factorial - A function that prints out the factorial of a give number
 * @n: Variable of number that will be factorized
 * return: Factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
