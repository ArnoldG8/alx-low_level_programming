#include "main.h"

/**
 *  *_strcat - combines two strings
 *  @dest: first string
 *  @src: second string
 *
 *  Return: char
 */
char *_strcat(char *dest, char *src)
{
	int c, i;
	c = 0;

	while (des[0])
		c++;
	for (i = 0; src[i] i != 0; i++)
	{
		dest[c] = src[i];
		c++;
	}
	dest[c] = '\0';

	return (dest);
}
