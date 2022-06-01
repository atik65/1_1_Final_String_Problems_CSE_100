#include <stdio.h>
#include <string.h>

char *reverseString(char *, char *);

int main()
{

    char testString[100];
    char reversedString[100];

    gets(testString);

    reverseString(testString, reversedString);

    puts(reversedString);

    return 0;
}

char *reverseString(char *s, char *rs)
{
    int i = 0;

    int len = strlen(s);

    while (s[i] != '\0')
    {

        rs[len - 1 - i] = s[i];

        i++;
    }

    rs[len] = '\0';

    return rs;
}