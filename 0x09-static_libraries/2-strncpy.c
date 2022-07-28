#include "main.h"
/**
 * _strncpy - Function that copies a string, including null byte. It mostly uses
 * inputted number of bytes .
 * if the length of source string is less than the maximum byte number'
 * the rest of the destination string is filled with null bytes
 * Similar to the standard library function 'strncpy'.
 * @dest: buffer that stores string copy
 * @src: source string
 * @n: max number of copied bytes
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
