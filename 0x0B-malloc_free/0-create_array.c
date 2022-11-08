#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of char
 * @size: size of the array
 * @c: the character
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		arr[a] = c;
	}
		return (arr);
}
