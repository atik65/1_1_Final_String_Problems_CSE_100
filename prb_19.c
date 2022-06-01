#include <stdio.h>
#include <string.h>

void allCharFrequency(char *, int *);
int main()
{
    char testString[100];
    int resultArray[255], i;

    gets(testString);

    allCharFrequency(testString, resultArray);

    for (i = 0; i <= 255; i++)
    {
        if (resultArray[i])
        {
            printf("Frequency of %c = %d\n", i, resultArray[i]);
        }
    }

    return 0;
}

void allCharFrequency(char *s, int *resultChar)
{
    int freqArray[255], i, j = 0, asciiValue, MIN = 500;

    for (i = 0; i <= 255; i++)
    {
        freqArray[i] = 0;
        resultChar[i] = 0;
    }

    while (s[j] != '\0')
    {
        asciiValue = (int)s[j];
        freqArray[asciiValue] += 1;
        j++;
    }

    for (i = 1; i <= 255; i++)
    {
        if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
        {
            resultChar[i] = freqArray[i];
        }
    }
}