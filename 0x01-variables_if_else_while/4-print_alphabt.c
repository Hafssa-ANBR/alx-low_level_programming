#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters, except for e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char let;

		for (let = 'a'; let <= 'z'; let++)
		{
		if (let != 'e' && let != 'q')
		putchar(let);
		}
		putchar('\n');

	return (0);
}
