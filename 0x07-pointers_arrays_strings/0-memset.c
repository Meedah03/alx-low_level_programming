#include "main.h"

/**
 * _memset - function that reset memory
 *
 * @s: memory area to return
 * @b: constant bytes
 * @n: size of bytes
 * Return: Nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
	}
	return (s);
}
