#include "main.h"

/**
 * _islower - check lower case alphabets
 * @c: parameter being checked
 * Return: 0 or 1 on success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
