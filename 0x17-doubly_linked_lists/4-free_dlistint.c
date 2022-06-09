#include "lists.h"

/**
 * free_dlistint -  frees a doubly linked list.
 * @head: pointer to the list to free.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = aux->next;
		free(aux);
	}
}
