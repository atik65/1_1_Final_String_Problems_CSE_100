#include <stdio.h>
#include <string.h>

int lastOccurence(char *, char);

int main()
{
    char testChar, testString[100];

    gets(testString);
    scanf("%c", &testChar);

    int occurencePosition = lastOccurence(testString, testChar);

    if (occurencePosition)
    {
        printf("The Last Occurence poistion is = %d", occurencePosition + 1);
    }
    else
    {
        printf("No Occurence found!!");
    }

    return 0;
}

int lastOccurence(char *s, char c)
{
    int i;

    for (i = strlen(s) - 1; i >= 0; i--)
    {

        if (s[i] == c)
        {
            return i;
        }
    }

    return 0;
}