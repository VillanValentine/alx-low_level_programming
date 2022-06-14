#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @*str: provides a similar function
 * Return: new line
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
