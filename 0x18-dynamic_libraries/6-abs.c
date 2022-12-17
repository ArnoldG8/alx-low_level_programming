#include "main.h"

/**
 * _abs - prints positive vals
 * @r: int
 * description - return positive val
 * Return: int
 */
int _abs(int r)
{
	if (r > 0)
	{
		r = +r;
	}
	else
	{
		r = -r;
	}

	return (r);
}
