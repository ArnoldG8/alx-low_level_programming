#include "main.h"

/**
 * _strncat - concatenate two string with certain of
 * @src: string concatenating 
 * @dest: string being concatenated 
 * @n: number of value 
 *
 * Return: string 
 */

char *_strncat(char * dest, char *src, int n)
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
