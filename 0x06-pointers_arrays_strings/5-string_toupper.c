#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: function parameter
 * @i: int counter
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		       str[i] = str[i] - 32;
	}
	return (str);
}
