#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index.
 * of a dlistint_t linked list.
 * @head: pointer to a pointer to the head of a list
 * @index: is the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *list;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			temp->next->prev = NULL;
			*head = temp->next;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	else
	{
		while (i < index - 1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL || temp->next == NULL)
			return (-1);
		if (temp->next->next != NULL)
			temp->next->next->prev = temp;
		list = temp->next->next;
		free(temp->next);
		temp->next = list;
	}
	return (1);
}
