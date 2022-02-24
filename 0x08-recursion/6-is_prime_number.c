#include "main.h"

/**
 * prime_number - auxiliar function for is_prime_number
 * @n: number to check
 * @divisor: divisor
 * Return: prime number or not */

int prime_number(int n, int divisor)
{
	if (n == divisor)
		return (1);
	else if (n % divisor == 0)
		return (0);
	return (prime_number(n, divisor + 1));
}

/**
 * is_prime_number - check if n is a prime number, it use prime_number function
 * @n: number to check
 * Return: 1 if it is prime, 0 if it is not
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 0)
		return (0);
	else if (n == 1)
		return (0);

	else
	return (prime_number(n, divisor));
}
