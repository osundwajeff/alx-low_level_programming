#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list.
 * @head: node
 * @index: index
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (cnt < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			cnt++;
			head = head->next;
		}
	}

	return (head);
}
