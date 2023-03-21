#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
	putchar(let);

	putchar('\n');

	return (0);
}
