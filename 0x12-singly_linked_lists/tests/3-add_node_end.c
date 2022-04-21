#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: start node
 * @str: string
 * Return: address of new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, cnt = 0;
	list_t *new;
	list_t *tmp;
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return(NULL);

	for (i = 0; str[i] != '\0'; i++)
		cnt++;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
