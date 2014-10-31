/*
* This function will calculate n number of Leibniz values.
 * n is defined in the line that calls this function.
 */

double pi_leibniz (int n)
{
	double tot = 0, sign = 1, denom = 1;
	int i;
	
	for ( i = 0; i < n; i++)
	{
		tot += sign / denom;
		sign = -sign;
		denom += 2;
	}
	return 4 * tot;
}


