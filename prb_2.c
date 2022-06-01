#include <stdio.h>

int copyString(char[], char[]);

int main()
{
    char string1[100];
    char string2[100];
    gets(string1);

    copyString(string1, string2);
    puts(string1);
    puts(string2);

    return 0;
}

int copyString(char word[], char wordTwo[])
{

    int i = 0;

    while (word[i] != '\0')
    {
        wordTwo[i] = word[i];
        i++;
    }

    wordTwo[i] = '\0';

    return 0;
}