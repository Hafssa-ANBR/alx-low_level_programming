#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number, function parameter
 * @m: second number, function parameter
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int excl = n ^ m;
	int i, cnt = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = excl >> i;
		if (curr & 1)
			cnt++;
	}

	return (cnt);
}

