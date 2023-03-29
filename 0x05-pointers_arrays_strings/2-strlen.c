#include "main.h"
/**
 *_strlen - returns the string length
 * @s: string whose length to be printed
 * Return: length of the string
 **/

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		len++;
	}
	return (len);
}
