#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * print_alphabet() - Prints alphabet in lower case followed by new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	putchar('\n');
}

