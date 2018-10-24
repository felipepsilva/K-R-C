//
// Exercise 1-5
//


#include <stdio.h>


main()
{
	int fahr;
	
	printf(" Fahrenheit | Celcius\n");
	printf("------------|---------\n");

	for(fahr = 300; fahr >= 0; fahr = fahr - 20)
	{
		printf("%8d    | %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
	}
}
