#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (b = '1'; a <= '10'; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
