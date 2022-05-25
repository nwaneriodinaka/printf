#include "main.h"

/**
 * print_binary - converts binary to hexadecimal
 * @num: variable arg
 * Return: returns counter
 */

int print_binary(unsigned int num)
{
	int c, a = 0;

	while (num > 0)
	{
		c = num % 2;
		num /= 2;
		a = print_int(num);
		oogway(c + '0');
		return (++a);
	}
	return (++a);
}
