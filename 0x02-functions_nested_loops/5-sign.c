#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n : character to be checked
 * return : 0, -1 or 1
 */
int print_sign(int n);
{
	if(n > 0)
	{
		printf("+");
		return (1);
	}

	else if(n == 0)
	{
		printf("0");
		return (0);
	}

	else
	{
		printf("-");
		return (-1);
	}
}