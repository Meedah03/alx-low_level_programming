#include "main.h"
#include <string.h>
/**
 * _strpbrk - search for set of bytes
 * @s: char
 * @accept: char
 * Return: i
 */
char *_strpbrk(char *s, char *accept)
{
	char *i = strpbrk(s, accept);

	return (i);
}
