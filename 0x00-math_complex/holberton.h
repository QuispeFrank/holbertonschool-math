#ifndef _MATH_COMPLEX_
#define _MATH_COMPLEX_

	#include <stdio.h>

	/**
	 * struct my_struct - 
	 * @a: First member
	 * @b: Second member
	 *
	 * Description: Longer description
	 */
	typedef struct my_struct
	{
		double re;
		double im;
	} complex;

	void display_complex_number(complex c);
#endif
