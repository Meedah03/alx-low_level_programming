#include "main.h"

/**
 * _memset - function that reset memory
 *
 * @s: memory area to return
 * @b: conss
 * @n: size of bytes
 * Return: Nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
