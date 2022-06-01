#include <stdio.h>
#include <string.h>

int allOccurence(char *, char);

int main()
{
    char testChar, testString[100];

    gets(testString);
    scanf("%c", &testChar);

    int occurencePosition = allOccurence(testString, testChar);

    if (occurencePosition)
    {
        printf("Toal Occurence of %c is = %d", testChar, occurencePosition);
    }
    else
    {
        printf("No Occurence found!!");
    }

    return 0;
}

int allOccurence(char *s, char c)
{
    int i, occurence = 0;

    for (i = 0; i < strlen(s); i++)
    {

        if (s[i] == c)
        {
            occurence++;
        }
    }

    return occurence;
}