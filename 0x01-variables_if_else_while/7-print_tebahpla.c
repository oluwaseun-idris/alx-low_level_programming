#include <stdio.h>

/**
 * main - Entry point program for alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
