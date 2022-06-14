#include "main.h"

/**
 * puts2 - printing first character with others and new line
 * @str: Prints the characters
 * Return: Characters
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
