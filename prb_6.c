#include <stdio.h>

void toLowerCase(char *);

int main()
{
    char testWord[100];

    gets(testWord);

    toLowerCase(testWord);
    puts(testWord);

    return 0;
}

void toLowerCase(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + ('a' - 'A');
        }

        i++;
    }
}