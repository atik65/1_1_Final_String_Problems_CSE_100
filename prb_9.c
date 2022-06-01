#include <stdio.h>

// VC for vowel and Consonant
void countVC(char *, int *);

int main()
{

    char testString[100];
    int resultArray[100];

    gets(testString);
    countVC(testString, resultArray);

    printf("Total Number of Vowel is = %d\n", resultArray[0]);
    printf("Total Number of Consonant is = %d\n", resultArray[1]);

    return 0;
}

void countVC(char *s, int *result)
{

    int i = 0;
    result[0] = 0;
    result[1] = 0;

    while (s[i] != '\0')
    {
        if (

            s[i] == 'a' ||
            s[i] == 'A' ||
            s[i] == 'e' ||
            s[i] == 'E' ||
            s[i] == 'i' ||
            s[i] == 'I' ||
            s[i] == 'o' ||
            s[i] == 'O' ||
            s[i] == 'u' ||
            s[i] == 'U'

        )
        {
            result[0] = result[0] + 1;
        }
        else if (

            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'A')

        )
        {
            if (

                s[i] != 'a' ||
                s[i] != 'A' ||
                s[i] != 'e' ||
                s[i] != 'E' ||
                s[i] != 'i' ||
                s[i] != 'I' ||
                s[i] != 'o' ||
                s[i] != 'O' ||
                s[i] != 'u' ||
                s[i] != 'U'

            )
            {
                result[1] = result[1] + 1;
            }
        }

        i++;
    }
}