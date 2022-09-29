#include "main.h"

/**
 * is_prime_number - executes prime_checker
 * @n: input to check
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

