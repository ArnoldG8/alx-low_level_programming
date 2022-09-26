#include "main.h"
/**
 * _memset - prints buffer in hexa
 * @s: first input
 * @b: second input
 * @n: third input
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		*(s + j) = b;
		j++;
	}
	return (s);
}
