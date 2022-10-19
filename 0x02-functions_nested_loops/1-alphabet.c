#include "main.h"
/**
 * print_alphabet - Print alphabeth in lower case
 * Return: Always 0
 */
void print_alphabet(void)
{
	char t;

	for (t = 'a'; t <= z; t++)
		_putchar(t);
	_putchar('\n');
	return (0);
}
