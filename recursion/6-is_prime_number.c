#include "main.h"
/**
 * is_prime_helper - a function that return 1 if input is a prime number
 * @n: number to check
 * @i: variable helper.
 * Return: 1 if prime number otherwise 0.
 */
int is_prime_helper(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);

	if (i == 2)
		return (1);

	if (n % i == 0)
		return (0);

	else
		return (is_prime_helper(n, i - 1));
}
/**
 * is_prime_number - a function thats checks prime numbers
 * @n: number to be checked
 * Return: 1 if it is a prime number otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_helper(n, n - 1));

}
