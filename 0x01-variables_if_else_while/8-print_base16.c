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

	while (U < 10)
	{
		putchar(U);
		U++;
	}

	while (L <= 'f')
	{
		putchar(L);
		L++;
	}

	putchar('\n');

	return (0);
}

