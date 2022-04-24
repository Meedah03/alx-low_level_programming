#include "main.h"

/**
 * _strncat - concatenates s1 and s2
 * @dest: string
 * @src: string
 * @n: int
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\60'; i++)
		dest[dest_len + i] = '\0';
	return (dest);
}
