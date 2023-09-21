#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_note - adds a new node at the beginning of a list_t list.
 * @head: duplicates pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the elements, or NULL, if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
