#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int multi, multj, res;

	for (multi = 0; multi <= 9; multi++)
	{
		for (multj = 0; multj <= 9; multj++)
		{
			res = multi * multj;
			if (multj == 0)
			{
				_putchar(res + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (res < 10)
				{
					_putchar(' ');
					_putchar(res + '0');
				}
				else
				{
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
