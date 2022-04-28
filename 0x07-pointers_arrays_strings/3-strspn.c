#include "main.h"
#include <string.h>
/**
 * _strspn - len of prefix substring
 * @s: char
 * @accept: char
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strspn(s, accept);

	return (i);
}
