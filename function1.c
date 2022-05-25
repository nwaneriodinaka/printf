#include "main.h"

/**
 * count - counts the number of intergers passed into it.
 * @n: The integer to be counted.
 * Return: length of integer
 */

int count(int n)
{
	int i = 1;

	if (n < 0)
	{
		i++;
		n = -n;
	}
	while ((n / 10) > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

/**
* print_number - Prints an integer using the oogway function only.
* @n: The integer to be printed.
* This function returns the length of the numbers passed into it.
* Return: length of integer
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
	{
		print_number(num / 10);
	}

	oogway((num % 10) + '0');

	return (count(n));
}

