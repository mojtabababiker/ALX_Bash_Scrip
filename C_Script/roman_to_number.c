#include <stdio.h>

/**
 * C program that convert from roman numerals to numbers and vice-versa
 * main - code enter point
 * Return: Always 0 (success), nonzero otherwise
 *
 * roman_to_num - convert a roman numerals to the equivalent value in numbers
 * Return: Always 0 (success), nonzero otherwise
 *
 * num_to_roman - convert a number to the equivalent value in roman numerals
 * Return: Always 0 (success), nonzero otherwise
 *
 * int roman_dict[2][7] - contains the roman numerals and thier value
 * int rsize - the length of the enterd roman numerals
 * int rnum[rsize] - contains the entered roman numerals
 * int dnum[rsize] - contains the decimal values of the entered roman numerals
 * int i - loop counter
 * int j - non logic use temporry
 * int result - the convertion result holder
 * int temp - temporry value holder
 */

int roman_to_num(int roman_dict[2][7])
{
	int rsize;
	int i;
	int j;
	int result;
	int temp;

	printf("How many roman numerals would you like to enter: ");
	scanf("%d", &rsize);

	int rnum[rsize];
	int dnum[rsize];

	result = 0;

	printf("\nPlease enter one numeral by a time\n");
	for (i = 0 ; i < rsize ; i++)
	{
		printf("Enter numeral [%d]: ", i);
		j = getchar(); /*to get the  extra charcter out of the input*/
		rnum[i] = getchar();
	}
	printf(" Roman numerals = ");
	for (i = 0 ; i < rsize ; i++)
	{
		printf("%c", rnum[i]);
	}
	putchar(10); /*print a new line*/

	for (i = 0 ; i < rsize ; i++)/*looping through user input numerals*/
	{
		for (j = 0 ; j < 7 ; j++)/*looping through roman_dict*/
		{
			/*compire romans from rnum to romans from roman_dicts*/
			if (rnum[i] == roman_dict[0][j])
			{
				/*save the roman numeral value from
				 *roman_dict[1][] to dnum[]
				 */
				dnum[i] = roman_dict[1][j];
				break;
			}
		}
	}
	/*calculate the result*/
	/*loop through dnum[] values*/
	for (i = 0 ; i < rsize ; i++)
	{
		if (i != (rsize - 1))/*to prevent OUTOFINDEX error*/
		{
			/*applying Roman numerals laws*/
			if (dnum[i] < dnum[i + 1])
			{
				temp = dnum[i + 1] - dnum[i];
				result = result + temp;
				i =  i + 1;
				continue;
			}
			else
			{
				result = result + dnum[i];
			}
		}
		else
		{
			result = result + dnum[i];
		}
	}
	printf("\n Result = %d\n", result);
	return (0);
}

int num_to_roman(int roman_dict[][7])
{

	return (0);
}

int main(void)
{
	char opt;

	int roman_dict[2][7] = {{73, 86, 88, 76,  67,  68,   77}, { 1,  5, 10, 50, 100, 500, 1000}};

	printf("Welcome and Hello\ntFollow the instructions below carefully");
	printf("\nThis program is case-sensitive,\n");
	printf(" so please in Roman to Number options make sure\n");
	printf(" to enter all litters in a capiltal form\n\n");
	printf("Choose from options below:\n");
	printf("To convert from Roman to Number => R\n");
	printf("To convert from Number to Roman => N\n");
	scanf(" %c", &opt);

	if (opt == 'R')
		roman_to_num(roman_dict);
	else if (opt == 'N')
		num_to_roman(roman_dict);
	else
	{
		printf("invalide Choice.\nExiting the program");
		return (1);
	}

	return (0);
}
