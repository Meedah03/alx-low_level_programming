#include "main.h"
#include <string.h>
/**
 * _strchr - locates caracter string
 * @f: char
 * Return: f
 */
char *_strchr(char *s, char c)
{
	char *f;

	f = strchr(s, c);

	return (f); 
}
