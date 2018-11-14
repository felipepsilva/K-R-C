//
// Exercise 1-16
//

#include <stdio.h>

#define MAXLINE 50


int getline(char s[], int lim);
void copy(char to[], char from[]);


int main()
{
    int len;
    int total;
    int max;
    char line[MAXLINE];
    char start[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    {
        total = len;

        if (len == MAXLINE - 1 && line[MAXLINE - 2] != '\n')
        {
            copy(start, line);
        }
        while (len == MAXLINE - 1 && line[MAXLINE - 2] != '\n')
        {
            len = getline(line, MAXLINE);
            total += len;
        }

        printf("len: %d\n", total);

        if (total > max)
        {
            max = total;
            copy(longest, line);
        }
    }

    if (max > 0)
    {
        printf("Longest line: %d\n", max);
        if (max > MAXLINE)
            printf("Start with '%s'...", start);
        else
            printf("%s", longest);
    }

   return 0;
}


int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}


void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}