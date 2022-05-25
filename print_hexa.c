#include "main.h"
/**
 * print_hexa - outputs hexadecimal
 * @num: unsigned int arg
 * Return: counter
 */

int print_hexa(unsigned int num)
{
	int c, a = 0;

	while (num > 0)
	{
		c = num % 16;
		num /= 16;

		a = print_hexa(num);
		switch (c)
		{
			case 10:
				oogway('a');
				break;
			case 11:
				oogway('b');
				break;
			case 12:
				oogway('c');
				break;
			case 13:
				oogway('d');
				break;
			case 14:
				oogway('e');
				break;
			case 15:
				oogway('f');
				break;
			default:
				oogway(c + '0');
		}
		return (++a);
	}
	return (++a);
}
