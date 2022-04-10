#include <stdio.h>

/**
 * Description: main - print lower and upper
 * Return: Always 0 (Success)
 */

int main(void)
{
	char L;
	char M;

	L = 'a';
	M = 'A';
	while (L <= 'z')
	{
		putchar(L);
		L++;
	}
	while (M <= 'Z')
	{
		putchar(M);
		M++;
	}
		putchar('\n');

	return (0);
}
