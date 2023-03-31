#include "main.h"
/**
 * leet - leet encoding a string into 1337
 * @str: function parametr,string to be encoded
 * Return: str
 **/

char *leet(char *str)
{
	int i;
	int j;

	char *alph = "aAeEoOtTlL";
	char *num = "4433007711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; alph[j] != '\0' ; j++)
		{
			if (str[i] == alph[j])
				str[i] = num[j];
		}
	}
	return (str);
}
