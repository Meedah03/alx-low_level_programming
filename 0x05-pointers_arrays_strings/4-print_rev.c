#include "main.h"

/**
 * print_rev - rint string in reverse
 * @s: sring
 *
 * Return: string in reverse
 */

void print_rev(char *s)
void _putchar (char)
{
	int i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}