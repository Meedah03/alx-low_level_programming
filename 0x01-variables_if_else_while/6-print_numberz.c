#include <stdio.h>

/**
 * Description: main - use putchar to print numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int U;

	U = '0';

	while (U <= '9')
	{
		putchar(U);
		U++;
	}
	putchar('\n');

	return (0);
}
