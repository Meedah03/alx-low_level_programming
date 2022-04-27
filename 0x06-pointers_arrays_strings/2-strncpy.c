#include "main.h"
#include <string.h>
/**
 * _strncpy - copies string
 * @dest: dest
 * @src: src
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
