#include "main.h"

/**
 * Description: print_last_digit - Last digit
 * @r:last didgit
 * Return: Last digit.
 */

int print_last_digit(int r)
{
	int n = r % 10;

	if (n < 0)
		n = n * -1;

	_putchar(n + '0');
	return (n);

}
