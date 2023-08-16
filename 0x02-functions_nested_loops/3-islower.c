#include "main.h"

/**
 * _islower - is a function that checks for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
