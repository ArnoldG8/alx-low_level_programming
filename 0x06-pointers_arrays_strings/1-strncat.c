#include "main.h"

/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 *
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, i = 0;

	while (*(dest + i))
	{
		i++;
	}

	while (x < n && *(src + x))
	{
		*(dest + i) = *(src + x);
		x++;
		i++;
	}
	if (x < n)
	{
		*(dest + i) = *(src + x);
	}
	return (dest);
}
