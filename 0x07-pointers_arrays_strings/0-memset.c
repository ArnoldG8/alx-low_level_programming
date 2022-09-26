#include "main.h"
/**
 * _memset - function for replace data
 *
 * @s: string to be overwritten
 * @b: byte to use for overwritting
 * @n: number of bytes
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
