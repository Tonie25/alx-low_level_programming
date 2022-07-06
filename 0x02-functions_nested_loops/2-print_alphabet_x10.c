#include "main.h"

/**
 * print_alphabet_x10 -> prints lowercase alphabets
 */

void print_alphabet_x10(void)
{
	int k;
	int w;
	
	for (w = 0; w < 10; w++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{	
		      _putchar(k);
		}
	
	        _putchar('\n');
        }
}

