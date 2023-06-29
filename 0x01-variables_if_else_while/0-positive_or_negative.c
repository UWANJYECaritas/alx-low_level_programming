#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if number is greater than 0, equal 0 or less than 0
 *
 * Return: 0 on success
 */
int mai(void)
{
	        int n;

		srand(time(0));
	     	n = rand() - RAND_MAX /2;
		/* your code goes there */
                if (n < 0)
		{
			printf("%d is %s\n", n, "negartive");
		}
		else if (n > 0)
		{
			printf("%d is %s\n", n, "positive");
		else 
		{
			printf("%d is %s\n", n, "zero"
		return (0);
}
