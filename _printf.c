#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0, a = 0;

	va_start(ap, format);

	while (*(format + count))
	{
		if(format[count] == '%')
		{
			count += 1;
			switch (format[count])
			{
				case 's':
				{
					a += print_string(va_arg(ap, char *));
					break;
				}
				case 'c':
				{
					a += print_char(va_arg(ap, int));
					break;
				}
				case 'd':
				{
					a += print_sint(va_arg(ap, int));
					break;
				}
				case '%':
				{
					oogway('%');
					++a;
					break;
				}
				case 'x':
				{
					a += print_hexa(va_arg(ap, int));
					break;
				}
				case 'i':
				{
					a += print_int(va_arg(ap, int));
					break;
				}
			}
		}
		else if (format[count] == '\\')
		{
			count += 1;
			switch (format[count])
			{
				case 'n':
				{
					oogway('\n');
					++a;
					break;

				}
				case 't':
				{
					oogway('\t');
					++a;
					break;
				}
				case '0':
				{
					oogway('\0');
					++a;
					break;
				}
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
