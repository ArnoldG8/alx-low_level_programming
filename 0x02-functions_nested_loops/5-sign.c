#include "main.h"
/**
 * print_sign - sign function
 *
 * @c: input
 *
 * Return: 1 greater than 0 and 0 is zerio and -1 is less than 0.
 */
int print_sign(int c)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
