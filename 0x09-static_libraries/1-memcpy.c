#include "main.h"

/**
 * _memcpy - write function to copy
 * @n: no of bytes
 * @src: first memory area
 * @dest: second memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
