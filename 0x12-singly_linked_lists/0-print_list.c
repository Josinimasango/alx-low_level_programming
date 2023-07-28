#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to list_t to print.
 *
 * Return: The number of elements in the list_t list.
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (a);
}
