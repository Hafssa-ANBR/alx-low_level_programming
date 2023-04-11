#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: address of memory to be filled,parameter function
 * @b: desired value, parameter function
 * @n: number of bytes to be changed in this function
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

