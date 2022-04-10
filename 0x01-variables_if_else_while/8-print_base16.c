#include <stdio.h>

/**
 * Description: main - prints all the numbers of base 16
 * Return: Always 0
 */

int main(void)
{
	int U;
	char L;

	U = '0';
	L = 'a';

	for (U = 0; U < 10; U++)
		putchar((U % 10) + '0');

	for (L = 'a'; L <= 'f'; L++)
		putchar(L);

	putchar('\n');

	return (0);
}

