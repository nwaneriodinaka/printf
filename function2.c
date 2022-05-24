#include "main.h"

/**
 * print_string - recieves a pointer to a string and print it out
 * @str: a variabe containing pointer to a string
 * Return: returns number of char
 */

int print_string(char *str)
{
	int count = 0;

	while (*(str + count))
	{
		oogway(str[count]);
		count++;
	}
	return (count);
}

/**
 * print_char - recieves a character as arg and prints it out
 * @ctr: a char variable
 * Return: returns 1
 */

int print_char(char ctr)
{
	oogway(ctr);
	return (1);
}
