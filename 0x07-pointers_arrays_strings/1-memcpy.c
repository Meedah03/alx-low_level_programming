#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: character
 * @src: source
 * @n: int
 * Return nothing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest[n] = *src[n];
	}
	return (dest);
}
