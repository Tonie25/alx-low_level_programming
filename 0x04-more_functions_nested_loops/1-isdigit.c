#include "main.h"
/**
*_isdigit - function that confirms whether or not a character is a digit. 
*@c:  character to be checked
*Return: return 1 if it is uppercase , 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
else 
return (0);
}
