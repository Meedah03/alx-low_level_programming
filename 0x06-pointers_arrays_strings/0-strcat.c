#include "main.h"

/**
 * _strcat - concatenates s1 and s2
 * @dest: S1
 * @src: S2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, length = 0;

	for (i = 0; dest[i] != '\0'; i++)
		length++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
