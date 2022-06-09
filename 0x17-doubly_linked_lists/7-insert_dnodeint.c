#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the list
 * @idx: index of the list where node will be added
 * @n: data to be added
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *aux, *temp = *h;

	aux = malloc(sizeof(dlistint_t));
	if (!aux || !h)
		return (NULL);

	aux->n = n;
	aux->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
			aux->next = temp->next;
			aux->prev = temp;
			temp->next->prev = aux;
			temp->next = aux;
			return (aux);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
