#include <stdio.h>

void toggleCase(char *);

int main()
{

    char testWord[100];

    gets(testWord);
    toggleCase(testWord);
    puts(testWord);

    return 0;
}

void toggleCase(char *s)
{

    int i = 0;

    while (s[i] != '\0')
    {

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + ('a' - 'A');
        }

        i++;
    }
}