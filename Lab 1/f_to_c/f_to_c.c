/* Varrahan Uthayan 101229572
 SYSC 2006 Lab 1, Exercise 3 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int lower, upper, step;
	float fahr, celsius;

	/* Set lower and upper limits of the
	   table, and step size. 
	 */

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;

	while (fahr <= upper)
	{
		celsius = 5.0 / 9.0 * (fahr - 32.0);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return EXIT_SUCCESS;
}



