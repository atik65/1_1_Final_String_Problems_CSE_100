#include <stdio.h>
#include <string.h>

void lowestFrequent(char *, int *);
int main()
{
    char testString[100];
    int resultArray[10];

    gets(testString);

    lowestFrequent(testString, resultArray);
    printf("Least Frequent Char is %c\n", resultArray[0]);
    printf("Total occurrence of %c is %d \n", resultArray[0], resultArray[1]);

    return 0;
}

void lowestFrequent(char *s, int *storringArray)
{
    int freqArray[255], i, j = 0, asciiValue, MIN = 5000;

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

    for (i = 1; i <= 255; i++)
    {
        if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
        {
            if ((freqArray[i] > 0) && (freqArray[i] < MIN))
            {
                MIN = i;
            }
        }
    }

    storringArray[0] = MIN;
    storringArray[1] = freqArray[MIN];
}