//
// Exercise 1-4
//


#include <stdio.h>


main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	printf(" Celsius | Fahrenheit\n");
	printf("---------|------------\n");

	while(celsius <= upper)
	{
		fahr = (celsius / (5.0/9.0)) + 32;
		printf("%6.0f   |  %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
