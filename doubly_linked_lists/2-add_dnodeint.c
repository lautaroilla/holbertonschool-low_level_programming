#include "lists.h"
/**
 * add_dnodeint - Function.
 * @head: Pointer element.
 * @n: Element of type int.
 * Return: dlistint_t.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head != NULL)
		{
			(*head)->prev = new_node;
		}
		*head = new_node;
	}
	return (*head);
}
