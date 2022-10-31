#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant value
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;

	}

	return (s);
}
