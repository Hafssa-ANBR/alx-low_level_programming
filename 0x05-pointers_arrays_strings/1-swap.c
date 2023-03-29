#include "main.h"
/**
 * swap_int - swap two values
 * @x: value 1
 * @y: value 2
 * Return: 0
 */
void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
