//
// Exercise 1-8
//

#include <stdio.h>


main()
{
	int c, s, t, nl;

	s = t = nl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++s;
		if (c == '\t')
			++t;
		if (c == '\n')
			++nl;
	}

	printf("spaces: %d\ntabs: %d\nnewline: %d\n", s, t, nl);
}