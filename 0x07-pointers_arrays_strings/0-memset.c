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
	unsigned int a;
       
	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
