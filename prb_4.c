#include <stdio.h>
#include <string.h>

int stringCompare(char *, char *);

int main()
{
    char string1[100], string2[100];

    gets(string1);
    gets(string2);

    int state = stringCompare(string1, string2);
    if (state == 0)
    {
        printf("Both are equal");
    }
    else if (state > 0)
    {
        printf("%s is bigger", string1);
    }
    else if (state < 0)
    {
        printf("%s is bigger", string2);
    }

    return 0;
}

int stringCompare(char *s1, char *s2)
{
    int i = 0;
    int state = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] == s2[i])
        {
            state = 0;
        }
        else if (s1[i] > s2[i])
        {
            state = 1;
            return state;
        }
        else if (s1[i] < s2[i])
        {
            state = -1;
            return state;
        }
        i++;
    }

    return state;
}