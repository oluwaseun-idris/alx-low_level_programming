#include "main.h"

/**
 * _strncat - An empty function
 * return (0)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

    while (*dest)
        dest++;

    while (*src && n-- > 0)
        *dest++ = *src++;

    *dest = '\0';

    return original_dest;
}
