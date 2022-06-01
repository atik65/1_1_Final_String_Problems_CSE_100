#include <stdio.h>
#include <string.h>

void mostFrequent(char *, int *);
int main()
{
    char testString[100];
    int resultArray[10];

    gets(testString);

    mostFrequent(testString, resultArray);
    printf("Most Frequent Char is %c\n", resultArray[0]);
    printf("Total occurrence of %c is %d \n", resultArray[0], resultArray[1]);

    return 0;
}

void mostFrequent(char *s, int *storringArray)
{
    int freqArray[255], i, j = 0, asciiValue, MAX = 0;

    for (i = 0; i <= 255; i++)
    {
        freqArray[i] = 0;
    }

    while (s[j] != '\0')
    {
        asciiValue = (int)s[j];
        freqArray[asciiValue] += 1;
        j++;
    }

    for (i = 0; i <= 255; i++)
    {
        if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
        {
            if (freqArray[i] > MAX)
            {
                MAX = i;
            }
        }
    }

    storringArray[0] = MAX;
    storringArray[1] = freqArray[MAX];
}