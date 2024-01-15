#include "main.h"
/**
 * _islower - check char is lowercase
 * @c: is the char to be checked
 * Return: 1 = char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
