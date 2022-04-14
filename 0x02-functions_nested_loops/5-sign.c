#include "main.h"

/**
 * Description: print_sign - print_sign
 *@n: character
 * Return: 0 if 0, 1 if +, -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
