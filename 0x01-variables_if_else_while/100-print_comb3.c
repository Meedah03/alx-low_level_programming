#include <stdio.h>

/**
 * Description: main - entry
 * Return: Always 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 9 && b == 9)

				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);

}
