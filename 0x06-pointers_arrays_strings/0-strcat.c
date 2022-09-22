#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenation function
 * @dest: first input
 * @src: second input
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int count = 0;

	while (dest != '\0')
	{
		count++;
	}
	while (src != '\0')
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}
