#include "function_pointers.h"

/**
 * array_iterator - function that executes a parameter given function
 * @array: array of the function
 * @size: size of the array
 * @action: pointer to the function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < (int)size; i++)
			action(array[i]);
}
