#include "main.h"

/**
 * Description:print_alphabet - prints the alphabet
 */

void print_alphabet(void)
{
	char lower;

	lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}

	_putchar('\n');
}
