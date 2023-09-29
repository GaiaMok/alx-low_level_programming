#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @c: first character occurence
 * @s: string to search
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s ==  c)
		return (s);
	return (0);
}

