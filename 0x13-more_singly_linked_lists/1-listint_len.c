#include "lists.h"

/**
 * listint_len - number of elements in a linked lists
 * @head: head pointer
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *head)
{
	size_t num = 0;

	while (head)
	{
		num++;
		head = head->next;
	}

	return (num);
}
