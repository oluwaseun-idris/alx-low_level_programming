#include "main.h"

/**
 * _puts - An empty function
 * return (0)
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
