#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: strings 1
 * @s2: strings 2
 * Return: 0
 **/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
		}
		else
			return (0);
	}
	return (0);
}
