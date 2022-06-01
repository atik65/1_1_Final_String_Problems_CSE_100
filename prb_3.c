#include <stdio.h>
#include <string.h>

char *addStrings(char *, char *);

int main()
{

    char string1[100];
    char string2[100];

    gets(string1);
    gets(string2);

    addStrings(string1, string2);

    puts(string1);

    return 0;
}

char *addStrings(char *s1, char *s2)
{
    int i = 0, j = 0;

    while (s1[i] != '\0')
    {
        s1[i] = s1[i];
        i++;
    }

    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';

    return s1;
}