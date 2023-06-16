#include <stdio.h>

/**
 * main - Entry point of the program for double digit
 * 
 * Return: 0 (success)
 */
int main(void)
{
	int firstdigit;
	int seconddigit;

	for (firstdigit = 0; firstdigit <= 8; firstdigit++)
	{
		for (seconddigit = firstdigit +  1; seconddigit <= 9; seconddigit++)
		{
			putchar(firstdigit + '0');
			putchar(seconddigit + '0');

			if (firstdigit != 8 || seconddigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
