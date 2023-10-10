#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: Character to print 
 *
 * Return: Always 1. (Success)
 * on error, return -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
