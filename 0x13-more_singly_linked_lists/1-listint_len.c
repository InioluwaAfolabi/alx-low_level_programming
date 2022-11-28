#include "lists.h"

/**
 * listint_len - function to return number of elements
 * @h: head
 * Return: num of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
