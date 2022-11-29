#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of list
 * @head: head of list
 * @index: index
 * Return: null if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int e;

	if (head == NULL)
		return (NULL);
	for (e = 0; e < index; e++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
