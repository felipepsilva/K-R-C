//
// Exercise 1-15
//

#include <stdio.h>

float fahr_to_celcius(float fahr);

int main()
{
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf(" Fahrenheit | Celcius\n");
    printf("------------|---------\n");

    while (fahr <= upper)
    {
        printf("%8.0f    | %6.1f\n", fahr, fahr_to_celcius(fahr));
        fahr = fahr + step;
    }

    return 0;
}


float fahr_to_celcius(float fahr)
{
    float celsius = (5.0 / 9.0) * (fahr - 32);
    return celsius;
}
