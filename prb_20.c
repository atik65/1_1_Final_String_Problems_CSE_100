#include <stdio.h>

void trimLeadSpace(char *);

int main()
{

    char testString[100];
    gets(testString);

    trimLeadSpace(testString);
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