//
// Exercise 1-3
//

#include <stdio.h>


main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf(" Fahrenheit | Celcius\n");
	printf("------------|---------\n");

	while(fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%8.0f    | %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
