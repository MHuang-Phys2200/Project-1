/*
 * Comments goes here
 */
#include <stdio.h>
#include <math.h>
#include <time.h>

#include "pi_funs.h"

int main(void)
{
	int i;
	double pi = 0;
	
	for (i =100000; i < 2000000; i += 100000)
	{
		if (fabs(pi - M_PI) < pow(10, -6))
		{
    		return 0;
    	}
    	else
    	{
    		pi = pi_leibniz(i);
    		printf("%8d   %20.15f   %20.15f\n", i, pi, fabs(pi - M_PI));
		}
    }
}

