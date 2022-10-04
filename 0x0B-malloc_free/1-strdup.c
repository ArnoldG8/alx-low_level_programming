#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a duplicate of the string given
 * @str: the given string to make a duplicate of
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *s;
	int j;
	int i = 0;

	if (str == NULL)
	{
		return ('\0');
	}
	while (*(str + i) != '\0')
	{
		i++;
	}

	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
		return ('\0');
	}
	for (j = 0; j < i; j++)
	{
		*(s + j) = *(str + j);
	}
	return (s);
}
