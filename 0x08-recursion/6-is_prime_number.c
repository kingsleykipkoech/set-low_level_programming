#include "main.h"

/**
 * _check_prime - recursively checks if n is divisible by any number
 * @n: the number to check
 * @div: the current divisor being tested
 *
 * Return: 1 if n is prime, 0 if not
 */
int _check_prime(int n, int div)
{
	if (div * div > n)
		return (1);

	if (n % div == 0)
		return (0);

	return (_check_prime(n, div + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_check_prime(n, 2));
}
