#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*find aout about headers*/

/**
 * main- Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() -RAND_MAX /2;
	/*enter code here*/
	if (n > 0)
		printf("%d is positive\n",
n);
	else if (n==0)
		printf("%d is zero\n", n);
	else 
		printf("%d is negative\n",
n);
	return (0);
}
