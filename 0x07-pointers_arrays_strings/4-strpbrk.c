#include "main.h"
/**
 * _strpbrk - function for returning a pointer with the first occurence
 * @s: first string to loop through
 * @accept: second string to match vairables
 * Return: s pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
