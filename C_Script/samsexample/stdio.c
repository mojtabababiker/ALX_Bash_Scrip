#include <stdio.h>

/**
 * main - code enter point
 * Return: Always 0 (success)
 *
 * C program that test all the input and output functions
 *
 * 1- the getc(*file-stream) function - get one char (first char
 *  - from the stdin and returned it's value as an integer
 *  - (save the returned value in int variable)
 *  - return EOF or '-1' if an error occurs or if it's the end-of-line
 *
 * 2- the getchar() function - same as getc(*file-stream), here *file-stream is
 *  - the 'stdin'.
 *
 * 3- putc(int char , *file-stream) function - put or print one character
 *  - to the specified *file-stream
 *
 * 4- putchar(int char) function - same as putc(int char, stdout)
 *
 * 5- printf(*formated-string, expression'variables')
 */

int main(void)
{
	int chr;
	int i;

	printf("Enter your name's first letter:\n");
	chr = getc(stdin);
	if (chr == EOF)
	{
		printf("Sorry make sure you enterd your letter right\n");
	}
	else
	{
		printf("Your first lette is: ");
		putc(chr, stdout);
		putc(10, stdout);
		for (i = 0 ; i <= 11500 ; i++)
			;
		putchar(10);
		do
		{
			putchar(chr);
			chr += 1;
		}while((chr != 91) && (chr != 123));

		putchar(10);
	}
	return (0);
}
