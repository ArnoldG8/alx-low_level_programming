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

	while (*(dest + i))
	{
		i++;
	}

	while (dlen < n && *(src + dlen))
	{
		*(dest + i) = *(src + dlen);
		dlen++;
		i++;
	}
	if (dlen < n)
		*(dest + i) = *(src + j);
	return (dest);
}
