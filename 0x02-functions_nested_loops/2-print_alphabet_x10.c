#include "main.h"

/**
 * print_alphabet_x10 - prints the alphhabet 10 times in lowercase
 *
 * followed bay a new lie
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
		_putchar(ch);
		ch++;
		}
		_putchar('\n');
		i++;
	}
}
