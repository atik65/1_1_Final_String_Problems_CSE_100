#include <stdio.h>
#include <string.h>

void trimLeadSpace(char *);
void trimTrailSpace(char *);

int main()
{

    char testString[100];
    gets(testString);

    trimLeadSpace(testString);
    trimTrailSpace(testString);
    puts(testString);

    return 0;
}

void trimLeadSpace(char *s)
{

    int index = 0, i = 0;

    while (s[index] == ' ' || s[index] == '\n' || s[index] == '\t')
    {
        index++;
    }

    while (s[i] != '\0')
    {
        s[i] = s[index + i];
        i++;
    }

    s[i] = '\0';
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