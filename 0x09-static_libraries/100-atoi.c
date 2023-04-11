#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use, function parameter
 *
 * Return: integer, res
 */

int _atoi(char *s)
{
	int sig = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sig *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sig;
	return (res);
}

