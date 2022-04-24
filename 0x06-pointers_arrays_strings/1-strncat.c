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
	int i, j, len = 0;

	for (j = 0; j != '\0'; j++)
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		j++;
	return (dest);
}
