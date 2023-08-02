#include "lists.h"

/**
 * pop_listint - removes node head
 * @head: head h
 *
 * Return: data in element
 * empty list is 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
