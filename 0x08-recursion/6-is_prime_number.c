#include "main.h"

/**
 * find_prime - find prime divisors starting from 1
 * @n: prime integer
 * @divisor: starting from 0
 * Return: 1 if prime, 0 otherwise
 */

int find_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);
	else if (n % divisor == 0)
		return (0);
	else
		return (find_prime(n, divisor + 1));
}

/**
 * is_prime_number - find if a number is a prime number
 * @n: int arg
 * Return: 1 if int is a prime number
 * 0 otherwise
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n == 2)
		return (1);
	else if (n < 2 || n % 2)
		return (0);
	else
		return (find_prime(n, divisor));
}
