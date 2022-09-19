#include <stdio.h>
#include "main.h"
/**
 * _strlen - function to find the length of a string
 * @s: input
 * Return: Integer return
 */
int _strlen(char *s)
{
	int value = 0;

	while (*s != '\0')
	{
		s++;
		value++;
	}

	return (value);
}
