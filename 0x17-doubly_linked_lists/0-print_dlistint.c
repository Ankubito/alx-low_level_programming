#include "lists.h"

/**
 * print_dlistint - Print elements of dlistint_t list
 * @h: head list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

    while (h != NULL)
	    {
	      printf("%d\n", h->n);
        count++;
        h = h->next;
	}

    return (count);
}
