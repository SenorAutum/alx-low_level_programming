#include "main.h"
/**
 * main - main block
 * _islower -  This function takes a character as input and returns 1 (true) if the character
 * is a lowercase letter (a-z) and 0 (false) otherwise.
 * @c : character to check for lower case
 * Return (0) or (1)
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
