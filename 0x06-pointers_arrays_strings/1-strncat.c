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
	int dlen = 0, i = 0;

	while (*(dest + i != '\0')
	{
		i++;
		dlen++;
	}

	i = 0;
	while (*(src + i) != *(src + n))
	{
		*(dest + dlen) = *(src + i);
		dlen++;
		i++;
	}
	*(dest + j) = '\0';

	return (dest);
}
