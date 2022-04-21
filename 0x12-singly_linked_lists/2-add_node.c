#include "lists.h"
/**
 * add_node - add a new node at the beginning of list_t list
 * @head: input
 * @str: string
 * Return: address of new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, cnt = 0;
	list_t *new;

	if (head == NULL)
		return(NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return(NULL);

	for (i = 0; str[i] != '\0'; i++)
		cnt++;

	new->len = i;
	new->str =strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
