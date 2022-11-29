#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - functin to free list and set the head to null
 * @head: head of the list
 * Return: nill
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
