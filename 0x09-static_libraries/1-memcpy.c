#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored function parameter
 *@src: memory where is copied function parameter
 *@n: number of bytes,function parameter
 *
 *Return: copied memory with n byted changed, dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

