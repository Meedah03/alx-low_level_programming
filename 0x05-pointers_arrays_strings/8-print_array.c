#include "main.h"

/**
 * print_array - prints array
 * @n: no of elements
 * @a: address
 * return 0
 */

void print_array(int *a, int n)
{
	int a[n];
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", i);
}
