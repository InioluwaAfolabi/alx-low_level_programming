#include "main.h"

/**
 * array_range - function to create array of integers
 * @min: minimum
 * @max: maximum
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int a, size, *c;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	c = malloc(sizeof(int) * size);
	if (c == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		c[a] = min++;
	return (c);
}
