#include "main.h"
/**
*_isdigit - function that confirms whether or not a character is a digit. 
*@c:  character to be checked
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
