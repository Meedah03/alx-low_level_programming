#include "main.h"

/**
 * Description: print_last_digit - Last digit
 * @r:last didgit
 * Return: Last digit.
 */

int print_last_digit(int r)
{

	if r > 0

		_putchar(r % 10 + '0');
		return (r % 10);

	else
		_putchar(-r % 10 + '0');
       		return (-r % 10)	
}
