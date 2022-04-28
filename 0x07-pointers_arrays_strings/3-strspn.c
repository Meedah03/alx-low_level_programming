#include "main.h"
#include <string.h>
/**
 * _strspn - len of prefix substring
 * @i: int
 * return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = strspn (s, accept);

	return (i);
}
