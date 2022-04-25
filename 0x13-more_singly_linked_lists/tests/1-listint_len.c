#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function that returns number of elements
 * in a linked listint_t list
 * @h: integer
 * Return: list length
 */
size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
