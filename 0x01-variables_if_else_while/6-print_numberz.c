#include <stdio.h>

/**
 *
 * main - Program for counting single digits
 *
 * Returns: 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
