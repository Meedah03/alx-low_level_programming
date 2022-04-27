#include "main.h"
#include <stdio.h>
/**
 * string_toupper - to upperc6ase
 * Return: Uppercase
 */
char *string_toupper(char *)
{
	int i;
	char s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s[i]);
}
