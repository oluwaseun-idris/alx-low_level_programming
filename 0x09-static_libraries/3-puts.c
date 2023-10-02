#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
void _puts(char *str) {
	while (*str != '\0') {
		_putchar(*str);
		str++;
	}
}
