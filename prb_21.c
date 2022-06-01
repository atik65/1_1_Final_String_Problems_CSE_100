#include <stdio.h>
#include <string.h>

void trimTrailSpace(char *);

int main()
{

    char testString[100];
    gets(testString);

    trimTrailSpace(testString);
    puts(testString);

    return 0;
}

void trimTrailSpace(char *s)
{

    int index = strlen(s), i = 0;

    while (s[index - 1] == ' ' || s[index] == '\n' || s[index] == '\t')
    {
        index--;
    }

    s[index] = '\0';
}