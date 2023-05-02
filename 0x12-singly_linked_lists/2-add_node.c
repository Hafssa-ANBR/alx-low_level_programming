#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list , function parameter
 * @str: new string to add in the node , function parameter
 *
 * Return: the address of the new element, or NULL if it empty
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int lent = 0;
	list_t *new;

	while (str[lent])
		lent++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = lent;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

