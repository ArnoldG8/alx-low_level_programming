#include "main.h"
/**
 * _pow_recursion - function to calculate the power of an integer
 * @x: first input
 * @y: power of the first input
 * Return: first input multiplied by the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y <= 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
