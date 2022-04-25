#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes at index
 * 'index' of a listint_t linked list.
 * @head: node
 * @index: index
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cnt = 0;

	listint_t *cpy;
	listint_t *temp;

	if (*head == NULL)
		return (-1);

	cpy = *head;

	if (index == 0)
	{
		temp = cpy->next;
		free(cpy);
		*head = temp;
		return (1);
	}

	while (cpy != NULL)
	{
		if (cnt + 1 == index)
		{
			temp = cpy->next;
			cpy->next = temp->next;
			free(temp);
			return (1);
		}
		if (cpy->next != NULL)
			cpy = cpy->next;
		cnt++;
	}
	return (-1);
}
