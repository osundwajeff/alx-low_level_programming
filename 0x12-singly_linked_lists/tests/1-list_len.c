#include "lists.h"
/**
 * list_len - function that returns number of elements
 * in alinked list_t
 * @h: struct list_t
 * Return: cnt
 */
size_t list_len(const list_t *h)
{
	int cnt = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
