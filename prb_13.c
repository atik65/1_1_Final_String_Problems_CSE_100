#include <stdio.h>
#include <string.h>

int firstOccurence(char *, char);

int main()
{
    char testChar, testString[100];

    gets(testString);
    scanf("%c", &testChar);

    int occurencePosition = firstOccurence(testString, testChar);

    if (occurencePosition)
    {
        printf("The first Occurence poistion is = %d", occurencePosition + 1);
    }
    else
    {
        printf("No Occurence found!!");
    }

    return 0;
}

int firstOccurence(char *s, char c)
{
    int i;

    for (i = 0; i < strlen(s); i++)
    {

        if (s[i] == c)
        {
            return i;
        }
    }

    return 0;
}