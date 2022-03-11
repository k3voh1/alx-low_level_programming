#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int thous;
	int hunds;
	int tens;
	int ones;

	for (thous = '0'; thous <= '9'; thous++)
	{
		for (hunds = '0'; hunds <= '9'; hunds++)
		{
			for (tens = thous; tens <= '9'; tens++)
			{
				for (ones = hunds + 1; ones <= '9'; ones++)
				{
					putchar(thous);
					putchar(hunds);
					putchar(' ');
					putchar(tens);
					putchar(ones);
					if (!((thous == '9' && hunds == '8') && (tens == '9' && ones == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
