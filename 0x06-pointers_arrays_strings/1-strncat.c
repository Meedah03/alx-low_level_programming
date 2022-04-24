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
	int j = 0;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[j] != '\0')
	{
		dest[n] = src[j];
		n++;
		j++;
	}
	return (*dest);
}
