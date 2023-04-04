#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 * Return: if a set is matched - a pointer to the byte in s
 * (else) if no set is matched - NULL
 **/
char *_strpbrk(char *s, char *accept)
{
	int id;

	while (*s)
	{
		for (id = 0; accept[id]; id++)
		{
			if (*s == accept[id])
				return (s);
		}
		s++;
	}
	return ('\0');
}
