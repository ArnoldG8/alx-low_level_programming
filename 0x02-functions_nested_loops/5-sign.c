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
	if (c > 0)
	{
		_putchar(43);
		_putchar(',');
		_putchar(' ');
		_putchar(1 + '0');
		_putchar('\n');
		return (1);
	}
	else if (c == 0)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		_putchar(0 + '0');
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar(45);
		_putchar(',');
		_putchar(' ');
		_putchar(-1 + '0);
		_putchar('\n');
		return (-1);
	}
	_putchar('\n');
}
