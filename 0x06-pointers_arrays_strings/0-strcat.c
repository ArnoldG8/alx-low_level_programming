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
	strcat(*dest, *src);

	return (*dest);
}

int main()
{
	_strcat(char *dest, char *src);
}
