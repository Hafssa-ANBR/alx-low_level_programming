#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list , function parameter
 * @str: string to put in the new node , function parameter
 *
 * Return: address of the new element, or NULL if it empty
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int lent = 0;
	list_t *new , *temp = *head;
	
	while (str[lent])
		lent++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = lent;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

