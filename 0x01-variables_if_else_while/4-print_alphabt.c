#include <stdio.h>

/**
 * Description: main - except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Q;

	Q = 'a';

	while (Q <= 'z')
	{
		if (Q != 'e' && Q != 'q')
			putchar(Q);
		Q++;
	}
	putchar('\n');

	return (0);
}
