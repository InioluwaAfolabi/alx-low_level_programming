#include "main.h"

/**
 * _calloc - function to allocate memory of an array
 * @nmemb: elements of the array
 * @size: size of the element
 * Return: s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (n = 0; n < (nmemb * size); n++)
		s[n] = 0;
	return (s);
}
