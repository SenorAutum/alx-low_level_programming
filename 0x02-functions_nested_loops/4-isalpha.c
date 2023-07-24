#include "main.h"

/**
 * _isalpha - Checks if character is alphabetic
 * @c : Character to be checked
 * return 1 if letter, lowercase or uppercase or return 0 otherwise
 */
int _isalpha(int c);
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
