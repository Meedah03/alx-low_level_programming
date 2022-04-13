#include "main.h"

/**
 * Description: print_alphabet_x10 - print alphabet x10
 */

void print_alphabet_x10(void)
{
	int i;
	char lower;

	i = 0;
	lower = 'a';

	while (i <= 9)
	{

		while (lower <= 'z')
		{
			_putchar(lower);
			lower++;
		}
		_putchar('\n');

		i++;
	}
}
