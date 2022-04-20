#include "main.h"
#include <stdio.h>

/**
 * main - reset to 98
 *
 * Return: 0
 */

void reset_to_98(int *n)
{
	int n = 402;

	_putchar(n);
	_putchar('\n');

	reset_to_98(&n);
	_putchar(n);
	_putchar('\n');

	return (0);
}
