#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	scanf("%d \n", &n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("iszero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
