#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string,function parameter
 * Return: 0
 **/

void print_rev(char *s)
{
	int i;
	int len;

	for (i = 0 ; s[i] != '\0' ; i++)
		len++;
	for (i = len ; i >= 0 ; i++)
		_putchar(s[i]);
	_putchar('\n');
}
