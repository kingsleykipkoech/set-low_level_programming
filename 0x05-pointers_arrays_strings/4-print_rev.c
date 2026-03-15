#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find the index of the last character */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print characters from end to beginning */
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
