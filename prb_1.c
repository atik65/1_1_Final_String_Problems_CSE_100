
#include <stdio.h>

int length(char[]);

int main()
{

    char string[100];
    gets(string);
    printf("Length is = %d", length(string));

    return 0;
}

int length(char string1[])
{
    int length = 0, i = 0;

    while (string1[i] != '\0')
    {

        length++;
        i++;
    }

    return length;
}