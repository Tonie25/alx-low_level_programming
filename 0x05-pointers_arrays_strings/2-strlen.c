#include "main.h"
/**
* _strlen- function that returns length of a string 
* @s: input string
*
* Return: string length
*/
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++);
	return (index);
}
