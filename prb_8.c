#include <stdio.h>

// ADS for alphabet, Digit , Special Character
void totalADS(char *, int *);

int main()
{
    char testString[100];
    int i, result[3];

    gets(testString);

    totalADS(testString, result);

    printf("Toal Alphabet = %d\n", result[0]);
    printf("Toal Number = %d\n", result[1]);
    printf("Toal Special Char = %d\n", result[2]);
    return 0;
}

void totalADS(char *s, int *total)
{
    int i = 0;

    total[0] = 0;
    total[1] = 0;
    total[2] = 0;

    while (s[i] != '\0')
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            total[0] = total[0] + 1;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            total[1] = total[1] + 1;
        }
        else
        {
            total[2] = total[2] + 1;
        }

        i++;
    }
}