#include <stdio.h>

/**
 * main - code enter point
 * Return: Always 0 (success)
 *
 * C program that get an array with determinded size all by the user
 */

int main(void)
{
	int i;
	int size;

	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int arry[size];

	for (i = 0 ; i < size ; i++)
	{
		printf("Enter element number: [%d]=> ", i + 1);
		scanf("%d", &arry[i]);
	}

	return (0);
}
