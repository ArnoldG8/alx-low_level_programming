#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - Concatenation function
 * main - main function
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
	for (i = 0; src[i] != 0; i++)
	{
		dest[count] = src[i];
		count += 1;
	}
	dest[count] = '\0';
	return (dest);
}

int main()
{
	_strcat(char *dest, char *src);
}
