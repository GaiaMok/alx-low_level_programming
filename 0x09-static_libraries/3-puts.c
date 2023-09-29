#include "main.h"

/**
 * _puts - prints the string
 * _putchar - prints the character
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
