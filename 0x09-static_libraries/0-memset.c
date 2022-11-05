#include "main.h"
/**
 * _memset - function that fills memory
 * @n: firstt byte
 * @s: pointer
 * @b: constant byte
 * Return: to memroy area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
