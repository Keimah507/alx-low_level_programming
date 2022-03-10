#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: using thr main function this program prints sizes of variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long lo;
	long long llo;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(lo));
	printf("size of a long long int: %ld byte(s)\n", sizeof(llo));
	printf("size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}	
