#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program will complete the source code to print random number
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negatuve\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
