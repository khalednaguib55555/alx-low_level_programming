#include "main.h"
/**
 *  _isupper - check for letter
 *
 * @c: is the character
 *
 * Return: 1 if c is uper, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
