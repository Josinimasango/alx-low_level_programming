#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list_t list.
 * @h: A double pointer to the list_t list.
 * @str: A new string to add to the node.
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **h, const char *str)
{
list_t *new;
unsigned int len = 0;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = (*h);
(*h) = new;
return (*h);
}
