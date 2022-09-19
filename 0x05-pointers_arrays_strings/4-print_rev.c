#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints the reverse of a string
 *
 * @s:  the input string
 * Return: reverse string
 */
void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	for (i--; i >= 0; i--)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
