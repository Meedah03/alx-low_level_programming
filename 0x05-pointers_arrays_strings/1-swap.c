#include "main.h"

/**
 * swap_int - swap the integers of a and b
 * @a: integer 1
 * @b: integer 2
 *
 */

void swap_int(int *a, int *b)
{
	int p = *a;

		*a = *b;
		*b = p;
}
