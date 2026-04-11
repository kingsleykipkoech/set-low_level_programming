#include "main.h"

/**
 * _sqrt_helper - recursively searches for the square root
 * @n: the number to find the square root of
 * @guess: the current guess being tested
 *
 * Return: the natural square root, or -1 if none exists
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: natural square root of n, or -1 if n has no natural
 *         square root or n is negative
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}
