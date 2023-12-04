#include "main.h"

/**
 * _put - print integer
 *
 * @n: input number
 * Return: integer
 */

int _put(int n)
{
	int i = 0;

	if (n < 0)
	{
	i += bputchar('-');
	n = -n;
	}

	if (n / 10 != 0)
	{
		i += _put(n / 10);
	}
	i += bputchar('0' + (n % 10));
	return (i);
}
