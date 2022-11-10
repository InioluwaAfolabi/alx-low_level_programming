#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory using malloc
 * @b: allocated string
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
