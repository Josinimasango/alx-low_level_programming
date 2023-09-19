/*
 * File: 5-get_dnodeint.c
 * Auth: Nelisiwe Masango
 */

#include "lists.h"

/**
 * get_dnodeint_at_index - locates a node
 * @head: the head pointer
 * @index: node to be located
 *
 * Return: If there is no node return NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
