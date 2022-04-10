#include <stdio.h>

/**
 * Description: main - reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char J;

	J = 'z';

	while (J <= 'z')
	{
		if (J >= 'a')
			putchar(J);
		J--;
	}
	putchar('\n');

	return (0);
}
