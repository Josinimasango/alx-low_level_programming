#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *stop = head;
	listint_t *go = head;

	if (!head)
		return (NULL);

	while (stop && go && go->next)
	{
		go = go->next->next;
		stop = stop->next;
		if (go == stop)
		{
			stop = head;
			while (stop != go)
			{
				stop = stop->next;
				go = go->next;
			}
			return (go);
		}
	}

	return (NULL);
}

