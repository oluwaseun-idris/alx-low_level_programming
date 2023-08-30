
#include "main.h"

/**
 * Search -search for the square root of an in
 * @a:int
 * @b:int
 *
 * Return: integer value
 */
int Search(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	return (Search(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of an integer
 * @n: integer to find square root of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (Search(1, n));
}
