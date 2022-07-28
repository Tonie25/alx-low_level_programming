#include "main.h"
/**
 * _memset- fills memory with a constant byte.
 * @s: string source 
 * @b: constant byte to fill
 * @n: buffer length
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
