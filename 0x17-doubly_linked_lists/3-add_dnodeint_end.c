#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a doubly linked list.
 * @head: double pointer to the list
 * @n: data to be added to the list_t list
 * Return: the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new;
	new->prev = aux;

	return (new);
}
