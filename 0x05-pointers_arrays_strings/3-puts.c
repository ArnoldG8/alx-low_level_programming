#include <stdio.h>
#include "main.h"
/**
 * _puts - puts a new line at the end of every char
 * @s: input char
 * Return: Always 0 (Success)
 */
void _puts(char *s)
{
	int i = 0;

	while(*(str + i) != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
