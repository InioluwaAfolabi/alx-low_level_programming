#include "function_pointers.h"

/**
 * int_index - fuction to search for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function to compare
 * Return: 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int num;

	if (array && cmp)
		for (num = 0; num < (int)size; num++)
			if (cmp(array[num]))
				return (num);
	return (-1);
}
