#include "main.h"

/**
 * _puts_recursion: A function that prints a string
 * @s: character to be treated
 * return -success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
