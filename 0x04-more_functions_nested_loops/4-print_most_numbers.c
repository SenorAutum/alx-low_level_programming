#include "main.h"
/**
 * print_most_numbers - print numbers 0 to 9 w/out 2 & 4
 * Return :0
 */
void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
		n++;
	}
	_putchar('\n');
}
