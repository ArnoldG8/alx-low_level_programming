#include "main.h"
/**
* _strspn - gets length of a prefix substring
* @s: string
* @accept: substring
*
* Return: returns number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (s[i] == accept[j])
			length++;
		if (accept[j] == '\0')
			return (length);
	}
	return (length);
}
