#include <stdio.h>

/**
 * main - code enter point
 * Return: Always 0 (success)
 *
 * C program that show the possible compo of two two numbers for all
 * - numbers from 0 to 9 uniqely
 *
 * int i, j, k, l -   loop counters, i start from 48 (0 ASCII code) to
 * - 57 (9 ASCII code), the rest start from the next number of i to 57
 * - (9 ASCII code)
 * int sp, kma, nl - contain the ASCII code of space, comma,
 * -newline respectivly
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int sp;
	int kma;
	int nl;

	sp = 32;
	kma = 44;
	nl = 10;

	for (i = 48, j = 48 ; j <= 57 ; i++, j++)
	{
		for (k = 48  , l = i + 1 ; l <= 57 ; k++, l++)
		{
			putchar((char)i);
			putchar((char)j);
			putchar((char)sp);
			putchar((char)l);
			putchar((char)k);
			if (k > 0)
			{
				putchar((char)kma);
				putchar((char)sp);
			}
		}
	}
	putchar(nl);
	return (0);
}
