#include "main.h"

/**
 * _memset - Entery point
 * @s: pointed destination
 * @b: costant byte
 * @n: bytes
 *
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		si[i] = b;
	return (s);
}

