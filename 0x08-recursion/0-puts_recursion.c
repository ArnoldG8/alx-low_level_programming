#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints value of s followed by a new line
 * @s: input string
 * Return: nothing function void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
