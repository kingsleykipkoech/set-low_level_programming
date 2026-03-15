#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i, start;

	/* Find string length */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine starting point for the second half */
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
	}

	/* Print second half */
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
