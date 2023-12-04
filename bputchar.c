#include "main.h"

/**
 * bputchar - print char
 *
 * @c: char to be inputted
 * Return: 1
 */

int bputchar(char c)
{
	return (write(1, &c, 1));
}
