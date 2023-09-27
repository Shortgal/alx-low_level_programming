#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: pointer to the first node in the list
 * @idx: index where the node is added
 * @n: data to insertin the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
		new->next = tmp->next;
		tmp->next = new;
		return (new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
