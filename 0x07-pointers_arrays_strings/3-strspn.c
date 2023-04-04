#include "main.h"
/**
 * _strspn - Get the length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bt = 0;
	int id;

	while (*s)
	{
		for (id = 0; accept[id]; id++)
		{
			if (*s == accept[id])
			{
				bt++;
				break;
			}
			else if (accept[id + 1] == '\0')
				return (bt);
		}
		s++;
	}
	return (bt);
}
