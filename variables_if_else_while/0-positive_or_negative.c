#include <stdio.h>
#include <time.h>
/**
 * main - rand find the number aleatory
 *
 *Return: 0
 */
int main(void)
{
		int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n < 0)
	printf("%i is negative\n", n);
else

if (n == 0)
	printf("%i is zero\n", n);
if (n > o)
	printf("%i is positive\n", n);


	return (0);
}

