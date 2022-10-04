#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  *_str_concat - combines two strings
 *  @s1: first string
 *  @s2: second string
 *
 *  Return: new combined string
 */
char *str_concat(char *s1, char *s2)
{
	int c = 0;
	int i;
	int n = 0;
	int j;
	char *s;

	if (s1 == NULL || s2 == NULL)
	{
		return ('\0');
	}
	while (*(s1 + c) != '\0')
		c++;
	while (*(s2 + n) != '\0')
		n++;

	s = malloc(n + c + 1);

	if (s == NULL)
		return ('\0');
	for (i = 0; i < c; i++)
		*(s + i) = *(s1 + i);

	for (j = 0; j < n; i++, j++)
		*(s + i) = s2[j];

	*(s + i) = 0;
	return (s);
}
