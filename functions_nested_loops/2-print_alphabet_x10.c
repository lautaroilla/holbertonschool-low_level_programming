#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet.
 * Return: 10 times.
 */
void print_alphabet_x10(void)
{
	char alphabet;
	char times;
	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
	for (times = 1 ; times <= 10 ; times++)
	{
		_putchar(times);
	}
	}
_putchar(10);
}
