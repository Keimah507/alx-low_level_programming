#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Start of program
 *
 * if/else if/else - test and output
 *
 * return: Always 0(Success)
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n>0)
		{
			printf("%d is positive\n", n);
		}
		else if (n<0)
		{
		printf("%d is negative\n", n);	
		}
		else 
		printf("%d id zero\n", n);
		return (0);
}
