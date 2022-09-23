#include "main.h"
/**
 * _strcmp - compare function
 * @s1: string to be compared to s2
 * @s2: string to be compared to s1
 * Return: return ans
 */
int _strcmp(char *s1, char *s2)
{
	int i, ans;
	
	i= 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
		i++;

	ans = (s1[i] - s2[i]);

	return (ans);
}
