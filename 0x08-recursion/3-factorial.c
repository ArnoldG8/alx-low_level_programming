#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: number that will return a factorial of
 * Return: n in factorial form
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
