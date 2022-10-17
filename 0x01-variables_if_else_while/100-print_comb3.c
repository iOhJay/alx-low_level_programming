#include <stdio.h>

/**
 * main - Prints all possible smallest combinations of two different digits,
 * in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int Digit1, Digit2;

	for (Digit1 = 0; Digit1 < 9; Digit1++)
	{
		for (Digit2 = Digit1 + 1; Digit2 < 10; Digit2++)
		{
		putchar((Digit1 % 10) + '0');
		putchar((Digit2 % 10) + '0');

		if (Digit2 == 8 && Digit2 == 9)
			continue;

		putchar(',');
		putchar(' ');
		}
	}
		putchar('\n');

		return (0);

}
