#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - function reverses a listint_t linked list.
 * @head: node
 *
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new;
	listint_t *last;

	if (*head == NULL)
		return (NULL);

	last = NULL;

	while ((*head)->next != NULL)
	{
		new = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = new;
	}

	(*head)->next = last;
	return (*head);
}
