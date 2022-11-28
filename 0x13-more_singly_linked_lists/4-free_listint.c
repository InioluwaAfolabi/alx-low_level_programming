#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees listint_t list
 * @head: head of list node
 * Return: value if true and null if there is an error
 */

void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head != NULL)
	{
		new_node = head->next;
		free(head);
		head = new_node;
	}
}
