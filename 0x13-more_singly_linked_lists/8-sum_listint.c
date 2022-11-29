#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - function to return the sum of the list
 * @head: head of list
 * Return: sum if success and null if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
