/*
 * This function will calculate n number of Bailey–Borwein–Plouffe values.
 * n is defined in the line that calls this function.
 */

double pi_bbp (int n)
{
	double total = 0, eight = 0, power = 1;
	int i;
	
	for (i = 0; i < n; i++)
	{
		total += (1 / power) * ( (4 / (eight + 1)) -
					 (2 / (eight + 4)) -
					 (1 / (eight + 5)) -
					 (1 / (eight + 6)) );
		power *= 16;
		eight += 8;
	}
	return total;
}


