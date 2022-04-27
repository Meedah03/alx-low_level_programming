#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse arrays
 * @a: var
 * @n: int
 */
void reverse_array(int *a, int n)
{
	n = 0;
	while (a[n] != 0)
	{
		n++;
	}
	while (n > 0)
	{
		n--;
	}
}
