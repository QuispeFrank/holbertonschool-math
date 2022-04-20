#ifndef _MATH_COMPLEX_
#define _MATH_COMPLEX_

	#include <stdio.h>

	/**
	 * struct my_struct - complex number. 
	 * @re: real part.
	 * @im: imaginary part.
	 *
	 * Description: a struct that represents a 
	 * complex number, it takes as a first member 
	 * the real part and as a second member the 
	 * imaginary part.
	 */
	typedef struct my_struct
	{
		double re;
		double im;
	} complex;

	void display_complex_number(complex c);
	complex conjugate(complex c);
#endif
