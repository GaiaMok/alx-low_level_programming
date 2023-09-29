#include "main.h"

/**
 * _prime_a - function that returns 1 if input is a prime no
 * @a: input number
 * is_prime_number - picks up the prime number
 * @b: divisor
 * Return: 1 or 0
 */

int _prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (_prime_a(a, b + 1));
}
/**
 * is_prime_number - detects prime numbers
 * @n: input number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (_prime_a(n, 2));
}

