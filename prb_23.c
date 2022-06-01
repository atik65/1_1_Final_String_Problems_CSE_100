#include <stdio.h>

void remove_extra_blanks(char *, char *);

int main()
{

    char testString[100];
    char trimmedString[100];
    gets(testString);

    remove_extra_blanks(testString, trimmedString);

    puts(trimmedString);

    return 0;
}

void remove_extra_blanks(char *s, char *trimmed)
{

    int i = 0, j = 0;

    while (s[i] != '\0')
    {

        if (s[i] == ' ')
        {
            trimmed[j] = ' ';
            j++;

            while (s[i] == ' ')
            {
                i++;
            }
        }

        trimmed[j] = s[i];
        i++;
        j++;
    }

    trimmed[j] = '\0';
}