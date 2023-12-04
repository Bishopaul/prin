#include "main.h"

/**
 * _printf - function that produces output according to a format
 *
 * @format: format specified
 *
 * Return: int - number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int a, c = 0, string_count, b = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			bputchar(format[a]);
		}
		else if (format[a] == '%' && format[a + 1] == 'c')
		{
			bputchar(va_arg(args, int));
			a++;
		}
		else if (format[a] == '%' && format[a + 1] == 's')
		{
			string_count = putts(va_arg(args, char *));
			b += (string_count - 1);
			a++;
		}
		else if (format[a] == '%' && format[a + 1] == '%')
		{
			bputchar('%');
			a++;
		}
		else if (format[a + 1] == 'd' || format[a + 1] == 'i')
		{
			c += _put(va_arg(args, int);
			a++;
			b += (c - 1);
		}
		else
		{
			bputchar('%');
		}
		b += 1;
	}
	va_end(args);
	return (b);
}
