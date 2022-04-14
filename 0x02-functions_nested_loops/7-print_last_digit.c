#include "main.h"

/**
 * Description: print_last_digit - Last digit
 * @r:last didgit
 * Return: Last digit.
 */

int print_last_digit(int r)
{

		_putchar(r % 10 + '0');
		return (r % 10);
}
