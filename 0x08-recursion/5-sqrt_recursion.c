#include "main.h"

int _sqrt(int x, int y);
/**
 * _sqrt_recursion - function for returning natural square root
 * @n: first input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - recursive square root
 * @x: first input
 * @y: second input
 * Return: a number
 */
int _sqrt(int x, int y)
{
	int s = y * y;

	if (s > x)
		return (-1);
	if (s == x)
		return (y);
	return (_sqrt(x, y + 1));
}
