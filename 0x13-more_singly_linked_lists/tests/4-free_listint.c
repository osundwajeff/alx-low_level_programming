#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: node
 * Return: 0
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		head = head->next;
		free(head);
	}
}
