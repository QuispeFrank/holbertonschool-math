#include "holberton.h"

/**
 * display_complex_number - a function that displays a complex number.
 * @c: structure that contains re and im values.
 *
 * Description: a function that displays the complex numbers,
 * followed by a new line.
 *
 * Return: nothing.
 */
void display_complex_number(complex c)
{
	/* impresion de la parte real */
	printf("%g", c.re);
	/* impresion de la parte imaginaria */

	/* caso 1 */
	if (c.im == 1)
		printf(" + i\n");
	else if (c.im == -1)
		printf(" - i\n");
	else if (c.im < 0)
		printf(" - %gi\n", -1 * c.im);
	else if (c.im > 0)
		printf(" + %gi\n", c.im);
	else
		printf("\n");
}
