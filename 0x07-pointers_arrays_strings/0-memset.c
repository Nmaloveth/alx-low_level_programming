#include "main.h"
/**
 * _memset - function fill a block of memory with a specific value
 * @s: starting adress of memory to be filled
 * @b: the desired value
 * @n: number of bytes with new value for a bytes
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
