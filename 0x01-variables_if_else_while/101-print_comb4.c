#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ones;
	int tens;
	int hunds;

	for (hunds = '0'; hunds <= '9'; hunds++)
	{
		for (tens = (hunds + 1); tens <= '9'; tens++)
		{
			for (ones = (tens + 1); ones <= '9'; ones++)
			{
				putchar(hunds);
				putchar(tens);
				putchar(ones);
				if (hunds != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
