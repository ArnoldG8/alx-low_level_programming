#include "main.h"
#include <stdio.h>

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
	int j = count - 1;

	while (dest != '\0')
	{
		count++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		count++;
	}
	dest[j] = '\0';
	return (dest);
}

int main(void)
{
	_strcat(char *dest, char *src);
}
