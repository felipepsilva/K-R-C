//
// Exercise 1-14
//

#include <stdio.h>


#define MAX_CHARS 255
#define MAX_HIST_COLS 20

main()
{
    int charCount[MAX_CHARS];
    int c;

    int i;
    for (i = 0; i < MAX_CHARS; ++i)
        charCount[i] = 0;

    while ((c = getchar()) != EOF)
    {
        ++charCount[c];
    }

    int maxCount = 0;

    for (i = 0; i < MAX_CHARS; ++i)
    {
        if (charCount[i] > maxCount)
            maxCount = charCount[i];
    }

    int cols = 0;

    printf(" char |   # |\n");
    for (i = 0; i < MAX_CHARS; ++i)
    {
        if (charCount[i] > 0)
        {
            printf(" %4d | %3d |", i, charCount[i]);

            if ((cols = charCount[i] * MAX_HIST_COLS / maxCount) <= 0)
                cols = 1;

            while (cols > 0)
            {
                printf("=");
                --cols;
            }
            printf("\n");
        }
    }
}