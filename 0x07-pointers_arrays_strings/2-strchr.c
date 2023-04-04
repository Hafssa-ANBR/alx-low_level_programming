#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string when to be searched
 * @c: the character to be located
 * Return: f c found - pointer to the first occurrence of the character c
 * If c not exist - NULL
 **/
char *_strchr(char *s, char c)
{
	int id;

	for (id = 0; s[id] >= '\0'; id++)
	{
		if (s[id] == c)
			return (s + id);
	}
	return ('\0');
}
