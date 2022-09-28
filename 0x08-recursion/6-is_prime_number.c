#include "main.h"

int pnum(int x, int y);
/**
 * is_prime_number - function for calculating prime number
 * @n: number to see if it is prime
 * Return: 1 if prime 0 if not prime
 */
int is_prime_number(int n)
{
	return (pnum(n, 1));
}

/**
 * pnum - checks if number is prime
 * @x: input one
 * @y: input two
 * Return: either 1 or 0
 */
int pnum(int x, int y)
{
	if (x == 1)
		return (0);
	if (x % y == 0 && y > 1)
		return (0);
	if ((x / y) < y)
		return (1);
	return (pnum(x, y + 1));
}
