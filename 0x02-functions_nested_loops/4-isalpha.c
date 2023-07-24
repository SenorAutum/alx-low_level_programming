#include "main.h"

/**
 * _isalpha - Checks if character is alphabetic
 * @c : Character to be checked
 * return : 0 0r 1
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
