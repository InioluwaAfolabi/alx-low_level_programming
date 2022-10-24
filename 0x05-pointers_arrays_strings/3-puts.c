#include "main.h"

/**
 * _puts - print a string next to a new line
 * @str: string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
