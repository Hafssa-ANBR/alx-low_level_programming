#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list, function parameter
 * @index: index of the node to return , function parameter
 *
 * Return: pointer to the node we are looking for, if empty return  NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp)
		return (tmp);
	return (NULL);
}

