#include <stdio.h>

/**
 * main - code enter point
 * Return: always 0 when success
 * asort(int *arry, int size) - Takes two arguments: an array passed by pointer
 * - and the size of that array, sorts the array in ascending order
 * dsort(int *arry, int size) - Takes two arguments: an array passed by pointer
 * - and the size of that array, sorts the array in descending order
 * int i, j - loop counters
 * char sortop - the sort mechansim the user will chooce ( has two options):
 * - sortop = 'U' => sort the list ascending.
 * - sortop = 'D' => sort the list descending/.
 * int temp - a temporry value holder
 * int size - hold the size of user array
 * int arry[size] - User array with the size size
 */

int asort(int *arry, int size)
{
	int i;
	int j;
	int temp;

	temp = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (j = i + 1 ; j < size ; j++)
		{
			if (arry[j] < arry[i])
			{
				temp = arry[i];
				arry[i] = arry[j];
				arry[j] = temp;
			}
		}
	}
	return (0);
}

int dsort(int *arry, int size)
{
	int i;
	int j;
	int temp;

	temp = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (j = i + 1 ; j < size ; j++)
		{
			if (arry[i] < arry[j])
			{
				temp = arry[j];
				arry[j] = arry[i];
				arry[i] = temp;
			}
		}
	}
	return (0);
}

int largers(int *arry , int size)
{
	int i;
    	int flarg;
	int slarg;

	flarg = arry[0];
	slarg = arry[1];

	for (i = 0 ; i < size ; i++)
	{
		if (arry[i] >  flarg)
		{
			slarg = flarg;
			flarg = arry[i];
		}
		else if (arry[i] > slarg)
		{
			slarg = arry[i];
		}
	}

	/** TODO: creat a struct that contains the flarg and  slarg
	 * - to return thier values to the main function
	 */

	printf("Largest number in the array is => %d\n", flarg);
	printf("Second largest number in the array is => %d\n", slarg);
	return (0);
}

int main(void)
{
	int i;
	int size;
	char sortop;

	printf("Size of array: ");
	scanf("%d", &size);

	int arry[size];

	for (i = 1 ; i <= size ; i++)
	{
		printf("Enter element number [%d] => ", i);
		scanf("%d", &arry[i - 1]);
	}
	printf("The array you enterd is:\n");
	for (i = 0 ; i < size ; i++)
	{
		printf("%d ", arry[i]);
	}
	printf("\n'U' to sort ascending\n'D' to sort descending\n");
	printf("'L' to get the Largest and second Largest number\n");
	scanf(" %c", &sortop);
	if (sortop == 'U')
	{
		asort(arry, size);
		printf("Sorted ascending sort..\n");
	}
	else if (sortop == 'D')
	{
		dsort(arry, size);
		printf("Sorted Descending sort..\n");
	}
	else if (sortop == 'L')
	{
		largers(arry, size);
		return (0);
	}
	else
	{
		printf("Invalid Input, please chooce from the options above\n");
		printf("NO changes..\n");
	}
	for (i = 0 ; i < size ; i++)
	{
		printf("%d\n", arry[i]);
	}
	return (0);
}
