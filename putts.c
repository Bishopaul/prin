#include "main.h"

/**
 * putts - print a string
 *
 * @d: string to be printed
 * Return: number of string
 */

int putts(char *d)
{
	int c = 0;

	if (d)
	{
		for (c = 0; d[c] != '\0'; c++)
		{
			bputchar(d[c]);
		}

	}
	return (c);
}
