#define "main.h"

/**
 * _memset - fills memory with a costant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = o; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

