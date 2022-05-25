#include "main.h"
/**
 * print_HEXA - outputs hexadecimal with the alphabetic part in caps
 * @num: unsigned int arg
 * Return: length
 */

int print_HEXA(unsigned int num)
{
	int c, a = 0;

	while (num > 0)
	{
		c = num % 16;
		num /= 16;

		a = print_HEXA(num);
		switch (c)
		{
			case 10:
				oogway('A');
				break;
			case 11:
				oogway('B');
				break;
			case 12:
				oogway('C');
				break;
			case 13:
				oogway('D');
				break;
			case 14:
				oogway('E');
				break;
			case 15:
				oogway('F');
				break;
			default:
				oogway(c + '0');
		}
	return (++a);
	}
return (++a);
}
