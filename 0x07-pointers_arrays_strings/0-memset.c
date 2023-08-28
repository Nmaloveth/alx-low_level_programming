#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 * @n: bytes of the memory area pointed to by @s
 * @s: with the constant byte @b
 * @b: memory area pointer
 * Return: a pointer to the memory area @s
 */


char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}

	return (s);
}
