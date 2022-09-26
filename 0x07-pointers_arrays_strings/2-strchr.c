#include "main.h"
/**
 * _strchr - function to return pointer first occurence
 * @s: string input
 * @c: character to compare
 * Return: s
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
