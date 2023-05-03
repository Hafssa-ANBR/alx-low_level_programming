#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list, function parameter
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	int dift;
	size_t lnt = 0;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		dift = *h - (*h)->next;
		if (dift > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			lnt++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lnt++;
			break;
		}
	}

	*h = NULL;

	return (lnt);
}

