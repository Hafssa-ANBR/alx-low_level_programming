#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number, function parameter
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d_val = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		d_val = 2 * d_val + (b[i] - '0');
	}

	return (d_val);
}

