#include "main.h"

/**
 *  _atoi - An empty function
 *  return (0)
 */

int _atoi(char *s)
{
	int result = 0;

    while (*s)
    {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result;
}
