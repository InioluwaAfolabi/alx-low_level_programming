#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char t;

	while (count++ <= 9)
	{
		for (t = 'a'; t <= 'z'; t++)
			_putchar(t);
		_putchar('\n');
	}
}
