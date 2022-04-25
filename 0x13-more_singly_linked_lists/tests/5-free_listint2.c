#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: node
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	if ((*head)->next != NULL)
		free((*head)->next);
	free(*head);
	*head = NULL;
}
