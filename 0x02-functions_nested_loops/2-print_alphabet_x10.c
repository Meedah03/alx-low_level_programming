#include "main.h"

/**
 * Description: print_alphabet_x10 - print alphabet x10
 */

void print_alphabet_x10(void)
{
	int i;
	char lower;


	for (i = 0; i <= 9; i++)
	{

		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
