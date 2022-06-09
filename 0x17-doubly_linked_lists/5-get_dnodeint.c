#include "lists.h"

/**
 * *get_dnodeint_at_index -  returns the nth node of a doubly linked list.
 * @head: pointer to the list
 * @index: index of the node, starting from 0.
 * Return: the nth node of the doubly linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		i++;
		head = head->next;
	}
	return (NULL);
}
