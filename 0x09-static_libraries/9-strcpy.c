#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest:fumction parameter
 * @src: function parameter
 * Return: string, dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + j) != '\0')
		i++;
	for (j = 0; j < i ; j++)
		dest[j] = src[j];
	dest[i] = '\0';
	return (dest);
}

