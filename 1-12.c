//
// Exercise 1-12
//

#include <stdio.h>

#define IN 1
#define OUT 0


main()
{
	int c;

    int state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
                putchar('\n');

            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
        }

        if (state == IN)
            putchar(c);

    }
}