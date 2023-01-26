#include "lists.h"

/**
 * list_len - Function to count nodes in the list
 *
 * @h: Singly linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		h = h->next;
		count_node++;
	}
	return (count_node);
}
