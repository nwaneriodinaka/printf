#include "main.h"
/**
 * _printf - output argument
 * @format: format of output
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0, a = 0;

	va_start(ap, format);
	while (*(format + count))
	{
		if (format[count] == '%')
		{
			count += 1;
			switch (format[count])
			{
				case 's':
					a += print_string(va_arg(ap, char *));
					break;
				case 'c':
					a += print_char(va_arg(ap, int));
					break;
				case 'i':
				case 'd':
					a += print_number(va_arg(ap, int));
					break;
				case 'X':
					a += print_HEXA(va_arg(ap, int));
					break;
				case 'x':
					a += print_hexa(va_arg(ap, int));
					break;
				case 'b':
					a += print_binary(va_arg(ap, int));
					break;
				case '%':
					oogway('%');
					++a;
					break;
			}
		}
		else
		{
			oogway(format[count]);
			++a;
		}
		count++;
	}
	va_end(ap);
	return (a);
}
