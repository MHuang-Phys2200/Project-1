/*
 * Comments goes here
 */
#include <stdio.h>
#include <math.h>
#include <time.h>

#include "pi_funs.h"

double timeleibniz(), timebbp();

int main(void)
{
	double time_leibniz = 0, time_bbp = 0, count_leibniz = 0, count_bbp = 0;
	
	while (time_leibniz < 5)
	{
		time_leibniz += timeleibniz();
		count_leibniz += 1;
	}
	double t1 = time_leibniz / count_leibniz;
	
	while (time_bbp < 5)
	{
		time_bbp += timebbp();
		count_bbp += 1;
	}
    double t2 = time_bbp / count_bbp;
    
    printf("%f %f %f %f %f %f", count_leibniz, time_leibniz, t1, count_bbp, time_bbp, t2);
    printf("\n"); 
    printf("Leibniz/BBP %21.0f \n", t1/t2); 

    return 0;
}

/* times one iteration of leibniz */
double timeleibniz()
{
	clock_t begin, end;
	double time_spent;
	begin = clock();
	
	int i;
	double pi = 0;
	
	for (i =100000; i < 2000000; i += 100000)
	{
		if (fabs(pi - M_PI) < pow(10, -6))
		{
    		end = clock();
    	}
    	else
    	{
    		pi = pi_leibniz(i);
		}
    }
	
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	return time_spent;
}

/* times one iteration of bbp */
double timebbp()
{
	clock_t begin, end;
	double time_spent;
	begin = clock();
	
	int i;
	double pi = 0;
	
	for (i = 0; i < 200; i += 1)
	{
		if (fabs(pi - M_PI) < pow(10, -6))
		{
    		end = clock();
    	}
    	else
    	{
    		pi = pi_bbp(i);
		}
    }
    	

	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	return time_spent;
}

