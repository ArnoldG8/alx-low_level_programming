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
	int len = 0;
	int add = 0;

	while (*(dest + len))
	{
		len++;
	}
	while (*(src + add))
	{
		dest[len] = *(src + add);
		len++;
		add++;
	}
	return (dest);
}
