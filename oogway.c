#include "main.h"
#include <unistd.h>

/**
 * oogway - writes the character to stdout
 * @c: The character
 *
 * Return: On success 1.
 * on error, -1 is returned, and error is set appropriately.
 */

int oogway(char c)
{
	return (write(1, &c, 1));
}
