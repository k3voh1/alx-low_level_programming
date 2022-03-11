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
	int thous;

	for (thous = '0'; thous <= '9'; thous++)
	{
		for (hunds = '0'; hunds <= '9'; hunds++)
		{
			for (tens = '0'; tens <= '9'; tens++)
			{
				for (ones = (tens + 1); ones <= '9'; ones++)
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
}
