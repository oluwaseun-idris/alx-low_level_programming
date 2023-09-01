#include "main.h"

/**
 * _memset - An empty function
 * return (0)
 */

char *_memset(char *s, char b, unsigned int n)
{
	 char *original_s = s;

	 while (n > 0) {
        *s = b;
        s++;
        n--;
    }

    return original_s;
}
