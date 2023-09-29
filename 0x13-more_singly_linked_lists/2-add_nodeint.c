#include "lists.h"

/**
 * add_nodeint - new noe
 * @head: first node
 * @n: insert data n
 *
 * Return: node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}