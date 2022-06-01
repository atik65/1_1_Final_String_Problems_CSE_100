#include <stdio.h>

void toUpperCase(char *);
int main()
{

    char word[100];
    gets(word);
    toUpperCase(word);
    puts(word);

    return 0;
}

void toUpperCase(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }
        i++;
    }
}