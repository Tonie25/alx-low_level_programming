#include "main.h"
/**
 *_strncat- joins two strings but adds entered number of bytes
* @dest: string to be appended
* @src: String to be completed at the end of dest 
* @n: integer parameterfor comparing index
* Return: returns new joined srting
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
} 
 
