#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * @head: a pointer to the head of the listint_t to check.
 *
 * Return: The number of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
        const listint_t *tmp, *ptr;
        size_t nodes = 1;

        if (head == NULL || head->next == NULL)
                return (0);

        tmp = head->next;
        ptr = (head->next)->next;

        while (ptr)
        {
                if (tmp == ptr)
                {
                        tmp = head;
                        while (tmp != ptr)
                        {
                                nodes++;
                                tmp = tmp->next;
                                ptr = ptr->next;
                        }
                        tmp = tmp->next;

                        while (tmp != ptr)
                        {
                                nodes++;
                                tmp = tmp->next;
                        }
                        return (nodes);
			}

                tmp = tmp->next;
                ptr = (ptr->next)->next;
        }
        return (0);
}
/**
* print_listint_safe - prints a listint_t list safely.
* @head: a pointer to the headof the listint_t list.
*
* Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
        size_t nodes, index = 0;

        nodes = looped_listint_len(head);

        if (nodes == 0)
        {
                for (; head != NULL; nodes++)
                {
                        printf("[%p]%d\n", (void *)head, head->n);
                        head = head->next;
                }
        }

        else
        {
                for (index = 0; index < nodes; index++)
                {
                        printf("[%p]%d\n", (void *)head, head->n);
                        head = head->next;
                }

                printf("->[%p]%d\n", (void *)head, head->n);
        }
                return (nodes);
}
