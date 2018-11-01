//
// Exercise 1-9
//

#include <stdio.h>


main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			putchar(' ');
			while ((c = getchar()) == ' ');

			if (c == EOF)
				break;
		}

		putchar(c);
	}
}