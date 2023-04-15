#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted,function parameter
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, num, n, len, flt, digit;

	i = 0;
	num = 0;
	n = 0;
	len = 0;
	flt = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && flt == 0)
	{
		if (s[i] == '-')
			++num;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (num % 2)
				digit = -digit;
			n = n * 10 + digit;
			flt = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			flt = 0;
		}
		i++;
	}

	if (flt == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments,function parameter
 * @argv: array of arguments,function parameter
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}

