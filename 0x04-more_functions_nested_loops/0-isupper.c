#include "main.h"
#include <stdio.h>
/**
 * _isupper - Checks for uppercase letter
 * @c : Character to be checked
 * Return:1(uppercase) or 0(otherwise)
 */
int _isupper(int c)
{
	if (c >= '65' && c <= '90')
		return (1);

	else
		return (0);
}
