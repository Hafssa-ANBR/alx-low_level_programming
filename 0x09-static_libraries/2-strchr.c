#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: function parameter
 * @c: function parameter
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
