#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when true
 */

int main(void)
{
	printf("Size of char: %zu byte", sizeof(char));
   	printf("Size of int: %zu bytes", sizeof(int));
	printf("Size of long int: %zu bytes", sizeof(long int));
       	printf("Size of long long int: %zu byets", sizeof(long long int));
	printf("Size of float: %zu bytes", sizeof(float));
	return 0;
}

