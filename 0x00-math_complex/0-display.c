#include "holberton.h"

void display_complex_number(complex c)
{
	/* re && im == 0? */
	if (c.re == 0 && c.im == 0)
	{
		printf("%d\n", 0);
		return;
	}
	/* im = 0? */
	if (c.im == 0)
	{
		printf("%g\n", c.re);
		return;
	}
	/* re = 0? */
	if (c.re == 0)
	{
		printf("%gi\n", c.im);
		return;
	}
	if (c.im < 0)
		printf("%g - %gi\n", c.re, -1 * c.im);
	else
		printf("%g + %gi\n", c.re, c.im);
}