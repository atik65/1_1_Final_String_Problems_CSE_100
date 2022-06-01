#include <stdio.h>
#include <string.h>

void searchAllOccurence(char *, char, int *);

int main()
{
    char testChar, testString[100];
    int allOccurPosition[100], i = 0;

    gets(testString);
    scanf("%c", &testChar);

    searchAllOccurence(testString, testChar, allOccurPosition);

    while (allOccurPosition[i] != '\0')
    {
        printf("%d occured position is = %d\n", i + 1, allOccurPosition[i]);

        i++;
    }

    return 0;
}

void searchAllOccurence(char *s, char c, int *occurPositions)
{
    int i, j = 0;

    for (i = 0; i < strlen(s); i++)
    {

        if (s[i] == c)
        {
            occurPositions[j] = i + 1;
            j++;
        }
    }

    occurPositions[j] = '\0';
}