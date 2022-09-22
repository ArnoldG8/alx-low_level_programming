#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strcat - Concatenation function
 * main - main function
 * @dest: first input
 * @src: second input
 * Return: string
 */
char *_strcat(char *dest, const char *src)
{
	int count;
	int n;

	while (*(dest + count))
	{
		count++;
	}
	while (*(src + n))
	{
		dest[count] = *(src + n);
		count++;
		n++;
	}
	return (dest);
}
