#include "main.h"
/**
 * _strlen - returns length of a string
 * @s : to be checked
 * Return: returns the value of the string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
