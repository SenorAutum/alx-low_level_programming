#include "main.h"
#include <stdio.h>
/**
 * void print_alphabet_x10(void);
 * print alphabet 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void);
{
	int i = 0;
	{
	for(i <= 10; i++)	{
		for(char leta = 'a'; leta <= 'z'; leta++)
			putchar(leta);}
	}

	putchar('\n');
}
