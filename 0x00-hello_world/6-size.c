#include <stdio.h>



/**
 * main - prints the size of various types
 *
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	int i;
	char c;
	long int j;
	long long int k;
	float l;

	printf("The size of int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of long int is: %lu.\n", (unsigned long)sizeof(j));
	printf("The size of long long int is: %lu.\n", (unsigned long)sizeof(k));
	printf("The size of float is: %lu.\n", (unsigned long)sizeof(l));

	return (0);
}
