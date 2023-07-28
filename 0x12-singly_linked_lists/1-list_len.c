#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in the linked list.
 * @h: A pointer to the list_t list.
 *
 * Return: number of elements in.
 */
size_t list_len(const list_t *h)
{
size_t s = 0;
while (h)
{
s++;
h = h->next;
}
return (s);
}
