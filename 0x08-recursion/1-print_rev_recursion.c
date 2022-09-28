#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: input string to be reversed
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
