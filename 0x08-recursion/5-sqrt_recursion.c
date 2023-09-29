#include "main.h"

/**
 * _sqrt_a - returns the square root
 * @n: number
 * @a: variable 1
 * @b: variable 2
 * Return: natural square root of a number
 */

int _sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - returns the square root
 * @n: number
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_a(n, 0));
}
