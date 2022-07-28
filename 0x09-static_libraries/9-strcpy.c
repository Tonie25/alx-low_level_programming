#include "main.h"

/**
 * _strcpy - copy string of other variable
 * @dest: destiny
 * @src: the copia
 *
 * Return: return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

