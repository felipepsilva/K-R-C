//
// Exercise 1-13
//

#include <stdio.h>


#define MAX_WORD_LEN 20
#define MAX_HIST_COLS 20

main()
{
    int wordLenghts[MAX_WORD_LEN];
    int c, charCount;

    charCount = 0;

    int i;
    for (i = 0; i < MAX_WORD_LEN; ++i)
        wordLenghts[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (charCount > 0)
            {
                if (charCount < MAX_WORD_LEN)
                    ++wordLenghts[charCount];

                charCount = 0;
            }
        }
        else
        {
            ++charCount;
        }
    }

    int maxLen = 0;

    for (i = 0; i < MAX_WORD_LEN; ++i)
    {
        if (wordLenghts[i] > maxLen)
            maxLen = wordLenghts[i];
    }

    int cols = 0;

    printf(" len |   # |\n");
    for (i = 0; i < MAX_WORD_LEN; ++i)
    {
        if (wordLenghts[i] > 0)
        {
            printf("%4d | %3d |", i, wordLenghts[i]);

            if ((cols = wordLenghts[i] * MAX_HIST_COLS / maxLen) <= 0)
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