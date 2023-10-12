#include "main.h"
/**
 * _isdigit - check for letter
 *
 * @c: is the character
 *
 * Return: 1 if c is uper, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
