#include "main.h"

/**
 * print_number - Prints an integer using the oogway function onlu.
 * @n: The integer to be printed.
 */
int print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		oogway('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);
	oogway((num % 10) + '0');
	return (0);
}
