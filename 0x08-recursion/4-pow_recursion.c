#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y
 * @x: The base
 * @y: The exponent
 *
 * Return: The value of x raised to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /*indicate an error*/
	}
	if (y == 0)
	{
		return (1); /*Anything raise to power 0 is 1*/
	}
	return (x * _pow_recursion(x, y -1)); /*x raise to power y*/
}
